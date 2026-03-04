#ifndef SYSTEM_LOGIC_H
#define SYSTEM_LOGIC_H

#include <Arduino.h>
#include "Config.h"
#include "Display.h"
#include "UIEngine.h"
#include "Ultrasonic.h"
#include "AudioManager.h"
#include "Button.h"
#include "Led.h"

class SystemLogic {
private:
    // --- Hardware e Interface ---
    Display display;
    UIEngine      ui;

    // --- Sensores ---
    Ultrasonic    sensor;
    Button        btn1; // SW2
    Button        btn2;   // SW3

    // --- Áudio ---
    AudioManager  audio;

    // --- LEDs Individuais ---
    Led led1, led2, led3, led4, led5, led6;

public:
    SystemLogic(); // Construtor
    void setup();  // Inicialização de todos os componentes
    void loop();   // Lógica principal
};

#endif