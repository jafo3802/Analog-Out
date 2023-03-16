// Motor connections
const int enA = 11;
const int in1 = 8;
const int in2 = 7;

void setup() {
    // Set all the pins as outputs
    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);

    // Turn off the motor to start with
    digitalWrite(enA, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
}

void loop() {
    // Move the motor in forward direction for 2 seconds
    rampUp();
    delay(1000);


    // Move the motor in the backward direction for 2 seconds
    rampDown();
    delay(1000);

  
}

void forward() {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(enA, HIGH);
}

void backward() {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(enA, HIGH);
    
}

void rampUp(){

  for (int pos = 0; pos <= 255; pos += 5){ // goes from 0 to 180 in steps of 1 degree
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW); 
    
    digitalWrite(enA, pos);               
    delay(15);                       
  }

}

void rampDown(){
  for (int pos = 255; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);    
    
    digitalWrite(enA, pos);         
    delay(15);                       
  
}


void stop() {
    digitalWrite(enA, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
}
