/* Morse.cpp - kirjasto SOS-ledille
 * Tehnyt Slerbalenkki 21.11.2018
 */
 
#include "Arduino.h"
#include "Morse.h"

//Constructor
Morse::Morse(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
}

//Lyhyen välähdyksen määritys
void Morse::dot(){
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

//Pitkän väkähdyksen määritys
void Morse::dash(){
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

