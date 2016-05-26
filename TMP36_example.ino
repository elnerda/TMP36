#include <TMP36.h>

int tmpPin=0;

TMP36 tmp(0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float tempC=tmp.getTempC();
  float tempF=tmp.getTempF();
  Serial.println(tempC);
  Serial.println(tempF);
  delay(1000);
}
