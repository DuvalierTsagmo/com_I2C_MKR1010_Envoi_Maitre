
#include <Arduino.h>
#include <Wire.h>

const int Potentiometre_PIN = A1;
int EnvoiDonnee = 0;

void setup()
{
    Wire.begin();
}

void loop()
{
    EnvoiDonnee = analogRead(Potentiometre_PIN);
    Wire.beginTransmission(9);
    Wire.write(EnvoiDonnee);
    Wire.endTransmission();
}
