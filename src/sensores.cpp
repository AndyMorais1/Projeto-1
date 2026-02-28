#include<Arduino.h>
#include "config.h"
#include "sensores.h"

void inicializarLed() {
    pinMode(LED_PIN, OUTPUT);
}

void alternarLed() {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
}