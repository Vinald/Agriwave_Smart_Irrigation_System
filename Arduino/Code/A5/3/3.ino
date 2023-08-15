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
const int ldrThresholdMin = 1000


// Function prototypes
void setupSensors();
void connectWiFi();
void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
void sendDataToFirebase(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
void displaySensorReadings(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
int labelEncodeCropType(char* str_CropType);
int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC);
void handleBluetoothCommands();
void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue);
String getFormattedTimestamp(unsigned long secondsSinceEpoch);

void setup()
{
  Serial.begin(9600);
  setupSensors();
  connectWiFi();
  
  // Start Thingspeak and Firebase
  ThingSpeak.begin(client);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
  // Start Bluetooth
  SerialBT.begin("ESP32-Bluetooth");
  Serial.println("Bluetooth device ready for pairing.");
}

void loop()
{
  int ldrValue = analogRead(LDRPin);
  int soilMoistureValue = analogRead(soilMoisturePin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);

  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);
  
  displaySensorReadings(mappedSoilMoistureValue, temperatureC, ldrValue);

  if (ldrValue < ldrThresholdMin)
  {
    Serial.println("Night Time, no need for irrigation");
    sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue);
    sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue);
  }
  else
  {
    int CropType = labelEncodeCropType("Coffee"); // Replace with actual crop type
    int prediction = predictIrrigation(CropType, 21, mappedSoilMoistureValue, temperatureC);
    handleBluetoothCommands();
    controlPump(prediction, temperatureC, mappedSoilMoistureValue);
    sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue);
    sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue);
  }
}

// Define the functions here
void setupSensors()
{
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  lcd.init();
  lcd.backlight();
  DS18B20.begin();
}

void connectWiFi()
{
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
}

void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue)
{
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
}

void sendDataToFirebase(int mappedSoilMoistureValue, float temperatureC, int ldrValue)
{
  unsigned long currentMillis = millis();
  String timestampStr = getFormattedTimestamp(currentMillis / 1000);
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);
  Firebase.setString(firebaseData, "/sensor_readings/" + timestampStr + "/timestamp", timestampStr);
  Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus);
  Serial.println("Data logged to Firebase");
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

int labelEncodeCropType(char* str_CropType)
{
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


// Predict using the converted features
int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC){
  float features_array[] = {CropType, CropDays, mappedSoilMoistureValue,  temperatureC};
  int prediction = myModel.predict(features_array);
}


// Bluetooth command handling
void handleBluetoothCommands()
{
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
}


// Implementation of pump control logic
void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue) 
{
  // Display the predicted result
  Serial.print("Predicted Result: ");
  if (prediction == 0) {
    Serial.println("No Irrigation");
  } else if (prediction == 1) {
    Serial.println("Irrigation");
  } else {
    Serial.println("Unknown");
  }

  bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
                      (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  if (newPumpStatus != pumpStatus) {
    pumpStatus = newPumpStatus;
    digitalWrite(relayPin, pumpStatus ? HIGH : LOW);
    Serial.println(pumpStatus ? "Pump turned ON" : "Pump turned OFF");
  }
}

// Implementation of getFormattedTimestamp function
String getFormattedTimestamp(unsigned long secondsSinceEpoch) 
{
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

