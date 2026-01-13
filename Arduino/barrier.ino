#include <Servo.h>

// Define pins
const int trigPin = 9;
const int echoPin = 10;
const int ledMovement = 11;     // LED when movement is detected
const int ledNoMovement = 12;   // LED when no movement is detected
Servo myServo;

// Define constants
long duration;
int distance;
int maxDistance = 10; // Adjust as needed

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledMovement, OUTPUT);
  pinMode(ledNoMovement, OUTPUT);

  myServo.attach(6);         // Servo motor pin
  myServo.write(180);         // Start at neutral position

  digitalWrite(ledNoMovement, HIGH);  // Green LED ON at start
  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Receive echo
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // Check if there is movement inside range
  if (distance <= maxDistance && distance > 0) {
    myServo.write(90);                // Move servo
    digitalWrite(ledMovement, HIGH);   // Red LED ON
    digitalWrite(ledNoMovement, LOW);  // Green LED OFF
  } 
  else {
    myServo.write(180);                 // Return servo back
    digitalWrite(ledMovement, LOW);    // Red LED OFF
    digitalWrite(ledNoMovement, HIGH); // Green LED ON
  }

  delay(1000); // Small delay for stability
}
