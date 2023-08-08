#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 columns, 2 rows

#define SOIL_MOISTURE_PIN A0 // Analog pin for soil moisture sensor
#define SENSOR_PIN 17        // GPIO pin connected to DS18B20 sensor's DATA pin
#define RELAY_PIN 3          // Digital pin to control the relay module

const int moistureThreshold = 430; // Threshold value for turning the pump on/off
const float minTemperature = 25.0; // Minimum temperature in Celsius for turning on the pump
const float maxTemperature = 40.0; // Maximum temperature in Celsius for turning on the pump

OneWire oneWire(SENSOR_PIN);
DallasTemperature DS18B20(&oneWire);

void setup() {
  Serial.begin(9600);
  pinMode(SOIL_MOISTURE_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Initially turn off the relay

  lcd.begin();       // Initialize the LCD
  lcd.backlight();   // Turn on the LCD backlight
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.setCursor(0, 1);
  lcd.print("Moisture: ");

  DS18B20.begin();   // Initialize the DS18B20 sensor
}

void loop() {
  // Read raw sensor value from the soil moisture sensor
  int rawSensorValue = analogRead(SOIL_MOISTURE_PIN);

  // Map the raw sensor value to the desired range (optional if you already calibrated the sensor)
  int mappedValue = map(rawSensorValue, 0, 1023, 0, 250);

  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Print the temperature and moisture level on the LCD
  lcd.setCursor(6, 0);
  lcd.print(temperatureC, 1); // Print temperature with 1 decimal place
  lcd.print(" C");

  lcd.setCursor(10, 1);
  lcd.print(mappedValue);

  // Print the temperature and moisture level to the Serial Monitor
  Serial.print("Temp: ");
  Serial.print(temperatureC, 1); // Print temperature with 1 decimal place
  Serial.print(" C | Moisture: ");
  Serial.println(mappedValue);

  // Turn the relay on or off based on the moisture value and temperature range
  if (mappedValue > moistureThreshold && temperatureC >= minTemperature && temperatureC <= maxTemperature) {
    digitalWrite(RELAY_PIN, HIGH); // Turn on the relay, which turns on the pump
    Serial.println("Pump ON");
    lcd.setCursor(0, 2);
    lcd.print("Pump on");
    delay(1000);
  } else {
    digitalWrite(RELAY_PIN, LOW);  // Turn off the relay, which turns off the pump
    Serial.println("Pump OFF");
    lcd.setCursor(0, 2);
    lcd.print("Pump off");
    delay(1000);
  }

  lcd.clear();
  delay(1000);
}
