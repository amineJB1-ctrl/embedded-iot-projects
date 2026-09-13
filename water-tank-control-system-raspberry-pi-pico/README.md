# Water Tank Control System  

Water level control system using ultrasonic sensor and Raspberry Pi Pico for automatic filling and draining.

## ⚙️ System Description  

The system monitors the water level in a tank using an ultrasonic sensor and controls two relays.

It includes:
* An ultrasonic sensor (HC-SR04) to measure water level  
* Two relays:
  - One for water input (filling)  
  - One for water output (draining)  
* A switch to activate/deactivate the system  

The system works as follows:
* The ultrasonic sensor measures the distance to the water surface  
* The water level is calculated and converted into percentage  
* Based on the level:
  - If level is medium → both relays ON  
  - If level is low → filling ON, draining OFF  
  - If level is high → filling OFF, draining ON  

This allows automatic control of water level inside the tank.

## Objective  

Maintain optimal water level automatically by controlling filling and draining processes.

## Components  

* Raspberry Pi Pico  
* Ultrasonic Sensor (HC-SR04)  
* Relays (2x)  
* Switch   

## Tools  

* Wokwi (simulation)  
* Visual Studio Code  
* MicroPython  

## 🔬 Simulation  

[View on Wokwi](https://wokwi.com/projects/461384216715009025)
