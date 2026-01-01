// L298N Motor Test Code
// Arduino Uno + 2 DC Motors
// Siddham Robotics Initiatives

// Motor A pins
int in1 = 2;
int in2 = 3;
int ena = 10;

// Motor B pins
int in3 = 4;
int in4 = 5;
int enb = 11;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  // Set motor speed (0–255)
  analogWrite(ena, 150);
  analogWrite(enb, 150);
}

void loop() {
  // FORWARD
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);

  // STOP
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(1000);

  // REVERSE
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);

  // STOP
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
}
