// Práctica encender LED con botón pulsador y luego apagar LED con el mismo
//boton pulsador con variable Bool

const int LED = 5;              // Pin donde está conectado el LED
const int Pulsador = 4;         // Pin donde está conectado el pulsador

bool Estadoled = false;                // Estado actual del LED
bool Estadopulsador = false;           // Estado actual del pulsador
bool Estadoanteriorpulsador = false;   // Estado anterior del pulsador

void setup() {
  pinMode(LED, OUTPUT);        // Configurar el pin del LED como salida
  pinMode(Pulsador, INPUT);    // Configurar el pin del pulsador como entrada
}

void loop() {
  Estadopulsador = digitalRead(Pulsador);          // Leer el estado actual del pulsador
  
  if (Estadopulsador != Estadoanteriorpulsador) { // Si el estado actual es diferente al estado anterior
    if (Estadopulsador == HIGH) {
      // Cambiar el estado del LED
      Estadoled = !Estadoled;
      digitalWrite(LED, Estadoled);
    }
    delay(50);         // Pequeño retardo para evitar rebotes del pulsador
  }

  Estadoanteriorpulsador = Estadopulsador;  // Actualizar el estado anterior del pulsador
}
