#include <AFMotor.h>

AF_DCMotor motor(1);

int ledPin = A0;   // 👈 using analog pin instead of 13
int motorSpeed = 35;
int flashDelay = 50;

void setup() {
  pinMode(ledPin, OUTPUT);  // works same as digital pin
  motor.setSpeed(motorSpeed);
  motor.run(FORWARD);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(flashDelay);
  digitalWrite(ledPin, LOW);
  delay(flashDelay);
}