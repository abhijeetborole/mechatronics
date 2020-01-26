#include<LiquidCrystal.h>
const int rs = 10, en = 9, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
const int trigPin = 13;
const int echoPin = 11;
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
lcd.begin(16,2);
lcd.print("MECHATRONICS");
}

void loop() {
lcd.setCursor(0,1);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration*0.034/2;
lcd.print(distance);
Serial.print(distance);
}
