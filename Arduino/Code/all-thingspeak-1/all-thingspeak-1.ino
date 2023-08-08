#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "vx";
const char* password = "14231423";

// Thingspeak channel details
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";

// Constants
const int soilMoisturePin = A0; 
const int LDRPin = 34;
const int temperatureSensorPin = 17; 

OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2); // Change the address (0x27) if needed

WiFiClient client; // Declare the WiFiClient object

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);

  // Initialize the LCD module
  lcd.begin(); // Adjust the column and row size according to your LCD module
  lcd.backlight(); // Turn on the LCD backlight

  // Initialize the temperature sensor
  DS18B20.begin();

  // Connect to Wi-Fi
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  // Start ThingSpeak
  ThingSpeak.begin(client);
}

void loop() {
  int soilMoistureValue = analogRead(soilMoisturePin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250); // Map to a range of 0 to 100%

  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  int ldrValue = analogRead(LDRPin);

  Serial.print("Soil Moisture: ");
  Serial.print(mappedSoilMoistureValue);
  Serial.print("%, Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, LDR Value: ");
  Serial.println(ldrValue);

  lcd.clear(); 

  lcd.setCursor(0, 0); 
  lcd.print("Moisture: ");
  lcd.print(mappedSoilMoistureValue); 
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" °C ");

  lcd.setCursor(0, 2);
  lcd.print("LDR: ");
  lcd.print(ldrValue);

  // ThingSpeak
  ThingSpeak.setField(1, mappedSoilMoistureValue);
  ThingSpeak.setField(2, temperatureC);
  ThingSpeak.setField(3, ldrValue);

  int x = ThingSpeak.writeFields(myChannel, apiKey);
  if (x == 200) {
    Serial.println("Channel Updated");
  } else {
    Serial.println("Problem. HTTP error code: " + String(x));
  }

  // Add a delay before taking the next sensor reading
  delay(2000); // You can adjust the delay interval as needed
}
