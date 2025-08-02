int potPin = A2;
int ledPin = 3;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);
  delay(10);
}
