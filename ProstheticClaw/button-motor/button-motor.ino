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

static unsigned int myButton = 3;

void setup() {
  Serial.begin(9600);
  pinMode(myButton, INPUT);
}

void loop() {
  Serial.print("myButton:");
  Serial.println(digitalRead(myButton));
}
