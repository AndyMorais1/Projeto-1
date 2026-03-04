#ifndef DISPLAY_DEVICE_H
#define DISPLAY_DEVICE_H

#include <TFT_eSPI.h> // Biblioteca base

class Display {
public:
    TFT_eSPI tft; // Instância pública para ser acedida pela UI

    Display();
    void begin(); // Método de inicialização que o Orquestrador vai chamar
    void clear(); // Limpa o ecrã
};

#endif