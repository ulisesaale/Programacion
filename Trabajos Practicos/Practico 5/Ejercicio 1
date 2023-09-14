// Practica 5 - Ejercicio 1
// Se realiza con un contador las cantidades de veces que se apreta el pulsador diciendo "Hola Mundo!"

const int pulsadorPin = 2;  // Pin donde está conectado el pulsador
int contadorPulsaciones = 0;

void setup() {
  Serial.begin(115200);      // Inicializar el puerto serie a 115200 baudios
  pinMode(pulsadorPin, INPUT_PULLUP); // Configurar el pin del pulsador como entrada con resistencia pull-up
}

void loop() {
  if (digitalRead(pulsadorPin) == LOW) {  // Verificar si se ha presionado el pulsador
    contadorPulsaciones++;  // Incrementar el contador de pulsaciones
    
    Serial.print("¡Hola Mundo! Pulsaciones: "); // Enviar el mensaje por el puerto serie
    Serial.println(contadorPulsaciones);
    
    delay(500);  // Esperar un momento para evitar rebotes del pulsador
  }
}
