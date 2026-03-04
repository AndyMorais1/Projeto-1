#include "Display.h"

Display::Display() : tft(TFT_eSPI()) {}

void Display::begin() {
    tft.init();
    tft.setRotation(1); // Configura a rotação do ecrã
    tft.fillScreen(TFT_BLACK); // Limpa o ecrã
}

void Display::clear() {
    tft.fillScreen(TFT_BLACK); // Limpa o ecrã
}