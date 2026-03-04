#include "Button.h"

Button::Button(uint8_t pin) : _pin(pin), _lastState(HIGH), _lastDebounceTime(0) {}

// Configura o pino do botão como entrada com pull-up interno
void Button::begin() {
    pinMode(_pin, INPUT_PULLUP);
}

// Verifica se o botão foi pressionado, considerando o debounce
bool Button::wasPressed() {
    bool currentState = digitalRead(_pin);
    if (currentState != _lastState) {
        _lastDebounceTime = millis();
    }

    if ((millis() - _lastDebounceTime) > _debounceDelay) {
        if (currentState == LOW && _lastState == HIGH) {
            _lastState = currentState;
            return true; // Botão foi pressionado
        }
    }

    _lastState = currentState;
    return false; // Botão não foi pressionado
}

// Retorna true enquanto o botão estiver pressionado
bool Button::isDown() {
    return digitalRead(_pin) == LOW; // Retorna true enquanto o botão estiver pressionado
}