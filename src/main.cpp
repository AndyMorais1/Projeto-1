#include <Arduino.h>
#include "Display.h"
#include "UIEngine.h"

// Instâncias
Display dispositivo;
UIEngine ui(&dispositivo.tft);

void setup() {
    Serial.begin(115200);
    dispositivo.begin();
    
    // --- CICLO ÚNICO ---
    ui.drawInitialScreen();
    delay(2000);

    for (int i = 5; i >= 0; i--) {
        ui.drawTimer(i);
        delay(1000);
    }

    ui.drawCongrats();
    delay(2000);

    ui.drawWarning();
    delay(2000);

    // --- DESLIGAR DISPLAY ---
    Serial.println("Ciclo terminado. Desligando backlight...");
    dispositivo.powerOff();
}

void loop() {
    // Fica vazio para o código não repetir
}