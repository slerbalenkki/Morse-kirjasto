/* Morse.h - kirjasto SOS-ledille
 * Tehnyt Slerbalenkki 21.11.2018
 */

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif

