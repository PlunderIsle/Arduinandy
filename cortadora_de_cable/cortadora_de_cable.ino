/*
----------- www.electroensaimada.com ------------
 ------ Tutoriales Arduino y Raspberry Pi --------
 ------ Proyectos Electrónica y Robótica ---------
 -------------------------------------------------
 ------ Tutorial Motor Paso a Paso ---------------
 */

#define STEPUNO 13
#define DIRUNO 9
#define STEPDOS 12
#define DIRDOS 8
void setup(){

  pinMode(DIRUNO,OUTPUT); //Indicamos que los pines son de salida
  pinMode(STEPUNO,OUTPUT);

  delay(5000);
  digitalWrite(DIRUNO,LOW); //Fijamos una direción


  for(int i=0;i<10;i++){ //Mandamos pulsos al motor en concreto 2000
    digitalWrite(STEPUNO,HIGH);
    delay(1);
    digitalWrite(STEPUNO,LOW);
    delay(1);
  }

  delay(2500); //Esperamos medio segundo
  digitalWrite(DIRUNO,HIGH); //Cambiamos la dirección de giro

  for(int i=0;i<15;i++){ //Hacemos 2000 pasos en sentido contrario
    digitalWrite(STEPUNO,HIGH);
    delay(1);
    digitalWrite(STEPUNO,LOW);
    delay(1);
  }
  
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
}


void loop(){


  //No hacemos nada  para ejecutar el programa de nuevo pulsamos el boton de reset.


}

