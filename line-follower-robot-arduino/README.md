# Line Follower Robot

Arduino-based robot that follows a line using infrared sensors and motor control.

## ⚙️ System Description

The robot uses two infrared sensors to detect the line on the ground. These sensors identify the contrast between the line and the surrounding surface.

The Arduino reads the sensor values and controls the motors through a motor driver to adjust the robot's movement:

* Both sensors detect the line → robot moves forward
* Right sensor detects → robot turns right
* Left sensor detects → robot turns left
* No detection → robot stops

This allows the robot to stay aligned with the path in real time.

## Objective

Follow a predefined line path using sensor-based navigation and motor control.

## Components

* Arduino Uno
* IR sensors (line tracking)
* Motor driver (L298N)
* DC motors
* Battery

## Tools

* Proteus (simulation)
* Visual Studio Code
* C/C++ (Arduino)

## Simulation

(Add your Proteus design screenshot here)
