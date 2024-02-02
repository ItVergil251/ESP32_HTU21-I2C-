#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_HTU21DF.h"

Adafruit_HTU21DF htu = Adafruit_HTU21DF();
// SDA -> GPIO21 SCL-> GPIO22:

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

  if (!htu.begin()) {
    Serial.println("Check circuit. HTU21D not found!");
    while (1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = htu.readTemperature();
    float hum = htu.readHumidity();
    Serial.print("Temperature(°C): "); 
    Serial.print(temp); 
    Serial.print("\t\t");
    Serial.print("Humidity(%): "); 
    Serial.println(hum);
    delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}