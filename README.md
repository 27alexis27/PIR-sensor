# PIR-sensor

Systeme d'alarme Arduino avec capteur de mouvement PIR.

## Composants necessaires

- Arduino Uno (ou Nano)
- Capteur PIR (HC-SR501)
- LED rouge
- LED verte
- Buzzer passif
- 2x resistances 220 ohms (pour les LEDs)
- Breadboard + fils

## Cablage

| Composant       | Pin Arduino |
|-----------------|-------------|
| PIR (OUT)       | D2          |
| LED rouge (+)   | D3          |
| LED verte (+)   | D4          |
| Buzzer (+)      | D8          |
| PIR (VCC)       | 5V          |
| PIR (GND)       | GND         |

- Les LEDs ont besoin d'une resistance 220 ohms entre le pin Arduino et la patte longue (+).
- La patte courte (-) des LEDs va au GND.

## Comment ca marche

1. Au demarrage, la **LED verte** s'allume (= aucun mouvement)
2. Quand le capteur PIR detecte un mouvement :
   - La **LED rouge** s'allume
   - Le **buzzer** sonne
   - Le moniteur serie affiche `Mouvement detecte`
3. Quand il n'y a plus de mouvement :
   - La **LED verte** se rallume
   - Le buzzer s'arrete
   - Le moniteur serie affiche `Aucun mouvement`

## Installation

1. Installer l'Arduino IDE
2. Brancher les composants selon le cablage ci-dessus
3. Ouvrir `pir.ino` dans l'Arduino IDE
4. Selectionner la bonne carte (Outils > Type de carte > Arduino Uno)
5. Selectionner le bon port (Outils > Port)
6. Telecharger le code sur l'Arduino (bouton fleche)
7. Ouvrir le moniteur serie (Outils > Moniteur serie) a 9600 baud

## Notes

- Le capteur PIR prend **30 a 60 secondes** pour se calibrer au demarrage. Pendant ce temps les lectures peuvent etre instables.
- Le HC-SR501 a 2 potentiometres : un pour la **sensibilite** et un pour la **duree de detection**. Ajuste-les selon tes besoins.
