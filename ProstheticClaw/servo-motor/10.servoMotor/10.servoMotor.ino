/*
  Author: 
  Learning Intention: The students will learn how to connect and control a servo motor.
  Success Criteria:
    1. I understand how to connect the servo motor
    2. I can manually write different degrees of movement to the servo
    3. I can map a potentiometer to a servo and control its movement
    4. I understand that a 180deg servo angle of movement is set by a frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/10.servoMotor/Bootcamp-servoMotor.png
*/

#include <Servo.h> 
#include "Ultrasonic.h"

Servo myServo;
static unsigned int myServoPin = 7;
static unsigned int myUSPin = 6;

Ultrasonic myUSsensor(myUSPin);
bool isGateOpen;

void setup() {
myServo.attach (myServoPin);
myServo.write(0);
isGateOpen = false;
delay(100);
Serial.begin(9600);
Serial.println ("debugging");
Serial.println ("---------------");
}

// The loop function runs over and over again forever
void loop() {



Serial.println ("readUS");
 
  unsigned long rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);

  if (rangeInCM <= 10) {
    myServo.write(180);
  } else if (rangeInCM <= 20) {
    myServo.write(90);
  } else {
    myServo.write(0);
  }

}
