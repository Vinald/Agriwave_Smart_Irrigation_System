#include <FirebaseESP32.h>
#include <WiFi.h>
#include "DHT.h"
#define FIREBASE FIREBASE_HOST "capstone-project-4e6b5-default-rtdb.firebaseio.com"
#define WIFI_SSID "netLas!UG" // Change the name of your WIFI
#define WIFI PASSWORD "netLas!UGPA55" // Change the password of your WIFI
#define FIREBASE FIREBASE_Authorization_key "b5074efba4fbaed72018108e13d4137ccf504364"
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPlN, DHTTYPE);
FirebaseData firebaseData;
FirebaseJson json;

void setup() {
    Serial.begin(9600);
    dht.begin();
    WiFi.begin (WIFI_SSID, WIFI_PASSWORD);
    Serial.print("Connecting ....");
    while (WiFi.status() != WL_CONNECTED)
    {
      Serial. print(".");
      delay(300);
    }
    Serial.println();
    Serial.print("lP Address: ");
    Serial.println(WiFi.localIP());
    Serial.println();
    Firebase.begin(FlREBASE_HOST,FIREBASE_Authorization_key);
}

void loop() {
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();

  if (isnan(hum) || isnan(temp)
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  
  Serial. print("Temperature: ");
  Serial. print(temp);
  Serial. print("C");
  Serial.print(" Humidity: ");
  Serial.print(hum);
  Serial. print("%");
  Serial.println();

  Firebase.setFloat(firebaseData, "/ESP32_APP/TEMPERATIJRE", temp);
  Firebase.setFloat(firebaseData, "/ESP32_APPIHUMIDITY", hum);
  delay(200);
}



