#include "Led.h"
#include <Arduino.h>

Led::Led(uint8_t pin) : _pin(pin), _state(false) {
}

// Configura o pino do LED como saída e garante que ele comece desligado
void Led::begin() {
    pinMode(_pin, OUTPUT);
    turnOff();
}
// Liga o LED e atualiza o estado interno
void Led::turnOn() {
    digitalWrite(_pin, HIGH);
    _state = true;
}
// Desliga o LED e atualiza o estado interno
void Led::turnOff() {
    digitalWrite(_pin, LOW);
    _state = false;
}
// Alterna o estado do LED com base no estado atual
void Led::toggle() {
    if (_state) {
        turnOff();
    } else {
        turnOn();
    }
}
// Pisca o LED por um período específico sem bloquear o código principal
void Led::blink(uint32_t ms) {
    turnOn();
    delay(ms);
    turnOff();
    delay(ms);
}