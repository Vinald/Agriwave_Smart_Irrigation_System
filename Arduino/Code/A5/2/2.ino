// libraries

#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>
#include <FirebaseESP32.h>
#include <BluetoothSerial.h>
#include <my_new_model.h>
#include <vector>
#include <TimeLib.h>


// assingning pins

const int soilMoisturePin = A0; 
const int LDRPin = 34;
const int temperatureSensorPin = 17;
const int relayPin = 32;
bool pumpStatus = false; 

// constants for Thingspeak

const char* ssid = "vinald";
const char* password = "14231423";
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";

// constants for Firebase

#define WIFI_SSID "vinald"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://smart-irrigation-system-97ed9-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyA-RMphMNooQI4_ggJBPfmn-pbujESbARc")

// creating instances for sensors and components

BluetoothSerial SerialBT;
OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);
LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client;
FirebaseData firebaseData;

// constants for pump control

const int moistureThresholdMin = 600;
const int moistureThresholdMax = 1000;
const int temperatureThresholdMin = 30;
const int temperatureThresholdMax = 50;

// Declare a model function

void loadRandomForestModel();

// decalring variables for inputs
char* str_CropType;
float temperature;
float SoilMoisture;
float CropDays;

// Function to label encode the crop type
int labelEncodeCropType(char* str_CropType) {
  if(str_CropType == "Wheat"){
    return 0;
  }else if(str_CropType == "Groundnuts"){
    return 1;
  }else if(str_CropType == "Garden Flowers"){
    return 2;
  }else if(str_CropType == "Maize"){
    return 3;
  }else if(str_CropType == "Paddy"){
    return 4;
  }else if(str_CropType == "Potato"){
    return 5;
  }else if(str_CropType == "Pulse"){
    return 6;
  }else if(str_CropType == "Sugarcane"){
    return 7;
  }else if(str_CropType == "Coffee"){
    return 8;
  }
  return -1;
}

// setup 
void setup()
{
  // start the serial monitor
  Serial.begin(9600);

  // set the input and output pins
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);

  // relay pin intialization
  digitalWrite(relayPin, LOW);

  // start the lcd
  lcd.init();
  lcd.backlight();

  // start the temperature sensor
  DS18B20.begin();

  // connect to the wifi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  
  // start Thingspeak and firebase
  ThingSpeak.begin(client);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  // start the bluetooth
  SerialBT.begin("ESP32-Bluetooth");
  Serial.println("Bluetooth device ready for pairing.");
}

// loop

void loop()
{
  // ldr input value
  int ldrValue = analogRead(LDRPin);

  if(ldrValue < 1000)
  {
    // Update ThingSpeak and Firebase
    ThingSpeak.setField(1, mappedSoilMoistureValue);
    ThingSpeak.setField(2, temperatureC);
    ThingSpeak.setField(3, ldrValue);
    ThingSpeak.setField(4, (int)temperatureSensorPin);
    ThingSpeak.setField(5, pumpStatus);
    int x = ThingSpeak.writeFields(myChannel, apiKey);
    if (x == 200) {
      Serial.println("ThingSpeak Updated");
    } else {
      Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
    }

    unsigned long currentMillis = millis();
    String timestampStr = String(currentMillis / 1000);
    Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
    Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
    Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);
    Firebase.setString(firebaseData, "/sensor_readings/" + timestampStr + "/timestamp", timestampStr);
    Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus);

    // Display on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.print(mappedSoilMoistureValue);
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperatureC);
    lcd.print(" C ");
    lcd.setCursor(0, 2);
    lcd.print("LDR: ");
    lcd.print(ldrValue);
  }

  else
  {
    // moisture sensor input and calibration
    int soilMoistureValue = analogRead(soilMoisturePin);
    int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);

    // temperature input values
    DS18B20.requestTemperatures();
    float temperatureC = DS18B20.getTempCByIndex(0);

    // ldr input value
    // int ldrValue = analogRead(LDRPin);

    // Preprocessing of sensor data
    temperature = temperatureC;
    str_CropType = "Coffee";
    int CropType = labelEncodeCropType(str_CropType);
    SoilMoisture = mappedSoilMoistureValue;  
    CropDays = 21;

     // Performing feature extraction
    float features_array[] = {CropType, CropDays, SoilMoisture,  temperature};

    // Predict using the converted features
    int prediction = myModel.predict(features_array);

    // Display the predicted result
    Serial.print("Predicted Result: ");
    if (prediction == 0) {
      Serial.println("No Irrigation");
    } else if (prediction == 1) {
      Serial.println("Irrigation");
    } else {
      Serial.println("Unknown");
    }

    // Bluetooth command handling
    if (SerialBT.available()) {
    char command = SerialBT.read();
    if (command == '1') { // Turn on the pump
      pumpStatus = true;
      digitalWrite(relayPin, HIGH);
      Serial.println("Pump turned ON");
    } else if (command == '0') { // Turn off the pump
      pumpStatus = false;
      digitalWrite(relayPin, LOW);
      Serial.println("Pump turned OFF");

    }

      // Check pump conditions
    bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
                        (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

    if (newPumpStatus != pumpStatus) {
      pumpStatus = newPumpStatus;
      digitalWrite(relayPin, pumpStatus ? HIGH : LOW);
      Serial.println(pumpStatus ? "Pump turned ON" : "Pump turned OFF");

    }
    // Update ThingSpeak and Firebase
    ThingSpeak.setField(1, mappedSoilMoistureValue);
    ThingSpeak.setField(2, temperatureC);
    ThingSpeak.setField(3, ldrValue);
    ThingSpeak.setField(4, (int)temperatureSensorPin);
    ThingSpeak.setField(5, pumpStatus);

    int thingSpeakStatusCode = ThingSpeak.writeFields(myChannel, apiKey);
    if (thingSpeakStatusCode == 200) {
      Serial.println("ThingSpeak Updated");
    } else {
      Serial.println("ThingSpeak Problem. HTTP error code: " + String(thingSpeakStatusCode));
    }

    unsigned long currentMillis = millis();
    String timestampStr = getFormattedTimestamp(currentMillis / 1000);
    Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
    Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
    Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);
    Firebase.setString(firebaseData, "/sensor_readings/" + timestampStr + "/timestamp", timestampStr);
    Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus);
    Serial.println("Data logged to Firebase");
    // Display on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.print(mappedSoilMoistureValue);
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperatureC);
    lcd.print(" C ");
    lcd.setCursor(0, 2);
    lcd.print("LDR: ");
    lcd.print(ldrValue);

    delay(500);
  
  }
}

// Function to get a formatted timestamp string (YYYY-MM-DD HH:MM:SS)
String getFormattedTimestamp(unsigned long secondsSinceEpoch) {
  // Get the current time in seconds since the epoch
  time_t currentTime = secondsSinceEpoch;

  // Use the TimeLib library to format the timestamp
  struct tm *ptm = gmtime(&currentTime);

  // Create a formatted timestamp string
  char timestampBuffer[20];
  snprintf(timestampBuffer, sizeof(timestampBuffer), "%04d-%02d-%02d %02d:%02d:%02d",
    ptm->tm_year + 1900, ptm->tm_mon + 1, ptm->tm_mday,
    ptm->tm_hour, ptm->tm_min, ptm->tm_sec);

  return String(timestampBuffer);
}
