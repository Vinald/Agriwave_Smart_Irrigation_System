#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

// Constants for ThingSpeak
const char* ssid = "vx";
const char* password = "14231423";
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";
const int soilMoisturePin = A0; 
const int LDRPin = 34;
const int temperatureSensorPin = 17; 
const int relayPin = 32; // Pin connected to the relay module

// Constants for Firebase
#define WIFI_SSID "vx"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://netlabs-agric-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyAgnMD_uFO5zrqEtTRouctYp5LO4k4-W8M")
OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client; // Declare the WiFiClient object
FirebaseData firebaseData;

// Pump control thresholds
const int moistureThresholdMin = 600; // Minimum moisture level for turning the pump on
const int moistureThresholdMax = 1000; // Maximum moisture level for turning the pump off
const float temperatureThresholdMin = 30.0; // Minimum temperature for turning the pump on
const float temperatureThresholdMax = 50.0; // Maximum temperature for turning the pump off
const int pumpOnTime = 5000; // Time in milliseconds to turn on the water pump (5 seconds)

// Global variable to keep track of the timestamp
unsigned long timestamp = 1;

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);
  pinMode(LDRPin, INPUT);
  pinMode(temperatureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Initially turn off the relay

  lcd.begin();
  lcd.backlight();

  DS18B20.begin();

  // Connect to Wi-Fi for both ThingSpeak and Firebase
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  // Start ThingSpeak
  ThingSpeak.begin(client);
  
  // Start Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  // Read sensor values
  int soilMoistureValue = analogRead(soilMoisturePin);
  int mappedSoilMoistureValue = map(soilMoistureValue, 0, 1023, 0, 250); // Map to a range of 0 to 100%
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);
  int ldrValue = analogRead(LDRPin);

  // Print sensor readings on the LCD
  lcd.clear(); 
  // lcd.setCursor(0, 0); 
  // lcd.print("ID: ");
  // lcd.print(timestamp); // Display the timestamp as ID
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
    Serial.println("ThingSpeak Updated");
  } else {
    Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
  }

  // Firebase
  String timestampStr = String(timestamp); // Convert the timestamp to string
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);

  // Increment the timestamp for the next reading
  timestamp++;

  // Check if the conditions for turning on the pump are met
  bool turnOnPump = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax ||
                     mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  if (turnOnPump) {
    // Turn on the water pump
    digitalWrite(relayPin, HIGH);
    Serial.println("Water pump ON");
    // You can add code here to log the pump status to Firebase or perform any other actions
    delay(pumpOnTime);
    digitalWrite(relayPin, LOW); // Turn off the pump after pumpOnTime milliseconds
    Serial.println("Water pump OFF");
  }

  // Add a delay before taking the next sensor reading
  delay(2000); // You can adjust the delay interval as needed
}
