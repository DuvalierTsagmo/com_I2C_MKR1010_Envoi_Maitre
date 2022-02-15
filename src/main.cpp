/*
  Titre      : communication I2C entre deux uC mkr1000 qui est le maitre
  Auteur     : Duvalier Tsagmo
  Date       : 15/02/2022
  Description: elle permet de faire connecter deux uC qui est le maitre
  Version    : 0.0.1
*/

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
