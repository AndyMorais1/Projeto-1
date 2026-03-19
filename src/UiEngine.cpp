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
    _tft->pushImage(imgX, imgY, imgW, imgH, warning_map);
}

void UIEngine::drawSoap() {
    _tft->pushImage(imgX, imgY, imgW, imgH, soap_map);
}

void UIEngine::drawDry() {
    _tft->pushImage(imgX, imgY, imgW, imgH, dry_map);
}

void UIEngine::drawProtect() {
    _tft->pushImage(imgX, imgY, imgW, imgH, protect_map);
}

void UIEngine::drawCongrats() {
    _tft->pushImage(imgX, imgY, imgW, imgH, congrats_map);
}

void UIEngine::drawWet() {
    _tft->pushImage(imgX, imgY, imgW, imgH, wet_map);
}

void UIEngine::drawScrub() {
    _tft->pushImage(imgX, imgY, imgW, imgH, scrub_map);
}

void UIEngine::drawRinse() {
    _tft->pushImage(imgX, imgY, imgW, imgH, rinse_map);
}

void UIEngine::drawInitialScreen() {
    _tft->pushImage(imgX, imgY, imgW, imgH, init_map);
}