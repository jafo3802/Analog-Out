#include <Servo.h>

Servo servoA;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position
int pot = A0;

void setup() {
  servoA.attach(9);  // attaches servo connected to Arduino pin 9 to the myservo object
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  int turn = analogRead(pot);
  turn = map(turn, 0, 1023, 0, 180);
  delay(50);
  servoA.write(turn);              // tell servo to go to position in variable 'pos'
   
}
