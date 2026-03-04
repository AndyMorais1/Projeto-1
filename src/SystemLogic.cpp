#include "SystemLogic.h"

// Lista de Inicialização: associa cada pino do Config.h ao respetivo objeto
SystemLogic::SystemLogic() : 
    ui(&display.tft),                               // Injeta a instância da TFT_eSPI na UI
    sensor(US_TRIG_PIN, US_ECHO_PIN),             // Pinos 12 e 14
    btn1(BTN_1_PIN),                              // Pino 34
    btn2(BTN_2_PIN),                              // Pino 35
    audio(&Serial2, DF_RX_PIN, DF_TX_PIN),         // Serial2, pinos 16 e 17
    led1(LED_1_PIN), led2(LED_2_PIN), led3(LED_3_PIN), // LEDs 13, 27, 26
    led4(LED_4_PIN), led5(LED_5_PIN), led6(LED_6_PIN)  // LEDs 25, 33, 22
{}

void SystemLogic::setup() {
    // 1. Iniciar Comunicação Serial para Debug (opcional)
    Serial.begin(115200);

    // 2. Chamar o .begin() / .init() de cada instância
    // A ordem importa: Display primeiro para dar feedback
    display.begin();
    ui.drawBootScreen();

    // Sensores e Botões
    sensor.begin();
    btn1.begin();
    btn2.begin();

    // Atuadores
    led1.begin(); led2.begin(); led3.begin();
    led4.begin(); led5.begin(); led6.begin();
    
    // Áudio (pode demorar um pouco a estabilizar)
    audio.begin();

    Serial.println("SystemLogic: Todos os componentes foram instanciados e iniciados.");
}

void SystemLogic::loop() {
    // Por enquanto vazio, aguardando a lógica de negócio
}

// espaco para funções auxiliares, se necessário