const int ledPin = 2; // Pin al que está conectado el LED

void setup() {
  Serial.begin(115200); // Inicializar el puerto serie a 115200 baudios
  pinMode(ledPin, OUTPUT); // Configurar el pin del LED como salida
  Serial.println("Escribe 'ON' para encender el LED y 'OFF' para apagarlo.");
}

void loop() {
  if (Serial.available() > 0) {
    String comando = Serial.readStringUntil('\n'); // Leer el comando hasta encontrar un salto de línea

    if (comando == "ON") {
      digitalWrite(ledPin, HIGH); // Encender el LED
      Serial.println("LED encendido.");
    } else if (comando == "OFF") {
      digitalWrite(ledPin, LOW); // Apagar el LED
      Serial.println("LED apagado.");
    } else {
      Serial.println("Comando no reconocido. Escribe 'ON' o 'OFF'.");
    }
  }
}
