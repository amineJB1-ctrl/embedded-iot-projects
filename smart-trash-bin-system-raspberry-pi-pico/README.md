#  Smart Trash Bin System  

Smart trash bin system using ultrasonic sensors and a servo motor for automatic lid control.

## System Description  

The system automatically opens and closes a trash bin using distance detection.

It includes:

* Two ultrasonic sensors:
  - Sensor 1: detects human presence  
  - Sensor 2: measures trash level inside the bin  
* A servo motor to control the lid  
* Two LEDs:
  - Green LED → bin ready/open  
  - Red LED → bin closed/full  

The system works as follows:

* When a person is detected (distance < 40 cm)  
* AND the bin is not full (level between 20 and 50 cm)  

→ The lid opens automatically using the servo motor  

After a delay:
→ The lid closes automatically  

If conditions are not met:
→ The bin stays closed and red LED is ON  

## Objective  

Create a hygienic and automated trash system that opens without contact and monitors bin capacity.

## Components  

* Raspberry Pi Pico   
* Ultrasonic Sensors (2x HC-SR04)  
* Servo Motor  
* LEDs (Red & Green)   

## Tools  

* Wokwi (simulation)  
* Visual Studio Code  
* MicroPython  

## 🔬 Simulation  

[View on Wokwi](https://wokwi.com/projects/461384939553121281)
