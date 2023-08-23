#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

#define WIFI_SSID "vinald"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://smart-irrigation-system-97ed9-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyA-RMphMNooQI4_ggJBPfmn-pbujESbARc")

const byte soilMoisturePin = A0;
const byte LDRPin = 34;
const byte temperatureSensorPin = 17;
const int relayPin = 32;

OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);

FirebaseData firebaseData;

const int moistureThresholdMin = 500; // Minimum threshold value for turning the pump on
const int moistureThresholdMax = 1000; // Maximum threshold value for turning the pump on
const int pumpOnTime = 2000;      // Time in milliseconds to turn on the water pump

void setup()
{
  Serial.begin(9600);

  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Initially turn off the relay

  lcd.init();
  lcd.backlight();

  DS18B20.begin();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println(F("Connecting to WiFi"));
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println(F("Connected to WiFi"));

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  lcd.setCursor(0, 0);
  lcd.print("Moisture Level:");
}

void printSensorValue(const char *label, int value)
{
  Serial.print(label);
  Serial.println(value);
}

void printSensorValue(const char *label, int value, const char *unit)
{
  Serial.print(label);
  Serial.print(value);
  Serial.print(unit);
  Serial.println();
}

void updateLCDLine(byte row, const char *label, int value)
{
  lcd.setCursor(0, row);
  lcd.print(label);
  lcd.print(value);
}

void updateLCDLine(byte row, const char *label, float value, const char *unit)
{
  lcd.setCursor(0, row);
  lcd.print(label);
  lcd.print(value);
  lcd.print(unit);
}

void loop()
{
  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Read raw moisture sensor value
  int rawSensorValue = analogRead(soilMoisturePin);

  // Print the moisture value on the LCD
  lcd.setCursor(0, 1);
  lcd.print("                "); // Clear previous value
  lcd.setCursor(0, 1);
  lcd.print("Moisture: ");
  lcd.print(rawSensorValue);

  // Print the moisture value to the Serial Monitor
  Serial.print("Moisture: ");
  Serial.println(rawSensorValue);

  // Check if the conditions for turning on the pump are met
  bool turnOnPump = (temperatureC >= 30 && temperatureC <= 50) || (rawSensorValue >= moistureThresholdMin && rawSensorValue <= moistureThresholdMax);

  // Display sensor data on the LCD
  updateLCDLine(0, "Moisture: ", rawSensorValue);
  updateLCDLine(1, "Temp: ", temperatureC, "°C");
  updateLCDLine(2, "LDR: ", analogRead(LDRPin));

  // Update Firebase with the sensor data and timestamps
  unsigned long currentMillis = millis();
  String timestamp = String(currentMillis / 1000);

  Firebase.setInt(firebaseData, "/sensor_readings/soil_moisture", rawSensorValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/temperature", temperatureC);
  Firebase.setInt(firebaseData, "/sensor_readings/ldr", analogRead(LDRPin));

  Firebase.setString(firebaseData, "/timestamps/soil_moisture", timestamp);
  Firebase.setString(firebaseData, "/timestamps/temperature", timestamp);
  Firebase.setString(firebaseData, "/timestamps/ldr", timestamp);

  // Turn the relay on or off based on the moisture and temperature values
  if (turnOnPump)
  {
    // Turn on the water pump
    digitalWrite(relayPin, HIGH);
    Serial.println("Water pump ON");
    lcd.setCursor(0, 2);
    lcd.print("Pump on");
    Firebase.setString(firebaseData, "/pump_status", "ON");
    delay(pumpOnTime);
    // Turn off the water pump after pumpOnTime milliseconds
    digitalWrite(relayPin, LOW);
    Serial.println("Water pump OFF");
    lcd.setCursor(0, 2);
    lcd.print("Pump off");
    Firebase.setString(firebaseData, "/pump_status", "OFF");
  }

  // Wait for 2 seconds before taking the next sensor reading and sending data to Firebase
  delay(2000);
}
