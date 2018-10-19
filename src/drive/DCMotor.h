//
// Created by Florian Bruggisser on 20.10.18.
//

#ifndef AUTONOMOUS_TURTLE_OS_DCMOTOR_H
#define AUTONOMOUS_TURTLE_OS_DCMOTOR_H


class DCMotor {

private:
    uint8_t pwmPin;
    uint8_t dPin;
    bool isInverted;

public:
    explicit DCMotor(uint8_t pwmPin, uint8_t dPin, bool isInverted = false);

    void setup();

    void move(bool forward = true);

    void stop();
};


#endif //AUTONOMOUS_TURTLE_OS_DCMOTOR_H
