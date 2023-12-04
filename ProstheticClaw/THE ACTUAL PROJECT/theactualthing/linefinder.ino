
static unsigned int lineFollower = 3;

void LineFinder() {
  Serial.begin(9600);
  pinMode(lineFollower, INPUT);
}

void loop() {
  Serial.print("lineFollower:");
  Serial.println(digitalRead(lineFollower));
}