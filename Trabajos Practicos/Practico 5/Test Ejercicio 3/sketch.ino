#include <Adafruit_Sensor.h>
#include <DHT.h>
#define DHTPIN 2 // Pin del sensor DHT conectado a Arduino
#define DHTTYPE DHT22 // Tipo de sensor DHT (DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Leer la temperatura desde el sensor
  float temperatura = dht.readTemperature();

  // Verificar si la lectura es válida
  if (!isnan(temperatura)) {
    // Enviar la temperatura al puerto serie
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println("°C");
  }

  // Esperar un breve período antes de tomar otra lectura
  delay(2000); // Puedes ajustar este valor según sea necesario
}

