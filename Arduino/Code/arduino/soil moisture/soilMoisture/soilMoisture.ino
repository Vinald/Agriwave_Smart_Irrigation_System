// Libraries
#include <Arduino.h>

// Constants
const int soilMoisturePin = A0;   // Analog pin for soil moisture sensor

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);
}

void loop() {
  // Read soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Print the soil moisture value
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  // Add a delay before taking the next sensor reading
  delay(2000); // You can adjust the delay interval as needed
}