#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal_I2C.h>

const int sensorPin = A0;   // Analog pin for soil moisture sensor
const int desiredMin = 0;   // Desired minimum value for the output range
const int desiredMax = 250; // Desired maximum value for the output range

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 columns, 2 rows

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  lcd.begin();
  lcd.backlight(); // Turn on the LCD backlight
  lcd.print("Soil Moisture"); // Display a welcome message
  delay(2000);
}

void loop()
{
  // Read raw sensor value
  int rawSensorValue = analogRead(sensorPin);

  // Map the raw sensor value to the desired range
  int mappedValue = map(rawSensorValue, 0, 1023, desiredMin, desiredMax);

  // Print the mapped value
  Serial.print(mappedValue);
  Serial.print(" - ");

  // Determine the moisture level based on the mapped value
  // if (mappedValue >= 1000)
  // {
  //   Serial.println("not in Soil or DISCONNECTED");
  //   lcd.setCursor(0, 1);
  //   lcd.print("Not in Soil");
  //   lcd.print("             ");
  // }
  if (mappedValue <= 1000 && mappedValue >= 600)
  {
    Serial.println("DRY - water the soil");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Dry Water");
    lcd.setCursor(0, 2);
    lcd.println(mappedValue);
    lcd.println("            ");   

  }
  else if (mappedValue < 600 && mappedValue >= 370)
  {
    Serial.println("HUMIDITY - this is within the normal range");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Humidity Normal");
    lcd.setCursor(0, 2);
    lcd.println(mappedValue);
    lcd.println("            ");   


  }
  else if (mappedValue < 370)
  {
    Serial.println("WATER - no need to water");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("NO Need To Water");
    lcd.setCursor(0, 2);
    lcd.println(mappedValue);
    lcd.println("            ");   

  }

  delay(1000);
}
