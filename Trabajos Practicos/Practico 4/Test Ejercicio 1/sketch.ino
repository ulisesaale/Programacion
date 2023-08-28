//Hacer que parpadear el LED en intervalos de 1 a 5 segundos 
//según la posición en la que esté el potenciómetro

const int sensorPin = 2; // Pin del sensor analógico conectado
const int ledPin = 4;    // Pin del LED conectado

void setup() {
pinMode(ledPin, OUTPUT);     // Establecer el pin del LED como salida
pinMode(sensorPin, INPUT);   // Establecer el pin del potenciometro
Serial.begin(115200);    // Iniciar la comunicación serial para depuración
Serial.println("Led encendido");
}

void loop() {
  int potencia = analogRead(sensorPin);
  int interval;

  if (potencia <= 500) {
    interval = 1000;
    Serial.println("Se enciende el LED cada 1 segundo");
  } else if(potencia <= 2500) {
    interval = 3000;
    Serial.println("Se enciende el LED cada 3 segundos");
  } else {
    interval = 5000;
    Serial.println("Se enciende el LED cada 5 segundos");
      }

  digitalWrite(ledPin, HIGH);   // Encender el LED
  delay(interval);              // Esperar el intervalo determinado
  digitalWrite(ledPin, LOW);    // Apagar el LED
  delay(interval);              // Esperar otro intervalo
}