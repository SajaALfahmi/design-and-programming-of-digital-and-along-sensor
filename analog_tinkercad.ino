int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Start serial monitor
}

void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue); // Print the analog value (0–1023)

  digitalWrite(13, HIGH);
  delay(sensorValue);
  digitalWrite(13, LOW);
  delay(sensorValue);
}
