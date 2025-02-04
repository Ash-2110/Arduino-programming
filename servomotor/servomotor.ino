#include <Servo.h>

Servo myServo;  // Create a Servo object

void setup() {
  myServo.attach(A1);  // Attach the servo on pin 9 to the servo object
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);  // Set the servo position
    delay(15);             // Wait for the servo to reach the position
  }
  
  // Sweep back from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);  // Set the servo position
    delay(15);             // Wait for the servo to reach the position
  }
}