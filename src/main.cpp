#include <Arduino.h>
#include "Display.h"
#include "UIEngine.h"
#include "config.h"
#include "AudioManager.h"

// Instâncias
Display dispositivo;
UIEngine ui(&dispositivo.tft);
AudioManager audio(&Serial2, DF_RX_PIN, DF_TX_PIN);

void setup() {
    Serial.begin(115200);
    dispositivo.begin();

    // --- CICLO ÚNICO ---
    ui.drawInitialScreen();
    delay(3000);
    
    audio.begin();
    delay(3000);

    audio.startSound();

    

    ui.drawWet();
    delay(6000);

     ui.drawProtect();
    delay(10000);

    ui.drawSoap();
    delay(4000);

    ui.drawProtect();
    delay(10000);

    ui.drawScrub();
    delay(15000);

    ui.drawProtect();
    delay(10000);

    ui.drawRinse();
    delay(10000);

    ui.drawProtect();
    delay(10000);

    ui.drawDry();
    delay(8000);

    ui.drawProtect();
    delay(10000);

    ui.drawCongrats();
    delay(3000);

    ui.drawWarning();
    delay(2000);

     

    

    // --- DESLIGAR DISPLAY ---
    Serial.println("Ciclo terminado. Desligando backlight...");
    dispositivo.powerOff();
}

void loop() {
    // Fica vazio para o código não repetir
}