## Smart Home System

Smart home system using Arduino Uno with DHT22 sensor, LDR, and HC-SR04 ultrasonic sensor to automate window and door control.

## ⚙️ System Description

The system uses a DHT22 sensor to measure temperature and an LDR sensor to detect light intensity. Based on these values, the window is automatically controlled using a servo motor:
* The window opens when the temperature is above 30°C and the light level indicates daytime.
* Otherwise, the window remains closed.

An HC-SR04 ultrasonic sensor is used to detect the presence of a person near the door. When an object is detected within a distance of 50 cm, the door is automatically opened using a second servo motor, then closed after a short delay.

The system continuously reads sensor data and updates the actuators in real time, providing a simple and efficient home automation solution.

## Objective

Control window opening based on temperature and light conditions, and automate door opening using distance detection.

## Components

Arduino Uno
DHT22 temperature sensor
LDR (light sensor)
HC-SR04 ultrasonic sensor
Servo motors

## Tools

* Wokwi (simulation)
* Arduino IDE
* C/C++ (Arduino)

## Simulation

View on Wokwi (https://wokwi.com/projects/461276426695575553)

