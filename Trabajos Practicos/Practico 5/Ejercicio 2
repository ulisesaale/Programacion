void setup() {
  Serial.begin(115200); // Inicializar el puerto serie a 115200 baudios
}

void loop() {
  // Si hay datos disponibles para leer del puerto serie
  if (Serial.available()) {
    char dato = Serial.read(); // Leer un carácter del puerto serie
    Serial.write(dato); // Enviar el carácter de vuelta al puerto serie
  }
}
