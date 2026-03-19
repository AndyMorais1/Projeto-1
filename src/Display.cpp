#include "Display.h"
#include "Config.h"

Display::Display() : tft(TFT_eSPI()) {}

void Display::begin() {
    tft.init();
    tft.setRotation(1); // Configura a rotação do ecrã
    tft.fillScreen(TFT_BLACK); // Limpa o ecrã
    pinMode(32, OUTPUT);    // Define o pino como saída
    digitalWrite(32, HIGH); // Liga a luz de fundo
}

void Display::clear() {
    tft.fillScreen(TFT_BLACK); // Limpa o ecrã
}

void Display::powerOn() {
    digitalWrite(32, HIGH); // Liga a luz de fundo
}

void Display::powerOff() {
    digitalWrite(32, LOW); // Desliga a luz de fundo (Ecrã fica preto)
}