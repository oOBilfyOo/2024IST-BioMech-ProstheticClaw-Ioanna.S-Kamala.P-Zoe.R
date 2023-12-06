

#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(5);
void setupussensor ()
{
 Serial.begin(9600);
}
void runussensor()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(250);
}
