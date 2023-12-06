

#include <Servo.h> 
#include "Ultrasonic.h"

Servo myServo;
static unsigned int myServoPin = 7;
static unsigned int myUSPin = 6;

Ultrasonic myUSsensor(myUSPin);
bool isGateOpen;

void servonumberone() {
myServo.attach (myServoPin);
myServo.write(0);
isGateOpen = false;
delay(100);
Serial.begin(9600);
Serial.println ("debugging");
Serial.println ("---------------");
}

// The loop function runs over and over again forever
void runservoone() {



Serial.println ("readUS");
 
  unsigned long rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);

  if (rangeInCM <= 10) {
    myServo.write(-180);
  } else if (rangeInCM <= 20) {
    myServo.write(90);
  } else {
    myServo.write(0);
  }

}
