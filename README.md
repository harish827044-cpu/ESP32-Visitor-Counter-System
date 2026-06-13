# ESP32 Visitor Counter System

## Overview

An ESP32-based visitor counting system using an IR sensor and buzzer.

The system detects objects passing in front of the IR sensor and increments a visitor count in real-time. A buzzer provides an audible alert whenever a visitor is detected.

This project demonstrates sensor interfacing, event detection logic, and embedded firmware development using ESP32.

---

## Project Files

| File | Description |
|------|-------------|
| `visitor_counter.ino` | ESP32 firmware code for IR sensor detection and visitor counting |
| `README.md` | Project documentation |

## Features

- Real-time visitor counting
- IR sensor-based object detection
- Buzzer alert on visitor detection
- Serial Monitor output
- ESP32 embedded firmware implementation
- Low-cost smart monitoring solution

---

## Hardware Used

- ESP32 Development Board
- IR Obstacle Detection Sensor
- Active Buzzer
- Breadboard
- Jumper Wires

---

## Software Used

- Arduino IDE
- Embedded C/C++

---

## Working Principle

1. IR sensor continuously monitors the detection area.
2. When an object is detected, the sensor output changes state.
3. ESP32 increments the visitor count.
4. Buzzer generates a short alert.
5. Visitor count is displayed on the Serial Monitor.

---

## Circuit Connections

### IR Sensor

| IR Sensor | ESP32 |
|------------|--------|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO 15 |

### Buzzer

| Buzzer | ESP32 |
|---------|--------|
| Positive | GPIO 25 |
| Negative | GND |

---

## Sample Output

Visitor Count = 1

Visitor Count = 2

Visitor Count = 3

Visitor Count = 4

---

## Engineering Concepts Demonstrated

- Sensor Interfacing
- GPIO Programming
- Event Detection Logic
- Embedded Firmware Development
- Real-Time Monitoring

---

## Applications

- Office Visitor Monitoring
- Room Entry Counter
- Smart Building Systems
- Occupancy Monitoring
- Industrial Entry Tracking

---

## Future Improvements

- OLED/LCD Display Integration
- Cloud Data Logging
- Mobile App Dashboard
- WiFi-Based Monitoring
- Bidirectional Visitor Counting

---

## Skills Demonstrated

- ESP32 Development
- Embedded C Programming
- Sensor Integration
- Firmware Debugging
- Hardware Troubleshooting
- Embedded System Design

---

## Author

Harish Kumar V

Electronics and Communication Engineering

Embedded Systems & IoT Enthusiast
