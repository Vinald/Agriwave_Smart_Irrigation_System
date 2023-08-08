#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 columns, 2 rows

const int sensorPin = 23;      // Analog pin for soil moisture sensor
const int relayPin = 32;       // Digital pin to control the relay module

const int moistureThreshold = 600; // Threshold value for turning the pump on/off

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Initially turn off the relay

  lcd.begin(); // Initialize the LCD
  lcd.backlight();  // Turn on the LCD backlight
  lcd.setCursor(0, 0);
  lcd.print("Moisture Level:");
}

void loop() {
  // Read raw sensor value
  int rawSensorValue = analogRead(sensorPin);

  // Map the raw sensor value to the desired range (optional if you already calibrated the sensor)
  int mappedValue = map(rawSensorValue, 0, 1023, 0, 250);

  // Print the moisture value on the LCD
  lcd.setCursor(0, 1);
  lcd.print("                "); // Clear previous value
  lcd.setCursor(0, 1);
  lcd.print(mappedValue);

  // Print the moisture value to the Serial Monitor
  Serial.print("Moisture: ");
  Serial.println(mappedValue);

  // Turn the relay on or off based on the moisture value
  if (mappedValue > moistureThreshold) {
    digitalWrite(relayPin, HIGH); // Turn on the relay, which turns on the pump
    Serial.println("Pump ON");
    lcd.setCursor(0, 2);
    lcd.print("Pump on");
    delay(1000);
    lcd.clear();
    // lcd.print("                "); // Clear previous value
    

  } else {
    digitalWrite(relayPin, LOW);  // Turn off the relay, which turns off the pump
    Serial.println("Pump OFF");
    lcd.setCursor(0, 2);
    lcd.print("Pump off");
    delay(1000);
    lcd.clear();


    // lcd.print("                "); // Clear previous value

  }

  delay(1000);
}
