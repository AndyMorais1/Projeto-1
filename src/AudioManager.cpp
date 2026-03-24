#include "AudioManager.h"

AudioManager::AudioManager(HardwareSerial* serial, uint8_t rx, uint8_t tx) 
    : _serial(serial), _rx(rx), _tx(tx), _volume(20) {}

void AudioManager::begin() {
    // 1. Inicia a porta Serial2 com os pinos definidos no Config.h
    // O baud rate padrão do DFPlayer é 9600
    _serial->begin(9600, SERIAL_8N1, _rx, _tx);
    delay(3000);
    Serial.println(F("AudioManager: A iniciar DFPlayer..."));
     

    // 2. Tenta comunicar com o módulo
    // O timeout de 500ms é uma margem segura para o módulo responder
    delay(3000);
    if (!_player.begin(*_serial, false, false)) {
        Serial.println(F("Erro: Não foi possível conectar ao DFPlayer Mini."));
        Serial.println(F("1. Verifique as ligações RX/TX."));
        Serial.println(F("2. Verifique se o Cartão SD está inserido."));
        return;
    }

    // 3. Configuração inicial após sucesso
    // _player.setTimeOut(500); // Timeout para comandos
    _player.volume(_volume); // Define o volume inicial (0-30)
    _player.EQ(DFPLAYER_EQ_NORMAL);
    // _player.outputDevice(DFPLAYER_DEVICE_SD);

    Serial.println(F("AudioManager: DFPlayer pronto!"));
}


void AudioManager::startSound() {

    Serial.println("Playing 001.mp3");
    _player.play(1);
}

void AudioManager:: wetHands (){
    Serial.println("Playing 002.mp3");
    _player.play(2);
}

void AudioManager:: soap(){
    Serial.println("Playing 003.mp3");
    _player.play(3);
}

void AudioManager:: rubHands(){
    _player.play(4);
}
void AudioManager:: dryHands(){
    _player.play(5);
}

void AudioManager:: conclusion(){
    _player.play(6);
}

// void AudioManager:: notStop(){
//     _player.playMp3Folder(7);
// }

// void AudioManager::setVolume(int vol) {
//     // Espaço para ajustar volume do módulo
// }


// void AudioManager::stop() {
//     // Espaço para parar áudio
// }