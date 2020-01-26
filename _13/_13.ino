void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(1000);
}


