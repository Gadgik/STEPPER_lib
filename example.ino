#include "StepperMotor.h"

// Pin definitions
const int stepPin = 3;
const int dirPin = 4;
const int enPin = 5;
const int delayTime = 500; // Delay time between steps (in milliseconds)

StepperMotor motor(stepPin, dirPin, enPin, delayTime);

void setup() {
  motor.begin(); // Initialize motor
}

void loop() {
  motor.rotate(200);  // Rotate 200 steps clockwise
  delay(1000);        // Wait 1 second
  motor.rotate(-200); // Rotate 200 steps counterclockwise
  delay(1000);        // Wait 1 second
}
