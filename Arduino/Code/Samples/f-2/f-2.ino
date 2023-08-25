#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>
#include <FirebaseESP32.h>
#include <BluetoothSerial.h>
#include <my_new_model.h>
#include <vector>
#include <TimeLib.h>

// Constants for ThingSpeak
const char* ssid = "vinald";
const char* password = "14231423";
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";

const int soilMoisturePin = A0;
const int LDRPin = 34;
const int temperatureSensorPin = 17;
const int relayPin = 32;
bool pumpStatus = false;

// Constants for Firebase
#define WIFI_SSID "vinald"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://smart-irrigation-system-97ed9-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyA-RMphMNooQI4_ggJBPfmn-pbujESbARc")

OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client; // Declare the WiFiClient object
FirebaseData firebaseData;
BluetoothSerial SerialBT;

// Constants for pump control
const int moistureThresholdMin = 600;
const int moistureThresholdMax = 1000;
const int temperatureThresholdMin = 30;
const int temperatureThresholdMax = 50;
const int ldrThresholdMin = 1000;

// Declaring variables for inputs
char* str_CropType;
float temperature;
float SoilMoisture;
float CropDays = 21;

int labelEncodeCropType(char* selectedCrop) 
{
  if (strcmp(selectedCrop, "Wheat") == 0) {
    return 0;
  } else if (strcmp(selectedCrop, "Groundnuts") == 0) {
    return 1;
  } else if (strcmp(selectedCrop, "Garden Flowers") == 0) {
    return 2;
  } else if (strcmp(selectedCrop, "Maize") == 0) {
    return 3;
  } else if (strcmp(selectedCrop, "Paddy") == 0) {
    return 4;
  } else if (strcmp(selectedCrop, "Potato") == 0) {
    return 5;
  } else if (strcmp(selectedCrop, "Pulse") == 0) {
    return 6;
  } else if (strcmp(selectedCrop, "Sugarcane") == 0) {
    return 7;
  } else if (strcmp(selectedCrop, "Coffee") == 0) {
    return 8;
  }
  return -1;
}

String getFormattedTimestamp(unsigned long secondsSinceEpoch);


void setup() {
  Serial.begin(9600);

  // Sensors setup
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  lcd.begin();
  lcd.backlight();
  DS18B20.begin();

  // Connect to Wi-Fi for both ThingSpeak and Firebase
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  // Start ThingSpeak
  ThingSpeak.begin(client);
  
  // Start Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Serial.print('Firebase connected');

  // Bluetooth
  SerialBT.begin("ESP32-Bluetooth");
  Serial.println("Bluetooth device ready for pairing.");
}

void loop() {
  // Read sensor values
  int soilMoistureValue = analogRead(soilMoisturePin);
  int ldrValue = analogRead(LDRPin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);

  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Print sensor readings on the LCD
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

  Serial.print("Soil Moisture: ");
  Serial.println(mappedSoilMoistureValue);
  Serial.print("Temperature: ");
  Serial.println(temperatureC);
  Serial.print("LDR Value:");
  Serial.println(ldrValue);


  if (ldrValue < ldrThresholdMin) {
    Serial.println("Night Time, no need for irrigation");
    pumpStatus = false;
    digitalWrite(relayPin, LOW);
    Serial.println("Pump turned OFF");

    delay(1000);
    ThingSpeak.setField(1, mappedSoilMoistureValue);
    ThingSpeak.setField(2, temperatureC);
    ThingSpeak.setField(3, ldrValue);
    int x = ThingSpeak.writeFields(myChannel, apiKey);
    if (x == 200) {
      Serial.println("ThingSpeak Updated");
    } else {
      Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
    }
      // sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
    

    unsigned long currentMillis = millis();
    String timestamp = String(currentMillis / 1000);
    Firebase.setInt(firebaseData, "/sensor_readings/soil_moisture", mappedSoilMoistureValue);
    Firebase.setInt(firebaseData, "/sensor_readings/ldr", ldrValue);
    Firebase.setFloat(firebaseData, "/sensor_readings/temperature", temperatureC);
    Firebase.setString(firebaseData, "/timestamps/soil_moisture", timestamp);
    Firebase.setString(firebaseData, "/timestamps/ldr", timestamp);
    Firebase.setString(firebaseData, "/timestamps/temperature", timestamp);
  } 
  
  else {

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
    }
    else{
      int CropType = labelEncodeCropType("Coffee"); // Replace with actual crop type
      float features_array[] = {CropType, CropDays, mappedSoilMoistureValue, temperatureC};
      int prediction = myModel.predict(features_array);
      // return prediction;
      
      // Display the predicted result
      Serial.print("Predicted Result: ");
      if (prediction == 0) {
        Serial.println("No Irrigation");
        pumpStatus = false;
        digitalWrite(relayPin, LOW);
      } else if (prediction == 1) {
        Serial.println("Irrigation");
        pumpStatus = true;
        digitalWrite(relayPin, HIGH);
      } else {
        Serial.println("Unknown");
      }

      delay(1000);
      ThingSpeak.setField(1, mappedSoilMoistureValue);
      ThingSpeak.setField(2, temperatureC);
      ThingSpeak.setField(3, ldrValue);
      int x = ThingSpeak.writeFields(myChannel, apiKey);
      if (x == 200) {
        Serial.println("ThingSpeak Updated");
      } else {
        Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
      }
      // sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
      
      unsigned long currentMillis = millis();
      String timestamp = String(currentMillis / 1000);
      Firebase.setInt(firebaseData, "/sensor_readings/soil_moisture", mappedSoilMoistureValue);
      Firebase.setInt(firebaseData, "/sensor_readings/ldr", ldrValue);
      Firebase.setFloat(firebaseData, "/sensor_readings/temperature", temperatureC);
      Firebase.setString(firebaseData, "/timestamps/soil_moisture", timestamp);
      Firebase.setString(firebaseData, "/timestamps/ldr", timestamp);
      Firebase.setString(firebaseData, "/timestamps/temperature", timestamp);
    }
  }

  delay(500);
}



String getFormattedTimestamp(unsigned long secondsSinceEpoch) {
  time_t currentTime = secondsSinceEpoch;
  struct tm *ptm = gmtime(&currentTime);
  char timestampBuffer[20];
  snprintf(timestampBuffer, sizeof(timestampBuffer), "%04d-%02d-%02d %02d:%02d:%02d",
           ptm->tm_year + 1900, ptm->tm_mon + 1, ptm->tm_mday,
           ptm->tm_hour, ptm->tm_min, ptm->tm_sec);
  return String(timestampBuffer);
}


