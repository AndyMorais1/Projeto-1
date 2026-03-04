#include "UIEngine.h"


UIEngine::UIEngine(TFT_eSPI* tftInstance) : _tft(tftInstance) {}

void UIEngine::drawBootScreen() {}

void UIEngine::drawIdleScreen() {}

void UIEngine::drawAlertScreen(float dist) {}

void UIEngine::updateAnimation() {}