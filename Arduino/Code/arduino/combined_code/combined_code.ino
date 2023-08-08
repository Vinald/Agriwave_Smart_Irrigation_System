// Libraries
#include <Arduino.h>

// Constants
const int soilMoisturePin = A0;   // Analog pin for soil moisture sensor
const int relayPin = 32;           // Digital pin to control the relay module

// Calibration parameters
const int dry_soil_reading = 4095;
const int pure_water_reading = 790;
const int wet_soil_reading = 833;

const float calibrationSlope = 100.0 / (pure_water_reading - dry_soil_reading);
const float calibrationIntercept = -calibrationSlope * dry_soil_reading;

const int soilMoistureThreshold = 50;   // Adjust this value as per your sensor's readings
const int pumpOnTime = 1000;             // Time in milliseconds to turn on the water pump

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Read raw soil moisture sensor value
  int rawSensorValue = analogRead(soilMoisturePin);

  // Apply calibration to convert raw sensor value to moisture content
  float moistureContent = calibrationSlope * rawSensorValue + calibrationIntercept;

  // Print the calibrated moisture content
  Serial.print("Moisture Content (%): ");
  Serial.println(moistureContent);

  // Check if soil moisture is below the threshold
  if (moistureContent < soilMoistureThreshold) {
    // Turn on the water pump
    digitalWrite(relayPin, HIGH);
    Serial.println("Water pump ON");
    delay(pumpOnTime);
    // Turn off the water pump after pumpOnTime milliseconds
    digitalWrite(relayPin, LOW);
    Serial.println("Water pump OFF");
  }

  // Add a delay before taking the next sensor reading
  delay(5000); // You can adjust the delay interval as needed
}