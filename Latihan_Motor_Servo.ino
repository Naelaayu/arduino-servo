#include <Servo.h>

Servo motorServo;
#define pinMotorServo 3
#define pinButton 4

void setup() {
  Serial.begin(9600);
  Serial.println("Program Motor Servo");

  motorServo.attach(pinMotorServo);

  motorServo.write(0);

  pinMode(pinButton, INPUT_PULLUP);
}

void loop() {
  
  if (digitalRead(pinButton) == HIGH) {
  Serial.println("Putar 360 Derajat");
  motorServo.write(360);

  }else {

    Serial.println("Putar 0 Derajat");
    motorServo.write(0);
  }
  delay(2000);

}

// coba commit
// commit ke 3
