int buttonState = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600); 
}

void loop() {
  buttonState = digitalRead(2);

  Serial.println(buttonState); 

  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  delay(10);
}
