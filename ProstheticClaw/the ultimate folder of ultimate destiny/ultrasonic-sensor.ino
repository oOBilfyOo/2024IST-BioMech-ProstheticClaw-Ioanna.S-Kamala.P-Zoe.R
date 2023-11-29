/*
  Purpose: Basic example of the momentary button switch input module
  Notes: 
    1. Connect to a Digital pin
    2. Normally open momentary switch
    3. Wired for pull up only 
  Author: Ioanna, Kamala, Zoe
  Contact: Ioanna.sotiropoulou@education.nsw.gov.au, Kamala.pradhan@education.nsw.gov.au, Zoe.rath@education.nsw.gov.au 
 Source: https://wiki.seeedstudio.com/Grove-Button/
*/

// This is a different Ultrasonic Library to the one we used in the bootcamp becuase we are using a Seead grove sensor not a generic 4 pin Ultrasonic sensor
#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(5);
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(250);
}
