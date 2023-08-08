#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ThingSpeak.h>
#include <WiFi.h>
#include <FirebaseESP32.h>

// Constants for ThingSpeak
const char* ssid = "vinald";
const char* password = "14231423";
unsigned long myChannel = 2234562;
const char* apiKey = "H0JAID5SFXIIFCJX";
const int soilMoisturePin = A0; 
const int LDRPin = 34;
const int temperatureSensorPin = 17; 

// Constants for Firebase
#define WIFI_SSID "vinald"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST F("https://agriculture-a2856-default-rtdb.firebaseio.com/")
#define FIREBASE_AUTH F("AIzaSyAgnMD_uFO5zrqEtTRouctYp5LO4k4-W8M")
OneWire oneWire(temperatureSensorPin);
DallasTemperature DS18B20(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiClient client; // Declare the WiFiClient object
FirebaseData firebaseData;

// Constants for pump control
const int moistureThresholdMin = 600; // Minimum threshold value for turning the pump on
const int moistureThresholdMax = 1000; // Maximum threshold value for turning the pump on
const int temperatureThresholdMin = 30; // Minimum temperature threshold for turning the pump on
const int temperatureThresholdMax = 50; // Maximum temperature threshold for turning the pump on

const int relayPin = 32;
bool pumpStatus = false; // Variable to keep track of the pump status

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
  lcd.setCursor(0, 0); 
  lcd.print("Moisture: ");
  lcd.print(mappedSoilMoistureValue); 
  // lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C ");
  lcd.setCursor(0, 2);
  lcd.print("LDR: ");
  lcd.print(ldrValue);

  // ThingSpeak
  ThingSpeak.setField(1, mappedSoilMoistureValue);
  ThingSpeak.setField(2, temperatureC);
  ThingSpeak.setField(3, ldrValue);
  ThingSpeak.setField(4, (int)temperatureSensorPin); // Send the timestamp as a field to ThingSpeak
  ThingSpeak.setField(5, pumpStatus); // Send the pump status to ThingSpeak
  int x = ThingSpeak.writeFields(myChannel, apiKey);
  if (x == 200) {
    Serial.println("ThingSpeak Updated");
  } else {
    Serial.println("ThingSpeak Problem. HTTP error code: " + String(x));
  }

  // Firebase
  unsigned long currentMillis = millis();
  String timestampStr = String(currentMillis / 1000);
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/soil_moisture", mappedSoilMoistureValue);
  Firebase.setInt(firebaseData, "/sensor_readings/" + timestampStr + "/ldr", ldrValue);
  Firebase.setFloat(firebaseData, "/sensor_readings/" + timestampStr + "/temperature", temperatureC);
  Firebase.setString(firebaseData, "/sensor_readings/" + timestampStr + "/timestamp", timestampStr); // Send the timestamp to Firebase
  Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus); // Send the pump status to Firebase

  // Check if the conditions for turning on the pump are met
  bool newPumpStatus = (temperatureC >= temperatureThresholdMin && temperatureC <= temperatureThresholdMax) ||
                       (mappedSoilMoistureValue >= moistureThresholdMin && mappedSoilMoistureValue <= moistureThresholdMax);

  if (newPumpStatus != pumpStatus) {
    // Pump status changed, log the change
    String pumpStatusStr = newPumpStatus ? "ON" : "OFF";
    Serial.println("Water pump " + pumpStatusStr);
    lcd.setCursor(0, 3);
    lcd.print("Pump " + pumpStatusStr + "      ");
    pumpStatus = newPumpStatus; // Update the pump status variable

    // Log the pump status to Firebase
    Firebase.setString(firebaseData, "/pump_status", pumpStatusStr);
    Firebase.setBool(firebaseData, "/sensor_readings/" + timestampStr + "/pump_status", pumpStatus); // Send the pump status to Firebase
  }

  // Turn the relay on or off based on the pump status
  digitalWrite(relayPin, pumpStatus ? HIGH : LOW);

  // Add a delay before taking the next sensor reading
  delay(500); // You can adjust the delay interval as needed
}
