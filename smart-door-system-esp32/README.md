# Smart Door System  

Smart door system using ESP32, PIR motion sensor, and stepper motor (A4988 driver) for automatic opening and closing.

## ⚙️ System Description  

The system controls a door using motion detection and a stepper motor.

It includes:
* A PIR sensor to detect human presence  
* A stepper motor controlled via A4988 driver  
* Microstepping control (MS1, MS2, MS3)  
* Direction and step control pins  

The system works as follows:
* When motion is detected → the door opens (motor rotates forward)  
* After a delay → the door closes (motor rotates backward)  
* When no motion is detected → the system stays idle  

This allows automatic and contactless door operation.

## Objective  

Automate door opening and closing using motion detection to improve convenience and hygiene.

## Components  

* ESP32  
* PIR Sensor (HC-SR501 / HC-SR06)  
* Stepper Motor  
* A4988 Driver   

## Tools  

* Wokwi (simulation)  
* Visual Studio Code  
* MicroPython  
 
## 🔬 Simulation  

[View on Wokwi](https://wokwi.com/projects/461378992688111617)
