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
#define FIREBASE_HOST "https://smart-irrigation-system-97ed9-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "AIzaSyA-RMphMNooQI4_ggJBPfmn-pbujESbARc"

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
int dataIdCounter = 1;

// Function Prototypes
int labelEncodeCropType(char* str_CropType);
void connectWiFi(const char* ssid, const char* password);
String getFormattedTimestamp(unsigned long secondsSinceEpoch);
void setupSensors();
void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
void displaySensorReadings(int mappedSoilMoistureValue, float temperatureC, int ldrValue);
int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC);
void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus);
void sendDataToFirebase(int mappedSoilMoistureValue, float temperatureC, int ldrValue, bool pumpStatus);

void setup() {
  // Starting the Serial Monitor
  Serial.begin(9600);

  // Sensors setup
  setupSensors();

  // Calling the Wifi Function
  connectWiFi(WIFI_SSID, WIFI_PASSWORD);

  // ThingSpeak
  ThingSpeak.begin(client);

  // Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

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

  if (ldrValue < ldrThresholdMin) {
    Serial.println("Night Time, no need for irrigation");
  } else {
    int CropType = labelEncodeCropType("Coffee"); // Replace with actual crop type
    int prediction = predictIrrigation(CropType, 21, mappedSoilMoistureValue, temperatureC);
    handleBluetoothCommands();
    controlPump(prediction, temperatureC, mappedSoilMoistureValue, relayPin, pumpStatus);
    sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue);
    sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
  }

  delay(500);
}

int labelEncodeCropType(char* selectedCrop) {
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

void connectWiFi(const char* ssid, const char* password) {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(2000);
    Serial.print(".");
  }
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

void setupSensors() {
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  lcd.init();
  lcd.backlight();
  DS18B20.begin();
}

void sendDataToThingSpeak(int mappedSoilMoistureValue, float temperatureC, int ldrValue) {
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

// void sendDataToFirebase(int mappedSoilMoistureValue, float temperatureC, int ldrValue, bool pumpStatus) {
//   unsigned long currentMillis = millis();
//   String timestampStr = getFormattedTimestamp(currentMillis / 1000);
//   Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
//   Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
//   Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);
//   Firebase.setString(firebaseData, "/sensor_readings/" + timestampStr + "/timestamp", timestampStr);
//   Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus);
//   Serial.println("Data logged to Firebase");
// }



void sendDataToFirebase(int mappedSoilMoistureValue, float temperatureC, int ldrValue, bool pumpStatus) {
  unsigned long currentMillis = millis();
  String timestampStr = getFormattedTimestamp(currentMillis / 1000);
  String dataId = String(dataIdCounter++); // Increment the ID and use the new value

  Firebase.setInt(firebaseData, "/sensor_readings/" + dataId + "/soil_moisture", mappedSoilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/" + dataId + "/ldr", ldrValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/" + dataId + "/temperature", temperatureC);
  Firebase.setString(firebaseData, "/sensor_readings/" + dataId + "/timestamp", timestampStr);
  Firebase.setBool(firebaseData, "/sensor_readings/" + dataId + "/pump_status", pumpStatus);
  Serial.println("Data logged to Firebase with ID: " + dataId);
}


void displaySensorReadings(int mappedSoilMoistureValue, float temperatureC, int ldrValue) {
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

void handleBluetoothCommands() {
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

int predictIrrigation(int CropType, float CropDays, int mappedSoilMoistureValue, float temperatureC) {
  float features_array[] = {CropType, CropDays, mappedSoilMoistureValue, temperatureC};
  int prediction = myModel.predict(features_array);
  return prediction;
}

void controlPump(int prediction, float temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus) {
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

  bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
                        (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  if (newPumpStatus != pumpStatus) {
    pumpStatus = newPumpStatus;
    digitalWrite(relayPin, pumpStatus ? HIGH : LOW);
    Serial.println(pumpStatus ? "Pump turned ON" : "Pump turned OFF");
  }

  
}
