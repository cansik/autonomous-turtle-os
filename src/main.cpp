#include <Arduino.h>
#include "drive/DCMotor.h"

// serial
#define BAUD_RATE 115200

// motors
auto rightMotor = DCMotor(D3, D1); // A
auto leftMotor = DCMotor(D4, D2, true); // B

void setup() {
    Serial.begin(BAUD_RATE);
    Serial.println("starting...");

    Serial.println("setting up motors...");
    rightMotor.setup();
    leftMotor.setup();
}

void loop() {
    Serial.print("moving...");
    rightMotor.move();
    leftMotor.move();
    delay(1000);
    Serial.println("stop");

    rightMotor.stop();
    leftMotor.stop();
    delay(500);
    
    Serial.print("moving backwards...");
    rightMotor.move(false);
    leftMotor.move(false);
    delay(1000);
    Serial.println("stop");

    Serial.println("waiting...");
    rightMotor.stop();
    leftMotor.stop();
    delay(1000);
}