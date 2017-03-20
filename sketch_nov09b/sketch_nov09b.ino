#define VELOCIDAD 1000
int steps = 9;
int direccion = 13;
int reset = 10;
int pasos = 601.5;

void setup() {                

  pinMode(steps, OUTPUT); 
  pinMode(reset, OUTPUT);     
  pinMode(pasos, OUTPUT);     
  
}

void loop() {
 digitalWrite(reset, LOW);
 delay(100); 
 digitalWrite(reset, HIGH);
 digitalWrite(direccion, HIGH);
         

   for (int i = 0; i<pasos; i++)
   {
     digitalWrite(steps, HIGH);
     digitalWrite(steps, LOW);
     delayMicroseconds(VELOCIDAD);
   }
 
 digitalWrite(reset, LOW);
 delay(100); 
 digitalWrite(reset, HIGH);
 digitalWrite(direccion, LOW);
 
    for (int i = 0; i<pasos; i++)
   {
     digitalWrite(steps, LOW);
     digitalWrite(steps, HIGH);
     delayMicroseconds(VELOCIDAD);
   }
}
