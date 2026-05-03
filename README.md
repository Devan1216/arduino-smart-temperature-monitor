
# Arduino Smart Temperature Monitor

## Overview
This project is an Arduino-based temperature monitoring system using a DHT11 sensor, a 16x2 LCD display, and LEDs. It reads real-time environmental data, converts temperature to Fahrenheit, and displays the results on an LCD screen. LEDs provide visual indicators for hot, cold, or normal conditions.

---

## Features
- Real-time temperature readings
- Celsius to Fahrenheit conversion
- LCD display output (16x2)
- LED indicators for environment status:
  - 🔴 Hot condition
  - 🟢 Normal condition
  - 🔴 Cold condition
- Simple embedded system logic using Arduino

---

## Components Used
- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- 16x2 LCD Display (parallel)
- Red LED + Green LED
- 220Ω resistors
- Breadboard + jumper wires

---

## Wiring

### DHT11 Sensor
- VCC → 5V  
- DATA → A0  
- GND → GND  

---

### 📺 LCD (16x2, parallel mode)
- RS → 12  
- E → 11  
- D4 → 5  
- D5 → 4  
- D6 → 3  
- D7 → 2  
- VSS → GND  
- VDD → 5V  
- RW → GND  
- VO → GND (or potentiometer for contrast)  

---

### LEDs
- Red LED → Pin 8 (via 220Ω resistor)  
- Green LED → Pin 9 (via 220Ω resistor)  
- Both LED cathodes → GND  

---

## How It Works
1. The DHT11 sensor reads temperature.
2. Arduino processes and converts temperature to Fahrenheit.
3. Data is displayed on the LCD screen.
4. LEDs indicate status based on temperature thresholds.

---

## Future Improvements
- Add buttons to switch display modes
- Add buzzer alerts for extreme temperatures

---

## Project Preview
<img width="1170" height="1566" alt="IMG_2003" src="https://github.com/user-attachments/assets/bda68053-f6df-42b9-b6c4-46c2b4e33193" />
<img width="1170" height="1520" alt="IMG_2001" src="https://github.com/user-attachments/assets/c6fd6568-dcfb-45ff-b75a-251dbb70e7f1" />

---

## Author
Created by Devan Doster
