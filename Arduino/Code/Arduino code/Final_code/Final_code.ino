#define BLYNK_AUTH_TOKEN  "Fv8IbmRagQsiGeMZpA74PZmRyCPll7eA"
#define BLYNK_TEMPLATE_ID "TMPL2LCceNBml"
#define BLYNK_TEMPLATE_NAME "water pump"

#include <BlynkSimpleEsp32.h>
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
#include <ESPAsyncWebServer.h>

// Blynk
#define BLYNK_PRINT Serial
#define BLYNK_CONTROL_PIN V2
int relay1State = LOW;
int pushButton1State = HIGH;

// Constants for ThingSpeak
const char* ssid = "vx";
const char* password = "62101258";
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";

// Assigning pins
const int soilMoisturePin = A0;
const int LDRPin = 34;
const int temperatureSensorPin = 17;
const int relayPin = 32;
bool pumpStatus = false;

// Constants for Firebase
#define WIFI_SSID "vx"
#define WIFI_PASSWORD "62101258"
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
const int temperatureThresholdMax = 60;
const int ldrThresholdMin = 1000;

// Declaring variables for inputs
int temperature;
int SoilMoisture;

char* str_CropType = nullptr; 
int CropDays = 0;

//number of days
unsigned long lastIncrementTime = 0;

// Define a global variable to keep track of the ID
int dataIdCounter = 1;

// server on port 80
AsyncWebServer server(80);
bool executeLoop = false;  // Flag to control loop execution

// Function Prototypes
void setupSensors();
void connectWiFi(const char* ssid, const char* password);

int labelEncodeCropType(char* str_CropType);
void displaySensorReadings(int mappedSoilMoistureValue, int temperatureC, int ldrValue);
void serialMonitorDisplay(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus);

void sendDataToFirebase(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus);
void sendDataToThingSpeak(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus, int CropDays);

int predictIrrigation(int CropType, int CropDays, int mappedSoilMoistureValue, int temperatureC);
void controlPump(int prediction, int temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus);

void setup() {
  Serial.begin(9600);
  setupSensors();

  connectWiFi(ssid, password);

  // Print the ESP32's IP address
  Serial.print("Connected to WiFi. IP address: ");
  Serial.println(WiFi.localIP());

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password, "blynk.cloud", 80);
  Serial.println("");
  Serial.println("WiFi connected");

  ThingSpeak.begin(client);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  SerialBT.begin("ESP32-Bluetooth");
  Serial.println("Bluetooth device ready for pairing.");

  server.on("/send_data", HTTP_POST, [](AsyncWebServerRequest *request){
    String cropDays = request->arg("cropDays"); 
    String cropType = request->arg("cropType");  

    Serial.println("Crop days: " + cropDays);
    Serial.println("Crop type: " + cropType);
    
    char* cropTypeChar = new char[cropType.length() + 1];
    strcpy(cropTypeChar, cropType.c_str());

    CropDays = cropDays.toFloat(); 
    str_CropType = cropTypeChar;

    executeLoop = true;
    delete[] cropTypeChar;

    request->send(200, "text/plain", "Data received successfully");
  });

  server.begin();

}

void loop() {
  if (executeLoop) {
    int ldrValue = analogRead(LDRPin);
    int soilMoistureValue = analogRead(soilMoisturePin);
    int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);

    DS18B20.requestTemperatures();
    float temperatureC = DS18B20.getTempCByIndex(0);

    displaySensorReadings(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
    serialMonitorDisplay(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);

    // Check if one minute has passed
    unsigned long currentTime = millis();
    if (currentTime - lastIncrementTime >= 60000) { 
      CropDays += 1; 
      lastIncrementTime = currentTime; 
    }

    Serial.println("Crop days: " + String(CropDays));
    // Serial.println("Crop type: " + str_CropType);


    Blynk.virtualWrite(V0, temperature);
    Blynk.virtualWrite(V1, SoilMoisture);
    Blynk.virtualWrite(BLYNK_CONTROL_PIN, pumpStatus ? HIGH : LOW); 
    
    if (ldrValue < ldrThresholdMin) {
      Serial.println("Night Time, no need for irrigation");
      pumpStatus = false;
      digitalWrite(relayPin, LOW);
      Serial.println("Pump turned OFF");
      delay(1000);

      sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
      sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus, CropDays);

    } else {
      if (SerialBT.available()) {
        char command = SerialBT.read();
        if (command == '1') {
          pumpStatus = true;
          digitalWrite(relayPin, HIGH);
          Serial.println("Pump turned ON");
        } else if (command == '0') {
          pumpStatus = false;
          digitalWrite(relayPin, LOW);
          Serial.println("Pump turned OFF");
        }
        sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
        sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus, CropDays);
      }
        
      else{

      int prediction = predictIrrigation(labelEncodeCropType(str_CropType), CropDays, mappedSoilMoistureValue, temperatureC);
      controlPump(prediction, temperatureC, mappedSoilMoistureValue, relayPin, pumpStatus);
      delay(1000);

      sendDataToFirebase(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus);
      sendDataToThingSpeak(mappedSoilMoistureValue, temperatureC, ldrValue, pumpStatus, CropDays);
      }
    }
    Blynk.run();
    delay(60000);
  }
}

int labelEncodeCropType(char* selectedCrop) {
  if (strcmp(selectedCrop, "Wheat") == 0) { return 0; } 
  else if (strcmp(selectedCrop, "Groundnuts") == 0) { return 1; } 
  else if (strcmp(selectedCrop, "Garden Flowers") == 0) { return 2; } 
  else if (strcmp(selectedCrop, "Maize") == 0) { return 3; } 
  else if (strcmp(selectedCrop, "Paddy") == 0) { return 4; } 
  else if (strcmp(selectedCrop, "Potato") == 0) { return 5; } 
  else if (strcmp(selectedCrop, "Pulse") == 0) { return 6; } 
  else if (strcmp(selectedCrop, "Sugarcane") == 0) { return 7; } 
  else if (strcmp(selectedCrop, "Coffee") == 0) { return 8; }
  return -1;
}

void setupSensors() {
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);

  lcd.begin();
  lcd.backlight();
  DS18B20.begin();
}

void connectWiFi(const char* ssid, const char* password) {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(2000);
    Serial.print(".");
  }
}

void displaySensorReadings(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Mois ");
  lcd.print(mappedSoilMoistureValue);
  lcd.print(" ");
  lcd.setCursor(10, 0);
  lcd.print("Temp ");
  lcd.print(temperatureC);
  lcd.setCursor(0, 1);
  lcd.print("LDR ");
  lcd.print(ldrValue);
  lcd.print(" ");
  lcd.setCursor(10, 1);
  lcd.print("Pump ");
  lcd.print(pumpStatus);
  lcd.setCursor(0, 2);
  lcd.print("Crop days: ");
  lcd.print(CropDays);
}

void serialMonitorDisplay(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus){
    Serial.print("Soil Moisture: ");
    Serial.println(mappedSoilMoistureValue);
    Serial.print("Temperature: ");
    Serial.println(temperatureC);
    Serial.print("LDR Value:");
    Serial.println(ldrValue);
    Serial.print("Pump Status:");
    Serial.println(pumpStatus);
}

void sendDataToThingSpeak(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus, int CropDays){
  ThingSpeak.setField(1, mappedSoilMoistureValue);
  ThingSpeak.setField(2, temperatureC);
  ThingSpeak.setField(3, ldrValue);
  ThingSpeak.setField(4, CropDays);
  ThingSpeak.setField(5, pumpStatus);
  int x = ThingSpeak.writeFields(myChannel, apiKey);
  if (x == 200) {
    Serial.println("ThingSpeak Updated");
  } else {
    Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
  }
}

String getFormattedDateTime(unsigned long millisValue = 0) {
  time_t now = millisValue / 1000;
  struct tm *timeinfo;
  char buffer[20];
  
  timeinfo = localtime(&now);

  // Format the date and time as "YYYY-MM-DD HH:MM:SS"
  strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
  return String(buffer);
}

void sendDataToFirebase(int mappedSoilMoistureValue, int temperatureC, int ldrValue, bool pumpStatus) {
  unsigned long currentMillis = millis();
  String timestampStr = getFormattedDateTime(currentMillis / 1000);
  String dataId = String(dataIdCounter++); // Increment the ID and use the new value

  Firebase.setInt(firebaseData, "/sensor_readings/" + dataId + "/soil_moisture", mappedSoilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/" + dataId + "/ldr", ldrValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/" + dataId + "/temperature", temperatureC);
  Firebase.setString(firebaseData, "/sensor_readings/" + dataId + "/timestamp", timestampStr);
  Firebase.setBool(firebaseData, "/sensor_readings/" + dataId + "/pump_status", pumpStatus);
  Serial.println("Data logged to Firebase with ID: " + dataId);
}

int predictIrrigation(int CropType, int CropDays, int mappedSoilMoistureValue, int temperatureC) {
  float features_array[] = {CropType, CropDays, mappedSoilMoistureValue, temperatureC};
  int prediction = myModel.predict(features_array);
  return prediction;
}

void controlPump(int prediction, int temperatureC, int mappedSoilMoistureValue, int relayPin, bool &pumpStatus) {
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
 
}

BLYNK_WRITE(BLYNK_CONTROL_PIN) {
  int value = param.asInt(); // Get the value from the control button
  if (value == 1) {
    pumpStatus = !pumpStatus; // Toggle the pump status
    digitalWrite(relayPin, pumpStatus ? HIGH : LOW); // Turn on or off the pump based on pumpStatus
  }
}

BLYNK_CONNECTED(){
  Blynk.syncVirtual(BLYNK_CONTROL_PIN);
}


