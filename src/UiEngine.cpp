#include "UIEngine.h"
// Incluímos as imagens aqui para que a classe as conheça
#include "warning_image.h"
#include "soap_image.h"
#include "dry_image.h"
#include "protect_image.h"
#include "congrats_image.h"
#include "wet_image.h"
#include "scrub_image.h"
#include "rinse_image.h"
#include "init_image.h"

UIEngine::UIEngine(TFT_eSPI* tftInstance) : _tft(tftInstance) {
    // Garante que as cores dos C-Arrays são processadas corretamente
    _tft->setSwapBytes(true);
}

void UIEngine::clearScreen(uint16_t color) {
    _tft->fillScreen(color);
}

void UIEngine::drawWarning() {
    _tft->fillScreen(COR_PADRAO); 
    _tft->pushImage(imgX, imgY, imgDim, imgDim, warning_map);
}

void UIEngine::drawSoap() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, soap_map);
}

void UIEngine::drawDry() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, dry_map);
}

void UIEngine::drawProtect() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, protect_map);
}

void UIEngine::drawCongrats() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, congrats_map);
}

void UIEngine::drawWet() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, wet_map);
}

void UIEngine::drawScrub() {
    _tft->fillScreen(COR_PADRAO); 
    _tft->pushImage(imgX, imgY, imgDim, imgDim, scrub_map);
}

void UIEngine::drawRinse() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, rinse_map);
}

// deve ser chamado dentro de um loop para atualizar o timer em tempo real
void UIEngine::drawTimer(int seconds) {
    
    _tft->fillRect(imgX, imgY, imgDim, imgDim, COR_PADRAO);
    _tft->setTextDatum(MC_DATUM); 
    _tft->setTextColor(TFT_WHITE, COR_PADRAO);
    _tft->setTextSize(8);
    _tft->drawNumber(seconds, 240, 160);
}

void UIEngine::drawInitialScreen() {
    _tft->fillScreen(COR_PADRAO);
    _tft->pushImage(imgX, imgY, imgDim, imgDim, init_map);
}

/*
 for (int i = 20; i >= 0; i--) {
        ui.drawTimer(i);
        delay(1000); // Contagem de 1 segundo
    }
*/