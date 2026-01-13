# Smart Barrier System (Arduino)

This is my Robotics Lab final project: a small smart barrier system built using Arduino.

It uses an ultrasonic sensor to detect objects approaching the barrier, a servo motor to lift the gate, and two LEDs for visual signaling.

---

### 🛠 Components

- Arduino Uno
- Ultrasonic sensor (HC-SR04)
- Servo motor
- 2 LEDs (red / green)
- Jumper wires
- Breadboard (optional)

---

### 🔍 How It Works

1. The ultrasonic sensor measures distance using echo time.
2. If an object is detected within the threshold range:
   - The servo opens the barrier
   - Red LED turns ON
   - Green LED turns OFF
3. If no object is detected:
   - The servo closes the barrier
   - Green LED turns ON
   - Red LED turns OFF

---

### 📁 Project Structure
Smart-Barrier-System/
├─ Arduino/
│ └─ barrier.ino
└─ README.md

---

### 🚀 Future Improvements

- Add vehicle counting using Serial Monitor
- Add buzzer or LCD for feedback
- Add RFID or keypad for access control
- Send data to PC via Python
- Add WiFi module (ESP32) for IoT control

---

### 🧩 Skills Demonstrated

- Arduino programming
- Sensor integration (HC-SR04)
- Servo motor control
- Digital signaling with LEDs
- Using Serial Monitor for debugging
- Basic robotics control logic
- Combining electronics + software

---

### 👤 Contributors

1: Rehmatullah Haqnawaz (Team Lead)
2: Umid Huseynov
 
Constructor University — Robotics Lab





