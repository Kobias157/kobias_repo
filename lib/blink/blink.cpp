#include <Arduino.h>
#include "blink.h"

Blink::Blink(int pinNum) {
    _pin = pinNum;
    pinMode(_pin, OUTPUT);
}

void Blink::now(void) {
    digitalWrite(_pin, HIGH);
    delay(_timeBetweenOnOffMillis);
    digitalWrite(_pin, LOW);
    delay(_timeBetweenOnOffMillis);
}