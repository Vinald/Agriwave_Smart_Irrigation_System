// Libraries
#include <Arduino.h>
#include <Wire.h> // Wire library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for I2C LCD
#include <OneWire.h> // Library for OneWire communication
#include <DallasTemperature.h> // Library for DS18B20 temperature sensor

// Constants
const int soilMoisturePin = A0; // Analog pin for soil moisture sensor

// Temperature sensor setup
const int temperatureSensorPin = 17; // Digital pin for DS18B20 temperature sensor
OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

// Initialize the LCD module
LiquidCrystal_I2C lcd(0x27, 16, 2); // Change the address (0x27) if needed

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);

  // Initialize the LCD module
  lcd.begin(); // Adjust the column and row size according to your LCD module
  lcd.backlight(); // Turn on the LCD backlight

  // Initialize the temperature sensor
  DS18B20.begin();
}

void loop() {
  // Read soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Print the soil moisture value and temperature to the Serial monitor
  Serial.print("Soil Moisture: ");
  Serial.print(soilMoistureValue);
  Serial.print(", Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Display the soil moisture value and temperature on the LCD
  lcd.clear(); // Clear the LCD screen

  lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
  lcd.print("Moisture: ");
  lcd.print(soilMoistureValue); // Display the soil moisture value

  lcd.setCursor(0, 1); // Set the cursor to the first column of the second row
  lcd.print("Temp: ");
  lcd.print(temperatureC); // Display the temperature value
  lcd.print(" °C");

  // Add a delay before taking the next sensor reading
  delay(2000); // You can adjust the delay interval as needed
}
