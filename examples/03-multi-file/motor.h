#pragma once

class Motor {
public:
  Motor(int enablePin, int directionPin)
      : enablePin_(enablePin), directionPin_(directionPin) {}

  void begin() {
    pinMode(enablePin_, OUTPUT);
    pinMode(directionPin_, OUTPUT);
  }

  void setSpeed(int speed) {
    digitalWrite(directionPin_, HIGH);
    analogWrite(enablePin_, speed);
  }

  void stop() {
    analogWrite(enablePin_, 0);
  }

private:
  int enablePin_;
  int directionPin_;
};
