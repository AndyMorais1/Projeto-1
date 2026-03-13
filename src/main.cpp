#include <Arduino.h>
#include "Config.h"
#include "AudioManager.h"

// ============================================================
// INSTÂNCIAS GLOBAIS
// ============================================================

AudioManager audio(&Serial2, DF_RX_PIN, DF_TX_PIN);

// ============================================================
// SETUP
// ============================================================

void setup() {

  Serial.begin(115200);
  delay(1000);

  Serial.println("A iniciar o sistema...");

  // iniciar DFPlayer
  audio.begin();

  delay(3000);

  // tocar primeiro áudio
  audio.startSound();

  Serial.println("Sistema pronto!");
}

// ============================================================
// LOOP
// ============================================================

void loop() {

  // vazio para testes
}