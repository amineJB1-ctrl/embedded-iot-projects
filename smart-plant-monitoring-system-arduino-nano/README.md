# Smart Plant Monitoring System

Plant monitoring system using Arduino Uno with DHT22 sensor, LDR, and LCD display to monitor environmental conditions in real time.

## ⚙️ System Description

The system monitors key environmental factors that affect plant growth, including temperature, humidity, and light intensity.
A DHT22 sensor is used to measure temperature and air humidity, while an LDR sensor detects light levels. The collected data is displayed in real time on an LCD screen, allowing the user to easily track plant conditions.

The system also automatically controls the LCD backlight based on light intensity:

* Low light → backlight ON
* High light → backlight OFF

This helps simulate intelligent behavior and improves usability.

## Objective

Monitor environmental conditions (temperature, humidity, and light) to help maintain optimal plant growth and improve plant health.

## Components

* Arduino Uno
* DHT22 temperature and humidity sensor
* LDR (light sensor)
* LCD I2C display

## Tools

* Wokwi (simulation)
* Arduino IDE
* C/C++ (Arduino)

## Simulation

[View on Wokwi](https://wokwi.com/projects/461282556444834817)
