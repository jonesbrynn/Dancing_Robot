#include <Servo.h>

Servo servoLeft;    // Declare left servo signal
Servo servoRight;   // Declare right servo signal

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  servoLeft.attach(13);   // Attach left signal to pin 13
  servoRight.attach(12);    // Attach right signal to pin 12
}
  void Forward(){
    servoLeft.writeMicroseconds(1300);
    servoRight.writeMicroseconds(1700);
  }

  void Backward(){
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1300);
  }

  void Right(){
    servoLeft.writeMicroseconds(2000);
    servoRight.writeMicroseconds(2000);
  }

  void Left(){
    servoLeft.writeMicroseconds(700);
    servoRight.writeMicroseconds(700);
  }

void loop() {
  // put your main code here, to run repeatedly:
  // 1000 = fully counter-clockwise
  // 1500 = middle
  // 2000 = fully clockwise

  Forward();
  delay(1000);
  Backward();
  delay(1000);
  Forward();
  delay(1000);
  Backward();
  delay(1000);
  Right();
  delay(500);
  Forward();
  delay(500);
  Left();
  delay(500);
  Forward();
  delay(500);
  Right();
  delay(500);
  Forward();
  delay(500);
  Left();
  delay(500);
  Forward();
  delay(500);
  // Dance i guess
  Right();
  delay(2000);
}
