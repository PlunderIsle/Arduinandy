//parpadeo del LED

void setup() {
  pinMode(13,OUTPUT); // declaramos el pin 13 como salida
  
}

void loop() {
 digitalWrite(13,HIGH); // encendemos el led
 delay(100);           // ahora esperamos 1 segundo
 digitalWrite(13,LOW);  // apagamos el led 
 delay(100);

}
