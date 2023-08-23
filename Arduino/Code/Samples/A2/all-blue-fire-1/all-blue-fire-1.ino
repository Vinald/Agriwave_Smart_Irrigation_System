#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

#define WIFI_SSID "vinald"
#define WIFI_PASSWORD "14231423"
// #define FIREBASE_HOST F("https://lesson-3-14dc0-default-rtdb.firebaseio.com/")
// #define FIREBASE_AUTH F("AIzaSyAgnMD_uFO5zrqEtTRouctYp5LO4k4-W8M")
#define FIREBASE_HOST "https://capstone-trial-46d33-default-rtdb.firebaseio.com/Distance"
#define FIREBASE_AUTH "0e3f20a73a474d9d19a91e5f4d4d7337c710ac12"

const byte soilMoisturePin = A0;
const byte LDRPin = 2;
const byte temperatureSensorPin = 17;

OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);

FirebaseData firebaseData;

void setup() {
  Serial.begin(9600);

  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  
  lcd.init();
  lcd.backlight();

  DS18B20.begin();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println(F("Connecting to WiFi"));
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println(F("Connected to WiFi"));

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void printSensorValue(const __FlashStringHelper* label, int value) {
  Serial.print(label);
  Serial.println(value);
}

void printSensorValue(const __FlashStringHelper* label, int value, const __FlashStringHelper* unit) {
  Serial.print(label);
  Serial.print(value);
  Serial.print(unit);
  Serial.println();
}

void updateLCDLine(byte row, const __FlashStringHelper* label, int value) {
  lcd.setCursor(0, row);
  lcd.print(label);
  lcd.print(value);
}

void updateLCDLine(byte row, const __FlashStringHelper* label, float value, const __FlashStringHelper* unit) {
  lcd.setCursor(0, row);
  lcd.print(label);
  lcd.print(value);
  lcd.print(unit);
}

void loop() {
  int soilMoistureValue = analogRead(soilMoisturePin);
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);
  int ldrValue = analogRead(LDRPin);

  printSensorValue(F("Soil Moisture: "), soilMoistureValue);
  printSensorValue(F("Temperature: "), temperatureC, F("°C"));
  printSensorValue(F("LDR Value: "), ldrValue);

  updateLCDLine(0, F("Moisture: "), soilMoistureValue);
  updateLCDLine(1, F("Temp: "), temperatureC, F("C"));
  updateLCDLine(2, F("LDR: "), ldrValue);

  Firebase.setInt(firebaseData, "/sensor_readings/soil_moisture", soilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/temperature", temperatureC);
  Firebase.setInt(firebaseData, "/sensor_readings/ldr", ldrValue);

  delay(2000);
}
