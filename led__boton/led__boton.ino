int estado = 0;       //guarda el estado del boton
int estadoAnterior = 0;
int salida = 0;       //0 = led esta apagado, 1 = led encendido

void setup() {
  pinMode(8, INPUT);  // declaramos el boton como entrada
  pinMode(4, OUTPUT); // declaramos el led como salida
}

void loop() {
  estado = digitalRead(8);     //leer el estado del boton
  if ((estado == HIGH) && (estadoAnterior == LOW)) {
    salida = 1 - salida;
    delay(50);
  }
  estadoAnterior = estado;      // guarda el valor actual
  
  if(salida == 1) {            // si estado esta en alto
    digitalWrite(4, HIGH);     // encendemos el led
  }
    else {
      digitalWrite(4, LOW);    //apagamos el led
    }
}
