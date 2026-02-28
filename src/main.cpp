#include <Arduino.h>
#include "config.h"
#include "sensores.h"
#include "atuadores.h"
void setup() {
  Serial.begin(BAUDRATE);
  inicializarLed();
}

void loop() {
  alternarLed();
  Serial.println("Estado do LED alterado!");
  delay(1000);
}