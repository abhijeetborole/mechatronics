  const int trigpin = 9;
  const int echopin = 10;
  long distance;
  long duration;
  
void setup() {
 pinMode(trigpin, OUTPUT);
 pinMode(echopin, INPUT);
 Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration*0.034*0.5;
  Serial.print("Distance :");
  Serial.print(distance);
}


