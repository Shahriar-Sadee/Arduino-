#include <Servo.h>
int servPin = 9, degree;
Servo motorServ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
motorServ.attach(servPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What angle do you wanna move?");
while(Serial.available()==0)
{}
degree = Serial.parseInt();
motorServ.write(degree);
}
