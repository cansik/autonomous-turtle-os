#include <Arduino.h>

// serial
#define BAUD_RATE 115200

void setup() {
    Serial.begin(BAUD_RATE);
    Serial.println("starting...");
}

void loop() {

}