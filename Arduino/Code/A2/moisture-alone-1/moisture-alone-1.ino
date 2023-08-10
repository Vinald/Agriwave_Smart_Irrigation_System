#include <dummy.h>
#include <dummy.h>

// Constants
const int soilMoisturePin = A0;   // Analog pin for soil moisture sensor

void setup() {
  Serial.begin(9600); // Increased serial speed
  pinMode(soilMoisturePin, INPUT);
}

void loop() {
  // Read soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Print the soil moisture value
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  delay(2000); // Delay to control the interval between readings
}
