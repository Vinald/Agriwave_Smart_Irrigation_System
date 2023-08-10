#include <OneWire.h>
#include <DallasTemperature.h>

#define SENSOR_PIN 17 // Replace 17 with the GPIO pin number connected to the DS18B20 sensor's DATA pin

OneWire oneWire(SENSOR_PIN);
DallasTemperature DS18B20(&oneWire);

void setup() {
  Serial.begin(9600);
  DS18B20.begin();
}

void loop() {
  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);
  // float temperatureF = temperatureC * 9.0 / 5.0 + 32.0; // If you need temperature in Fahrenheit

  // Print the temperature in Celsius
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Wait for a second before taking the next sensor reading
}
