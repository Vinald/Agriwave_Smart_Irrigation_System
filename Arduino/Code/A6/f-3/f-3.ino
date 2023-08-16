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
#define FIREBASE_HOST "https://capstone-trial-46d33-default-rtdb.firebaseio.com/Distance"
#define FIREBASE_AUTH "0e3f20a73a474d9d19a91e5f4d4d7337c710ac12"


OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);
LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client;
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
float CropDays;

// Define a global variable to keep track of the ID
int uniqueIDCounter = 1; 

// Function Prototypes
void setupSensors();
void displaySensorReadings(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus);
int labelEncodeCropType(char* str_CropType);
int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC);
void serialMonitorDisplay(int mappedSoilMoistureValue, float temperatureC, int ldrValue);

void setup() {
  // Starting the Serial Monitor
  Serial.begin(9600);

  // Sensors setup
  setupSensors();

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

  // ThingSpeak
  ThingSpeak.begin(client);

  // Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Serial.print('Firebase connected');

  // Bluetooth
  SerialBT.begin("ESP32-Bluetooth");
  Serial.println("Bluetooth device ready for pairing.");
}


void loop() {
  int ldrValue = analogRead(LDRPin);
  int soilMoistureValue = analogRead(soilMoisturePin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);

  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Display on the LCD
  displaySensorReadings(mappedSoilMoistureValue, temperatureC, ldrValue);
  serialMonitorDisplay(mappedSoilMoistureValue, temperatureC, ldrValue);




  if (ldrValue < ldrThresholdMin) {
    Serial.println("Night Time, no need for irrigation");
    pumpStatus = false;
    digitalWrite(relayPin, LOW);
    Serial.println("Pump turned OFF");

    delay(1000);
    sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue);

      // Get the current date and time
    String formattedDateTime = getFormattedDateTime();
    String uniqueID = String(uniqueIDCounter);
    uniqueIDCounter++;
    Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/id", uniqueIDCounter);
    Firebase.setFloat(firebaseData, "/sensor_readings/" + uniqueID + "/temperature", temperatureC);
    Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/soil_moisture", mappedSoilMoistureValue);
    Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/ldr", ldrValue);
    Firebase.setBool(firebaseData, "/sensor_readings/" + uniqueID + "/pump_status", pumpStatus);
    Firebase.setString(firebaseData, "/sensor_readings/" + uniqueID + "/timestamp", formattedDateTime);

    // sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
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
      int prediction = predictIrrigation(CropType, 21, mappedSoilMoistureValue, temperatureC);
      controlPump(prediction, temperatureC, mappedSoilMoistureValue, relayPin, pumpStatus);

      delay(1000);
      sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue);
      // sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
      
      // Get the current date and time
      String formattedDateTime = getFormattedDateTime();
      String uniqueID = String(uniqueIDCounter);
      uniqueIDCounter++;
      Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/id", uniqueIDCounter);
      Firebase.setFloat(firebaseData, "/sensor_readings/" + uniqueID + "/temperature", temperatureC);
      Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/soil_moisture", mappedSoilMoistureValue);
      Firebase.setInt(firebaseData, "/sensor_readings/" + uniqueID + "/ldr", ldrValue);
      Firebase.setBool(firebaseData, "/sensor_readings/" + uniqueID + "/pump_status", pumpStatus);
      Firebase.setString(firebaseData, "/sensor_readings/" + uniqueID + "/timestamp", formattedDateTime);


    }
  }

  delay(500);
}

void displaySensorReadings(int mappedSoilMoistureValue, float temperatureC, int ldrValue) 
{
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

void serialMonitorDisplay(int mappedSoilMoistureValue, float temperatureC, int ldrValue)
{
    Serial.print("Soil Moisture: ");
    Serial.println(mappedSoilMoistureValue);
    Serial.print("Temperature: ");
    Serial.println(temperatureC);
    Serial.print("LDR Value:");
    Serial.println(ldrValue);
}

void setupSensors() 
{
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  lcd.begin();
  lcd.backlight();
  DS18B20.begin();
}


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

void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue) 
{
  ThingSpeak.setField(1, mappedSoilMoistureValue);
  ThingSpeak.setField(2, temperatureC);
  ThingSpeak.setField(3, ldrValue);
  int x = ThingSpeak.writeFields(myChannel, apiKey);
  if (x == 200) {
    Serial.println("ThingSpeak Updated");
  } else {
    Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
  }
}


void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus) 
{
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
  //   bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
  //                       (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  // if (newPumpStatus != pumpStatus) {
  //   pumpStatus = newPumpStatus;
  //   digitalWrite(relayPin, pumpStatus ? HIGH : LOW);
  //   Serial.println(pumpStatus ? "Pump turned ON" : "Pump turned OFF");
  // }

}

int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC) 
{
  float features_array[] = {CropType, CropDays, mappedSoilMoistureValue, temperatureC};
  int prediction = myModel.predict(features_array);
  return prediction;
}



// Function to get the formatted date and time
String getFormattedDateTime() {
  time_t now = time(nullptr);
  struct tm *timeinfo;
  char buffer[20];
  
  // Get the current time
  timeinfo = localtime(&now);

  // Format the date and time as "YYYY-MM-DD HH:MM:SS"
  strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
  return String(buffer);
}





