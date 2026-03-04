#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button {
private:
    uint8_t _pin;
    bool _lastState;
    unsigned long _lastDebounceTime;
    const uint32_t _debounceDelay = 50; // 50ms para estabilizar o sinal

public:
    Button(uint8_t pin);
    void begin();
    bool wasPressed(); // Retorna true apenas UMA vez por clique
    bool isDown();     // Retorna true enquanto o botão estiver seguro
};

#endif