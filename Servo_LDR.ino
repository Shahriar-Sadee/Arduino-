#include <Servo.h>
int ldr = A0;
int angle;
int serv= 9;
int del = 500;
Servo motoServ;
void setup()
{
  pinMode(ldr, INPUT);
  Serial.begin(9600);
  motoServ.attach(serv);
}
void loop()
{
  angle = -(160/38)*analogRead(ldr)+(160/38)*45;
  Serial.println(analogRead(ldr));
  delay(del);
  motoServ.write(angle);
}
