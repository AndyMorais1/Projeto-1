#ifndef LED_H
#define LED_H
#include <Arduino.h>

class Led {
private:
    uint8_t _pin;
    bool _state;

public:
    Led(uint8_t pin);
    void begin();
    void turnOn();
    void turnOff();
    void toggle();
    void blink(uint32_t ms); // Útil se quiseres que ele pisque sem travar o código
};

#endif