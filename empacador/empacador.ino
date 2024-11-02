#include <LiquidCrystal.h>
#include <Servo.h>
int motor = 9;
int sensor1 = 10;
int sensor2 = 11; 
int sensor3 = 8;
int led1 = 12;
int led2 = 13;      
int  valorIN = 0;
int contenido = 0;
LiquidCrystal lcd(1, 2, 4 ,5 ,6, 7); 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() 
{
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);
pinMode(motor,OUTPUT); 
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
servo1.attach(22);
servo2.attach(24);
servo3.attach(26);
servo4.attach(28);
servo5.attach(30);
lcd.begin(16,2); 
lcd.print("OBJETOS EN LA");
lcd.setCursor(0,1);
lcd.print("CAJA:");
delay(1000);
}

void loop() 
{
if(digitalRead(sensor1) == LOW)
{
digitalWrite(motor,LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
}

if(digitalRead(sensor2) == LOW)
{
digitalWrite(led2,HIGH);
digitalWrite(led1,LOW);
digitalWrite(motor,HIGH);
delay(1000);
servo1.write(120);
servo2.write(105);
delay(1500);
servo3.write(100);
delay(1500);
servo4.write(0);
delay(1000);
servo3.write(160);
delay(1000);
servo2.write(100);
delay(1000);
servo1.write(175);
delay(1000);
servo2.write(115);
delay(1000);
servo3.write(150);
delay(1000);
servo4.write(100);
delay(1000);   

}
if(digitalRead(sensor3) == LOW)
{
servo5.write(150);
 delay(1000);
servo3.write(170);
delay(1000);
servo2.write(100);
delay(1000);
servo1.write(100);
delay(1000);
 
 }
 else
 {
servo5.write(0);
 }
valorIN=digitalRead(sensor3);
if(valorIN!=1)
{
contenido++;
while(digitalRead(sensor3)!=1){
 delay(100);
 }
lcd.setCursor(12,1);
+lcd.print(contenido);
}
}
