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
    forward();
    delay(2000);

    // Stop for 1 second
    stop();
    delay(1000);

    // Move the motor in the backward direction for 2 seconds
    backward();
    delay(2000);

    // Stop for 1 second
    stop();
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


void stop() {
    digitalWrite(enA, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
}
