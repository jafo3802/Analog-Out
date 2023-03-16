#include <Servo.h>

// Motor connections
const int enA = 11;
const int in1 = 8;
const int in2 = 7;



Servo servoA;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  servoA.attach(A0);  // attaches servo connected to Arduino pin 9 to the myservo object
  // Change pin # depending on where your servo is connected
}

void loop() {

  forward(); 
  for (pos = 0; pos <= 120; pos += 1) { // goes from 0 to 180 in steps of 1 degree
    servoA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 120; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
}

void forward() {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(enA, 179);
}
