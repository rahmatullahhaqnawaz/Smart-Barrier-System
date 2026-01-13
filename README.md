\# Smart Barrier System (Arduino)



This is my Robotics Lab final project: a small smart barrier system built using Arduino.



It uses an ultrasonic sensor to detect objects approaching the barrier, a servo motor to lift the gate, and two LEDs for visual signaling.



---



\## 🛠 Components



\- Arduino Uno

\- Ultrasonic sensor (HC-SR04)

\- Servo motor

\- 2 LEDs (red/green)

\- Jumper wires

\- Breadboard (optional)



---



\## 🔍 How It Works



1\. The ultrasonic sensor measures the distance.

2\. If an object is detected within a threshold range:

&nbsp;  - The servo opens the barrier

&nbsp;  - Red LED turns ON

&nbsp;  - Green LED turns OFF

3\. If nothing is detected:

&nbsp;  - The servo closes the barrier

&nbsp;  - Green LED turns ON

&nbsp;  - Red LED turns OFF



---



\## 📁 Project Structure



```text

Smart-Barrier-System/

&nbsp;├─ Arduino/

&nbsp;│   └─ barrier.ino

&nbsp;└─ README.md



