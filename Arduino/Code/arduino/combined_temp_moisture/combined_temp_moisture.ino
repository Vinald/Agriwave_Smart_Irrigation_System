  #include <OneWire.h>
  #include <DallasTemperature.h>
  #include <LiquidCrystal_I2C.h>

  #define SENSOR_PIN 17 // Replace 17 with the GPIO pin number connected to the DS18B20 sensor's DATA pin

  OneWire oneWire(SENSOR_PIN);
  DallasTemperature DS18B20(&oneWire);

  LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 columns, 2 rows

  const int sensorPin = A0;      // Analog pin for soil moisture sensor
  const int relayPin = 3;       // Digital pin to control the relay module

  const int moistureThreshold = 430; // Threshold value for turning the pump on/off

  void setup() {
    Serial.begin(9600);
    DS18B20.begin();
    pinMode(sensorPin, INPUT);
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW);  // Initially turn off the relay

    lcd.begin(); // Initialize the LCD
    lcd.backlight();  // Turn on the LCD backlight
  }

  void loop() {
    // Read temperature from DS18B20 sensor
    DS18B20.requestTemperatures();
    float temperatureC = DS18B20.getTempCByIndex(0);

    // Read raw sensor value
    int rawSensorValue = analogRead(sensorPin);

    // Map the raw sensor value to the desired range (optional if you already calibrated the sensor)
    int mappedValue = map(rawSensorValue, 0, 1023, 0, 250);

    // Display moisture level and temperature on the LCD
    lcd.setCursor(0, 0);
    lcd.print("Moisture: ");
    lcd.print(mappedValue);
    lcd.print("    ");

    lcd.setCursor(0, 1);
    lcd.print("Temperature: ");
    lcd.print(temperatureC);
    lcd.print(" °C");

    // Print the moisture and temperature values to the Serial Monitor
    Serial.print("Moisture: ");
    Serial.print(mappedValue);
    Serial.print(", Temperature: ");
    Serial.print(temperatureC);
    Serial.println(" °C");

    // Turn the relay on or off based on the moisture and temperature values
    if (mappedValue > moistureThreshold && temperatureC >= 26 && temperatureC <= 50) {
      digitalWrite(relayPin, HIGH); // Turn on the relay, which turns on the pump
      Serial.println("Pump ON");
    } else {
      digitalWrite(relayPin, LOW);  // Turn off the relay, which turns off the pump
      Serial.println("Pump OFF");
    }

    delay(1000);
  }
