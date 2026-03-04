#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <TFT_eSPI.h>

class UIEngine {
private:
    TFT_eSPI* _tft; // Ponteiro para o objeto tft que vive no DisplayDevice

public:
    // Recebe a instância do hardware no construtor
    UIEngine(TFT_eSPI* tftInstance);

    void drawBootScreen();              // Tela de carregamento
    void drawIdleScreen();              // Tela de espera (sem objeto)
    void drawAlertScreen(float dist);   // Tela de alerta (objeto detetado)
    
    // Método para animações (chamado repetidamente no loop)
    void updateAnimation(); 
};

#endif