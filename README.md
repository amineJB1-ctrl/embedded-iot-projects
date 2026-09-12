# Projets systèmes embarqués & IoT

Dix systèmes embarqués conçus, programmés et simulés sur Arduino, ESP32 et
Raspberry Pi Pico — en C/C++ et MicroPython, avec simulation Wokwi.

**Mohamed Amine Jabeur** — Master 1 EEEA, parcours SiVOS
ISTIC, Université de Rennes · [LinkedIn](https://www.linkedin.com/in/aminjabeur3)

## Les projets

| Projet | Carte | Ce que fait le système | Langage |
|---|---|---|---|
| [Levage industriel](industrial-lifting-system-arduino) | Arduino Uno | Commande de montée et descente d'une charge | C/C++ |
| [Robot suiveur de ligne](line-follower-robot-arduino) | Arduino Uno | Suivi d'une ligne par capteurs infrarouges | C/C++ |
| [Commande de moteur](motor-control-system-esp32) | ESP32 | Pilotage de vitesse et de sens de rotation | à compléter |
| [Porte intelligente](smart-door-system-esp32) | ESP32 | Ouverture automatique sur détection | à compléter |
| [Maison intelligente](smart-home-arduino) | Arduino | Éclairage, température et alarme centralisés | C/C++ |
| [Surveillance de plante](smart-plant-monitoring-system-arduino-nano) | Arduino Nano | Mesure d'humidité du sol et arrosage | C/C++ |
| [Surveillance de plante (IoT)](smart-plant-monitoring-system-esp32) | ESP32 | Même système, avec remontée des mesures par Wi-Fi | à compléter |
| [Poubelle intelligente](smart-trash-bin-system-raspberry-pi-pico) | RPi Pico | Ouverture sans contact et mesure du niveau de remplissage | MicroPython |
| [Suiveur solaire](solar-panel-tilt-control-system-arduino) | Arduino | Orientation d'un panneau selon la luminosité | C/C++ |
| [Contrôle de cuve](water-tank-control-system-raspberry-pi-pico) | RPi Pico | Régulation de niveau d'eau par capteurs et pompe | MicroPython |

## Comment lire ce dépôt

Chaque dossier contient :
- `main.ino` ou `main.py` — le programme
- `Diagram.json` — le schéma de câblage, ouvrable dans Wokwi
- `README.md` — le principe de fonctionnement, le matériel et le câblage

## Outils

Arduino IDE · Thonny · Wokwi (simulation) · C/C++ · MicroPython

## Contexte

Projets personnels réalisés en autonomie, hors cursus, pour pratiquer la
conception de systèmes embarqués : acquisition de capteurs, commande
d'actionneurs et contraintes temps réel.
