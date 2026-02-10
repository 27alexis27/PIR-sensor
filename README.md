# PIR-sensor

Arduino alarm system with PIR motion sensor.

## Required components

- Arduino Uno (or Nano)
- PIR sensor (HC-SR501)
- Red LED
- Green LED
- Passive buzzer
- 2x 220 ohm resistors (for the LEDs)
- Breadboard + jumper wires

## Wiring

| Component       | Arduino Pin |
|-----------------|-------------|
| PIR (OUT)       | D2          |
| Red LED (+)     | D3          |
| Green LED (+)   | D4          |
| Buzzer (+)      | D8          |
| PIR (VCC)       | 5V          |
| PIR (GND)       | GND         |

- LEDs need a 220 ohm resistor between the Arduino pin and the long leg (+).
- The short leg (-) of the LEDs goes to GND.

## How it works

1. On startup, the **green LED** turns on (= no motion)
2. When the PIR sensor detects motion:
   - The **red LED** turns on
   - The **buzzer** sounds
   - The serial monitor prints `Motion detected`
3. When there is no more motion:
   - The **green LED** turns back on
   - The buzzer stops
   - The serial monitor prints `No motion`

## Setup

1. Install the Arduino IDE
2. Wire the components as shown above
3. Open `pir.ino` in the Arduino IDE
4. Select the correct board (Tools > Board > Arduino Uno)
5. Select the correct port (Tools > Port)
6. Upload the code to the Arduino (arrow button)
7. Open the serial monitor (Tools > Serial Monitor) at 9600 baud

## Notes

- The PIR sensor takes **30 to 60 seconds** to calibrate on startup. During this time readings may be unstable.
- The HC-SR501 has 2 potentiometers: one for **sensitivity** and one for **detection duration**. Adjust them to your needs.
