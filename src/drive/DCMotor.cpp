//
// Created by Florian Bruggisser on 20.10.18.
//

#include <Arduino.h>
#include "DCMotor.h"

DCMotor::DCMotor(uint8_t pwmPin, uint8_t dPin, bool isInverted) {
    this->pwmPin = pwmPin;
    this->dPin = dPin;
    this->isInverted = isInverted;
}

void DCMotor::setup() {
    pinMode(pwmPin, OUTPUT);
    pinMode(dPin, OUTPUT);
}

void DCMotor::move(bool forward) {
    // set direction
    digitalWrite(pwmPin, static_cast<uint8_t>(isInverted == !forward ? HIGH : LOW));

    // set speed
    //digitalWrite(dPin, HIGH);
    analogWrite(dPin, 2500);
}

void DCMotor::stop() {
    digitalWrite(pwmPin, LOW);
    digitalWrite(dPin, LOW);
}
