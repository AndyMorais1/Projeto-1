#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include <Arduino.h>

class Ultrasonic {
private:
    uint8_t _trig;
    uint8_t _echo;
    float _lastDistance;

public:
    // Recebe os pinos definidos no Config.h via Orquestrador
    Ultrasonic(uint8_t trig, uint8_t echo);

    // Configura os modos dos pinos
    void begin();

    // Realiza a leitura e retorna a distância em centímetros
    float readDistance();

    // Retorna o último valor lido sem disparar o sensor novamente
    float getLastDistance() { return _lastDistance; }
};

#endif