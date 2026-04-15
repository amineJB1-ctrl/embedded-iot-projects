# Motor Control System 

Motor control system using ESP32 with push buttons, temperature sensors, relays, and LEDs for monitoring and protection.

## ⚙️ System Description

The system controls three motors using push buttons and temperature monitoring.
Each motor is associated with:

* A push button for manual activation
* An NTC sensor to measure temperature
* A relay to control the motor
* Two LEDs (red and green) for status indication

When a button is pressed:
* If the temperature is below a threshold → the motor is activated and the green LED turns ON
* If the temperature is above the threshold → the motor is stopped and the red LED turns ON

This ensures safe motor operation by preventing overheating and providing clear visual feedback.

## Objective

Control motors safely using temperature monitoring and manual input to prevent overheating and improve system reliability.

## Components

* ESP32
* NTC temperature sensors
* Relays
* Push buttons
* LEDs (Red & Green)

## Tools

* Wokwi (simulation)
* Visual Studio Code
* MicroPython

## Simulation

[View on Wokwi](https://wokwi.com/projects/461366887320726529)
