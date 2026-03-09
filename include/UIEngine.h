#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <TFT_eSPI.h>

class UIEngine {
private:
    TFT_eSPI* _tft;
    
    // Configurações de layout (256x256 centrada num ecrã 480x320)
    const int imgX = 112;
    const int imgY = 32;
    const int imgDim = 256;

    // Cores personalizadas
    const uint16_t COR_PADRAO = 0xAEDC; 

public:
    UIEngine(TFT_eSPI* tftInstance);

    // Métodos para cada estado do fluxo
    void drawWarning();
    void drawSoap();
    void drawDry();
    void drawProtect();
    void drawCongrats();
    void drawWet();
    void drawScrub();
    void drawRinse();
    void drawTimer(int seconds);
    void drawInitialScreen();
    
    void clearScreen(uint16_t color);
};

#endif