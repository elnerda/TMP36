/*
  TMP36.h - Library for TMP36 analog Temperature Sensor code.
  Created by Gaetano, May 25, 2016.
  Released into the public domain.
*/
#ifndef TMP36_h
#define TMP36_h

#include "Arduino.h"

class TMP36
{
  public:
    TMP36(int pin);
    float getTempC();
    float getTempF();
  private:
    int _pin;
	int reading;
	float voltage;
	float temperaturec;
};

#endif