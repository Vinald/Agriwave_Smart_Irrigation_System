// Libraries
#include <Arduino.h>
#include <Wire.h> // Wire library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for I2C LCD

// Constants
const int soilMoisturePin = A0;   // Analog pin for soil moisture sensor

// Initialize the LCD module
LiquidCrystal_I2C lcd(0x27, 16, 2); // Change the address (0x27) if needed

void setup() {
  Serial.begin(9600);
  pinMode(soilMoisturePin, INPUT);

  // Initialize the LCD module
  lcd.begin(); // Adjust the column and row size according to your LCD module
  lcd.backlight(); // Turn on the LCD backlight
}

void loop() 
  // Read soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Print the soil moisture value to the Serial monitor
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  // Display the soil moisture value on the LCD
  lcd.clear(); // Clear the LCD screen
  lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
  lcd.print("Moisture: ");
  lcd.print(soilMoistureValue); // Display the soil moisture value
  lcd.print("  "); // To clear any residual characters

  // Add a delay before taking the next sensor reading
  delay(2000); // You can adjust the delay interval as needed
}
