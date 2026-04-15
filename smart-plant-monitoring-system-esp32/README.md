# Smart Plant Monitoring System  

Smart plant monitoring system using ESP32 with sensors and OLED display to track environmental conditions in real time.

## ⚙️ System Description  

The system monitors plant conditions using a light sensor and a temperature sensor, then displays the data on an OLED screen.

It includes:
* An LDR sensor to measure light intensity  
* A DHT22 sensor to measure temperature  
* An SSD1306 OLED display to show data  

The system continuously reads sensor values and updates the display:
* Light intensity is converted into percentage (%) and displayed  
* Temperature is measured and shown on the screen  

The OLED alternates between light level and temperature readings, giving real-time feedback about plant conditions.
This helps users understand if the plant is receiving enough light and suitable temperature.

## Objective  

Monitor plant environment (light and temperature) to help maintain optimal growth conditions.

## Components  

* ESP32  
* DHT22 (Temperature Sensor)  
* LDR (Light Sensor)  
* SSD1306 OLED Display  

## Tools  

* Wokwi (simulation)  
* Visual Studio Code  
* MicroPython  

## Simulation  

[View on Wokwi](https://wokwi.com/projects/461377498059063297)
