

#include <Servo.h> 
#include "Ultrasonic.h"

Servo myServoTwo;
static unsigned int myServoPintwo = 8;
static unsigned int myUSPintwo = 9;

Ultrasonic myUSsensortwo(myUSPintwo);
bool isGateOpentwo;

void servonumbertwo() {
myServo.attach (myServoPin);
myServo.write(0);
isGateOpentwo = false;
delay(100);
Serial.begin(9600);
Serial.println ("debugging");
Serial.println ("---------------");
}

// The loop function runs over and over again forever
void runservotwo() {



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
