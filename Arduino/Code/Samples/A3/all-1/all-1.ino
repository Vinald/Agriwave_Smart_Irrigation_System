#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>
#include <FirebaseESP32.h>
#include <RFMODEL.h>  // Include the library for your Random Forest model

// Constants for ThingSpeak
const char* ssid = "your_wifi_ssid";
const char* password = "your_wifi_password";
unsigned long myChannel = 2234562;
const char* apiKey = "your_thingspeak_api_key";
const int soilMoisturePin = A0;
const int LDRPin = 34;
const int temperatureSensorPin = 17;

// Constants for Firebase
#define WIFI_SSID "your_wifi_ssid"
#define WIFI_PASSWORD "your_wifi_password"
#define FIREBASE_HOST F("https://your-firebase.firebaseio.com/")
#define FIREBASE_AUTH F("your_firebase_auth")
OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client;
FirebaseData firebaseData;

// Constants for pump control
const int moistureThresholdMin = 600;
const int moistureThresholdMax = 1000;
const int temperatureThresholdMin = 30;
const int temperatureThresholdMax = 50;

const int relayPin = 32;
bool pumpStatus = false;

Eloquent::ML::Port::RandomForest rf_classifier;  // Initialize the RandomForest model

void loadRandomForestModel() {
  // Load the Random Forest model from a file
  // Replace "RFC_model.joblib" with the correct path to your model file
  // rf_classifier.load("RFC_model.joblib");
}

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);

  lcd.init();
  lcd.backlight();

  DS18B20.begin();

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  ThingSpeak.begin(client);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  Serial.println("Device ready");

  loadRandomForestModel();  // Load the Random Forest model
}

void loop() {
  int soilMoistureValue = analogRead(soilMoisturePin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250);
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);
  int ldrValue = analogRead(LDRPin);

  // Prepare input data for prediction
  float temperature = DS18B20.getTempCByIndex(0);
  int mappedSoilMoisture = map(analogRead(soilMoisturePin), 0, 1023, 0, 250);
  float cropDays = 15;  // Change this to the actual value

  // Make a prediction using the loaded Random Forest model
  float prediction = rf_classifier.predict({
    {"Temperature", temperature},
    {"SoilMoisture", mappedSoilMoisture},
    {"CropDays", cropDays}
  });

  // Display the predicted irrigation status
  Serial.print("Predicted Irrigation Status: ");
  Serial.println(prediction == 1 ? "Irrigation" : "No Irrigation");

  // Check pump conditions
  bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
                      (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  if (newPumpStatus != pumpStatus) {
    pumpStatus = newPumpStatus;
    digitalWrite(relayPin, pumpStatus ? HIGH : LOW);
  }

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

  delay(500);
}
