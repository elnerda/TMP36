/*
  TMP36.cpp - Library for TMP36 temperature sensor.
  Created by Gaetano, May 25, 2016.
  Released into the public domain.
*/

#include "Arduino.h"
#include "TMP36.h"

TMP36::TMP36(int pin, float vcc)
{
  //pinMode(pin, INPUT);
  _pin = pin;
  _vcc = vcc;
}

float TMP36::getTempC()
{
  int reading = analogRead(_pin);
   float voltage = reading * _vcc;
  voltage /= 1024.0; 
  float temperatureC = (voltage - 0.5) * 100;
  return temperatureC;
}

float TMP36::getTempF()
{
	int reading = analogRead(_pin);
   float voltage = reading * _vcc;
  voltage /= 1024.0; 
  float temperaturec = (voltage - 0.5) * 100;
  float temperatureF = (temperaturec * 9.0 / 5.0) + 32.0;
  return temperatureF;
}
