#include <WiFi.h>
#include <FirebaseESP32.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

#define WIFI_SSID "vx"
#define WIFI_PASSWORD "14231423"
#define FIREBASE_HOST "https://lesson1-d1792-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "AIzaSyAgnMD_uFO5zrqEtTRouctYp5LO4k4-W8M"

#define SENSOR_PIN 17 
#define MOISTURE_PIN A0 

OneWire oneWire(SENSOR_PIN);
DallasTemperature DS18B20(&oneWire);
FirebaseData firebaseData;

const String TEMPERATURE_KEY = "temperature";
const String MOISTURE_KEY = "moisture";

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  DS18B20.begin();
  pinMode(MOISTURE_PIN, INPUT);

  lcd.begin(); 
  lcd.backlight(); 

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}
 
void loop() {
  // Read temperature from DS18B20 sensor
  DS18B20.requestTemperatures();
  float temperatureC = DS18B20.getTempCByIndex(0);

  // Read raw moisture sensor value
  int moistureValue = analogRead(MOISTURE_PIN);

  // Map the raw moisture sensor value to the desired range (optional if you already calibrated the sensor)
  int mappedMoisture = map(moistureValue, 0, 1023, 0, 250);

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, Moisture: ");
  Serial.print(mappedMoisture);
  Serial.println(" %");

  // Display temperature and moisture level on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Moisture: ");
  lcd.print(mappedMoisture);
  lcd.print(" %");

  Firebase.setFloat(firebaseData, TEMPERATURE_KEY, temperatureC);
  Firebase.setInt(firebaseData, MOISTURE_KEY, mappedMoisture);

  delay(1000); // Adjust the delay as needed
}
