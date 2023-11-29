bool openGate () {

    for (int i = 0; i <= 255; i++) {
      myServo.write(i);
      delay(15);
      isGateOpen = true;
    }

}

void closeGate () {
  if (isGateOpen) {
    for (int i = 0; i <= 255; i++) {
      myServo.write(255-i);
      delay(15);
      isGateOpen = false;
    }
  }
}

unsigned long readUS () {
  unsigned long rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);
  return rangeInCM;
}
