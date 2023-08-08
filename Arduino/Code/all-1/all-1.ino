#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

#define WIFI_SSID "vx"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://lesson-3-14dc0-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyAgnMD_uFO5zrqEtTRouctYp5LO4k4-W8M")

const byte soilMoisturePin = A0;
const byte LDRPin = 2;
const byte temperatureSensorPin = 17;
const int relayPin = 32;

OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);

FirebaseData firebaseData;

const int moistureThresholdMin = 500; // Minimum threshold value for turning the pump on
const int moistureThresholdMax = 1000; // Maximum threshold value for turning the pump on
const int pumpOnTime = 1000;      // Time in milliseconds to turn on the water pump

void setup() {
  Serial.begin(9600);

  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Initially turn off the relay

  lcd.begin();
  lcd.backlight();

  DS18B20.begin();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println(F("Connected to WiFi"));

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.setCursor(0, 1);
  lcd.print("LDR: ");
  lcd.setCursor(0, 2);
  lcd.print("Temperature: ");
}

void loop() {
  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Read raw moisture sensor value
  int rawSensorValue = analogRead(soilMoisturePin);

  // Map the raw sensor value to the desired range
  int mappedValue = map(rawSensorValue, 0, 1023, 0, 250); // Map to a range of 0 to 1000

  // Read raw LDR value
  int rawLDRValue = analogRead(LDRPin);

  // Print sensor readings on the LCD
  lcd.setCursor(10, 0);
  lcd.print(mappedValue);
  lcd.setCursor(5, 1);
  lcd.print(rawLDRValue);
  lcd.setCursor(14, 2);
  lcd.print(temperatureC, 1); // Display temperature with one decimal place

  // Print sensor readings to the Serial Monitor
  Serial.print("Moisture: ");
  Serial.print(mappedValue);
  Serial.print("\tLDR: ");
  Serial.print(rawLDRValue);
  Serial.print("\tTemperature: ");
  Serial.print(temperatureC, 1);
  Serial.println(" C");

  // Check if the conditions for turning on the pump are met
  bool turnOnPump = (temperatureC >= 30 && temperatureC <= 50) || (mappedValue >= moistureThresholdMin && mappedValue <= moistureThresholdMax);

  // Update Firebase with the sensor data and timestamps
  unsigned long currentMillis = millis();
  String timestamp = String(currentMillis / 1000);
  Firebase.setInt(firebaseData, "/sensor_readings/soil_moisture", mappedValue);
  Firebase.setInt(firebaseData, "/sensor_readings/ldr", rawLDRValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/temperature", temperatureC);
  Firebase.setString(firebaseData, "/timestamps/soil_moisture", timestamp);
  Firebase.setString(firebaseData, "/timestamps/ldr", timestamp);
  Firebase.setString(firebaseData, "/timestamps/temperature", timestamp);

  // Turn the relay on or off based on the moisture and temperature values
  if (turnOnPump) {
    // Turn on the water pump
    digitalWrite(relayPin, HIGH);
    Serial.println("Water pump ON");
    lcd.setCursor(0, 3);
    lcd.print("Pump on        ");
    Firebase.setString(firebaseData, "/pump_status", "ON");
    delay(pumpOnTime);
  } else {
    // Turn off the water pump
    digitalWrite(relayPin, LOW);
    Serial.println("Water pump OFF");
    lcd.setCursor(0, 3);
    lcd.print("Pump off       ");
    Firebase.setString(firebaseData, "/pump_status", "OFF");
  }

  // Wait for 2 seconds before taking the next sensor reading and sending data to Firebase
  delay(2000);
}
