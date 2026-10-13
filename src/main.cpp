#include <Arduino.h>
#include "../lib/blink/blink.h"

// Op de meeste ESP32 DevKit boards is GPIO 2 de ingebouwde LED
#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

Blink statusLed(LED_BUILTIN);

void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 gestart - Blink begint...");
}

void loop() {
    statusLed.now();
}