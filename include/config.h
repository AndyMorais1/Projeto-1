#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// =================================================================
// 1. DISPLAY TFT (Definidos no platformio.ini, aqui apenas para ref)
// =================================================================
// MISO: 19, MOSI: 23, SCLK: 18, CS: 15, DC: 2, RST: 4, BL: 32

// =================================================================
// 2. SENSORES (Entradas)
// =================================================================
#define US_TRIG_PIN    12
#define US_ECHO_PIN    14

// Botões (Pinos 34 e 35 são excelentes pois são Input-Only)
#define BTN_1_PIN    34  // Botão SW2
#define BTN_2_PIN    35  // Botão SW3

// =================================================================
// 3. ÁUDIO (DFPlayer Mini)
// =================================================================
// Usando a Hardware Serial 2 do ESP32
#define DF_RX_PIN      16
#define DF_TX_PIN      17

// =================================================================
// 4. LEDS (6 Unidades)
// =================================================================
// Escolhidos pinos que não interferem no Boot ou SPI
#define LED_1_PIN      13
#define LED_2_PIN      27
#define LED_3_PIN      26
#define LED_4_PIN      25
#define LED_5_PIN      33
#define LED_6_PIN      22

// Agrupamento para facilitar inicialização por array, se necessário
const uint8_t ALL_LEDS[] = {LED_1_PIN, LED_2_PIN, LED_3_PIN, LED_4_PIN, LED_5_PIN, LED_6_PIN};
const uint8_t NUM_LEDS = 6;

// =================================================================
// 5. CONSTANTES DE LÓGICA (Regras de Negócio)
// =================================================================
#define DISTANCIA_TURN_ON_CM  5.0
#define VOLUME_PADRAO       20

#endif