//4DOF Robotic Arm
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
// Define servo channels
#define servo1 0
#define servo2 1
#define servo3 2
#define servo4 3

int servo1intpos = 330;
int servo2intpos = 150;
int servo3intpos = 300;
int servo4intpos = 410; 


Adafruit_PWMServoDriver forservo = Adafruit_PWMServoDriver();

void setup() {
  Serial.begin(9600);                             // Initializes serial communication
  forservo.begin();                               // Initializes the Adafruit PWM Servo Driver
  forservo.setPWMFreq(60);                        // Set the PWM frequency to 60Hz
  forservo.setPWM(servo1, 0, servo1intpos);       // Set initial position for servo1       
  forservo.setPWM(servo2, 0, servo2intpos);       // Set initial position for servo2
  forservo.setPWM(servo3, 0, servo3intpos);       // Set initial position for servo3
  forservo.setPWM(servo4, 0, servo4intpos);       // Set initial position for servo4
  delay(3000);
}

void loop() {

  for (int S1value = servo1intpos; S1value >= (servo1intpos-80); S1value--) {
    forservo.setPWM(servo1, 0, S1value);
    delay(10);
  }

  for (int S2value = servo2intpos; S2value <= (servo2intpos+230); S2value++) {
    forservo.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S3value = servo3intpos; S3value <= (servo3intpos+80); S3value++) {
    forservo.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S4value = servo4intpos; S4value <= (servo4intpos+100); S4value++) {
    forservo.setPWM(servo4, 0, S4value);
    delay(10);
  }
  delay(2000);
//______________________________________________________________________________________________//
  for (int S4value = (servo4intpos+100); S4value > servo4intpos; S4value--) {
    forservo.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S3value = (servo3intpos+80); S3value > servo3intpos; S3value--) {
    forservo.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = (servo2intpos+230); S2value > servo2intpos; S2value--) {
    forservo.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = (servo1intpos-80); S1value < (servo1intpos+120); S1value++) {
    forservo.setPWM(servo1, 0, S1value);
    delay(10);
  }
//______________________________________________________________________________________________//
  for (int S2value = servo2intpos; S2value <= (servo2intpos+230); S2value++) {
    forservo.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S3value = servo3intpos; S3value <= (servo3intpos+80); S3value++) {
    forservo.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S4value = servo4intpos; S4value <= (servo4intpos+100); S4value++) {
    forservo.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S4value = (servo4intpos+100); S4value > servo4intpos; S4value--) {
    forservo.setPWM(servo4, 0, S4value);
    delay(10);
  }
//______________________________________________________________________________________________//
  for (int S3value = (servo3intpos+80); S3value > servo3intpos; S3value--) {
    forservo.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = (servo2intpos+230); S2value > servo2intpos; S2value--) {
    forservo.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = (servo1intpos+120); S1value > servo1intpos; S1value--) {
    forservo.setPWM(servo1, 0, S1value);
    delay(10);
  }
}
