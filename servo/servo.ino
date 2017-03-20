#include <Servo.h>

Servo miServo;

const int pinPot = 0;
const int pinServo = 52;
const int pulsoMin =600;   //puslso en us para girar el servo a 0°
const int pulsoMax = 1500; //pulso en us para girar el servo a 180°


int valor;
int angulo;


void setup() {
  miServo.attach(pinServo, pulsoMin, pulsoMax);   //las entradas analogivas se cofiguran automaticamente

}

void loop() {
  valor = analogRead(pinPot);              //leemos el valor del potenciometro
  angulo = map(valor, 0, 1023, 0,180);     //convertimos el valor a un angulo
  miServo.write(angulo);                   //movemos el servo al angulo deseado
  delay(20);                                //permite al servo llegar al anagulo
}
