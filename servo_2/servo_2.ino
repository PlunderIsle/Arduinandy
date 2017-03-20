/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>
#define STEPUNO 13
#define DIRUNO 9
#define STEPDOS 12
#define DIRDOS 8

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(11);  // attaches the servo on pin 9 to the servo object


  pinMode(DIRUNO,OUTPUT); //Indicamos que los pines son de salida
  pinMode(STEPUNO,OUTPUT);

  delay(5000);
  digitalWrite(DIRUNO,LOW); //Fijamos una direción
  
  myservo.write(0);
  delay(2500);

  for(int i=0;i<10;i++){ //Mandamos pulsos al motor en concreto 2000
    digitalWrite(STEPUNO,HIGH);
    delay(1);
    digitalWrite(STEPUNO,LOW);
    delay(1);
  }
  delay(2500);
  myservo.write(60);
  delay(2500);
   
  delay(2500); //Esperamos medio segundo
  digitalWrite(DIRUNO,HIGH); //Cambiamos la dirección de giro

  for(int i=0;i<15;i++){ //Hacemos 2000 pasos en sentido contrario
    digitalWrite(STEPUNO,HIGH);
    delay(1);
    digitalWrite(STEPUNO,LOW);
    delay(1);
  }
  delay(2500);
  myservo.write(0);
  delay(2500);
  
  delay(2500);
  digitalWrite(DIRUNO,LOW); //Fijamos una direción
  digitalWrite(DIRDOS,LOW);

  for(int i=0;i<600;i++){ //Mandamos pulsos al motor en concreto 2000
    digitalWrite(STEPDOS,HIGH);
    digitalWrite(STEPUNO,HIGH);
    delay(1);
    digitalWrite(STEPDOS,LOW);
    digitalWrite(STEPUNO,LOW);
    delay(1);
  }
  
  
  for(int i=0;i<35;i++){ //Mandamos pulsos al motor en concreto 2000
    digitalWrite(STEPDOS,HIGH);
    delay(1);
    digitalWrite(STEPDOS,LOW);
    delay(1);
  }
  delay(2500);
  myservo.write(120);
  delay(2500);
}  
void loop() {
}
