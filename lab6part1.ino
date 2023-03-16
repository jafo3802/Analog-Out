#include <Servo.h>

Servo servoA;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  servoA.attach(9);  // attaches servo connected to Arduino pin 9 to the myservo object
  // Change pin # depending on where your servo is connected
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 to 180 in steps of 1 degree
    servoA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
