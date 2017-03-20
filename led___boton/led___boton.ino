int estado = 0;

void setup() {
  pinMode(8, INPUT);  // declaramos el boton como entrada
  pinMode(4, OUTPUT); // declaramos el led como salida
}

void loop() {
  estado = digitalRead(8);

  if(estado == HIGH)  (
    digitalWrite(4, HIGH);
    )
    else (
      digitalWrite(4, LOW)
      )
}
