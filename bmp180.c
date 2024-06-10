/*
    Project name : BMP180 Air Pressure Sensor Module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : arduino-nano-bmp180-air-pressure-sensor-module
*/

#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  
  if (!bmp.begin()) {
    Serial.println("Could not find BMP085 sensor, check wiring!");
    while (1) {}
  }
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" *C");
  
  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");
  
  Serial.println();
  
  delay(1000);
}
