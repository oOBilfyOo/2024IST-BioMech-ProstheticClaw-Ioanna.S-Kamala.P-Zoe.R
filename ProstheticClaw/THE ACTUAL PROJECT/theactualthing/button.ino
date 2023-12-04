

static unsigned int myButton = 3;

void button() {
  Serial.begin(9600);
  pinMode(myButton, INPUT);
}

void PushButton() {
  Serial.print("myButton:");
  Serial.println(digitalRead(myButton));
}
