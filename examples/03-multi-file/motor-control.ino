#include "motor.h"

Motor motor(5, 6);

void setup() {
  Serial.begin(9600);
  motor.begin();
}

void loop() {
  motor.setSpeed(180);
  Serial.println("motor forward");
  delay(500);
  motor.stop();
  Serial.println("motor stopped");
  delay(500);
}
