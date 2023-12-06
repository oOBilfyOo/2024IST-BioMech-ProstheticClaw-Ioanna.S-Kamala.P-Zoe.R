
static unsigned int lineFollower = 3;

void linefinder() {
  Serial.begin(9600);
  pinMode(lineFollower, INPUT);
}

void runlinefinder() {
  Serial.print("lineFollower:");
  Serial.println(digitalRead(lineFollower));
}