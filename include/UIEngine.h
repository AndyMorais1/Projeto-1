#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <TFT_eSPI.h>

class UIEngine {
private:
    TFT_eSPI* _tft;

    // Imagens fullscreen para ecrã 480x320
    static const int imgX = 0;
    static const int imgY = 0;
    static const int imgW = 480;
    static const int imgH = 320;

public:
    UIEngine(TFT_eSPI* tftInstance);

    void drawWarning();
    void drawSoap();
    void drawDry();
    void drawProtect();
    void drawCongrats();
    void drawWet();
    void drawScrub();
    void drawRinse();
    void drawInitialScreen();

    void clearScreen(uint16_t color);
};

#endif