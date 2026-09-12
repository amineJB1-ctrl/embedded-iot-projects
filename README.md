# Embedded Systems & IoT Projects

Ten embedded systems designed, programmed and simulated on Arduino, ESP32 and
Raspberry Pi Pico — in C/C++ and MicroPython, each with a runnable Wokwi simulation.

**Mohamed Amine Jabeur** — MSc student in Electronics, Electrical Engineering and
Automation (EEEA), SiVOS track — ISTIC, University of Rennes, France
[LinkedIn](https://www.linkedin.com/in/aminjabeur3)

---

## Projects

| Project | Board | What it does | Language |
|---|---|---|---|
| [Industrial lifting system](industrial-lifting-system-arduino) | Arduino Uno | Controlled raising and lowering of a load | C/C++ |
| [Line-following robot](line-follower-robot-arduino) | Arduino Uno | Path tracking with infrared sensors | C/C++ |
| [Motor control system](motor-control-system-esp32) | ESP32 | Three motors driven by push buttons, with automatic stop above a temperature threshold — NTC sensors, relays, status LEDs | MicroPython |
| [Smart door system](smart-door-system-esp32) | ESP32 | Contactless opening on motion detection (PIR), stepper motor driven by an A4988 | MicroPython |
| [Smart home system](smart-home-arduino) | Arduino | Lighting, temperature and alarm handled from one controller | C/C++ |
| [Plant monitoring](smart-plant-monitoring-system-arduino-nano) | Arduino Nano | Soil moisture measurement and automatic watering | C/C++ |
| [Plant monitoring with OLED](smart-plant-monitoring-system-esp32) | ESP32 | Light level (LDR) and temperature (DHT22) shown in real time on an SSD1306 OLED display | MicroPython |
| [Smart trash bin](smart-trash-bin-system-raspberry-pi-pico) | RPi Pico | Contactless lid opening and fill-level monitoring | MicroPython |
| [Solar panel tilt control](solar-panel-tilt-control-system-arduino) | Arduino | Panel orientation driven by measured light intensity | C/C++ |
| [Water tank control](water-tank-control-system-raspberry-pi-pico) | RPi Pico | Water level regulation with sensors and pump control | MicroPython |

---

## Repository layout

Every project folder contains:

| File | Purpose |
|---|---|
| `main.ino` / `main.py` | the program |
| `Diagram.json` | the wiring diagram — open it in Wokwi to run the circuit |
| `circuit.png` | screenshot of the assembled circuit |
| `README.md` | how it works, components, wiring and simulation link |

## Running a simulation

No hardware needed. Open the Wokwi link in a project's README, or import its
`Diagram.json` at [wokwi.com](https://wokwi.com) — the circuit runs in the browser.

## Tools

Arduino IDE · Thonny · Visual Studio Code · Wokwi · C/C++ · MicroPython

## Context

Self-directed projects built outside coursework to practise embedded design:
sensor acquisition, actuator control, state machines and real-time constraints.
