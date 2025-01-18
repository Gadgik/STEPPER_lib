# StepperMotor Library for A4988 Driver

This library provides an easy way to control a stepper motor using an A4988 driver with an Arduino. It allows you to control the stepper motor's rotation, direction, and enable/disable the driver.

## Features

- Rotate the motor a specified number of steps.
- Control the direction of rotation.
- Enable and disable the motor driver.
- Adjustable delay time between steps for motor speed control.

## Installation

1. Download the `StepperMotor` library file and include it in your Arduino project.
2. Open your Arduino IDE.
3. In the Arduino IDE, go to `Sketch > Include Library > Add .ZIP Library` and select the library file.

## Functions
`StepperMotor(int stepPin, int dirPin, int enPin, int delayTime)`
Constructor that initializes the stepper motor with specified pin numbers and delay time.

stepPin: The pin connected to the STEP input of the A4988 driver.
dirPin: The pin connected to the DIR input of the A4988 driver.
enPin: The pin connected to the ENABLE input of the A4988 driver.
delayTime: The delay time (in milliseconds) between each step, controlling the motor's speed.

`void begin()`
Sets the pins for the stepper motor driver to output mode. Call this function in the setup() section of your Arduino sketch.

`void rotate(int steps)`
Rotates the stepper motor by the specified number of steps. Positive values rotate the motor clockwise, while negative values rotate it counterclockwise.
steps: The number of steps to rotate. A positive value rotates the motor clockwise, while a negative value rotates it counterclockwise.

`void enable()`
Enables the stepper motor driver by setting the ENABLE pin to LOW.

`void disable()`
Disables the stepper motor driver by setting the ENABLE pin to HIGH.

`void step()`
Performs a single step in the rotation, with a delay between high and low states of the STEP pin to control speed.

## License
This library is open-source and available under the MIT License.
