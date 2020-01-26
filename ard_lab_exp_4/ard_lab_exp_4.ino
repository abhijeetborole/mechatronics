#include<Stepper.h>
const int stepsPerRevolution = 64;
Stepper myStepper(stepsPerRevolution,8,9,10,11);
void setup() {
  // put your setup code here, to run once:
myStepper.setSpeed(5);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);

}
