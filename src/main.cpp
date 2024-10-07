#include <Arduino.h>

void setup() {
    pinMode(PC13, OUTPUT);  // Configura o pino PC13 (LED embutido) como saída
}

void loop() {
    digitalWrite(PC13, LOW);  // Liga o LED
    delay(2000);              // Espera 2 segundos
    digitalWrite(PC13, HIGH); // Desliga o LED
    delay(2000);              // Espera mais 2 segundos
}
