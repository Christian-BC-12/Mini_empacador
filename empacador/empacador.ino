//https://youtube.com/shorts/GqWufEbYm3c proyecto funcionando 
 #include <Servo.h>
int sensor2=7;
int sensor=6;
int led1 = 8;
int led2 = 9;
int sol1 = 10;
int sol2 = 1;
int boton = 11;
int led3 = 13;
int baseg = 12;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  pinMode(sensor,INPUT);
  pinMode(sensor2,INPUT);
  pinMode(boton,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(sol1,OUTPUT);
  pinMode(sol2,OUTPUT);
  pinMode(baseg,OUTPUT);

}
  
void loop() 
{
if(digitalRead(boton) == HIGH)
{  
digitalWrite(sol2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(sol1,LOW);
delay(100);
}
else
{    
digitalWrite(led3,LOW);
digitalWrite(sol1,HIGH);
delay(100);
}
if(digitalRead(sensor) == LOW)         
{  
digitalWrite(sol1,HIGH);
digitalWrite(sol2,LOW);
digitalWrite(led2,LOW);
delay(100);
digitalWrite(led1,HIGH);
delay(1000);
servo2.write(100);
delay(1500);
servo3.write(90);
delay(1500);
servo4.write(0);
delay(1000);
servo3.write(140);
delay(1000);
servo2.write(60);
delay(1000);
servo1.write(175);
delay(1000);
servo2.write(100);
delay(1000);
servo3.write(110);
delay(1000);
servo4.write(90);
delay(1000);
}
if(digitalRead(sensor2) == LOW)
{
servo3.write(140);
delay(1000);
servo2.write(60);
delay(1000);
servo1.write(100);
delay(1000);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(baseg,HIGH);
delay(200);
digitalWrite(baseg,LOW);
}
else
{
digitalWrite(baseg,LOW);
}
}
