// Ejercicio 4: Encender el LED y que parpadee 5 veces con una cadencia de 1 s

const int LED = 5;
const int Pulsador = 4;



void setup(){
 pinMode(LED,OUTPUT); 
 pinMode(Pulsador,INPUT);
 Serial.begin(115200);
 Serial.print("Parpadeo del LED");  
}


void loop() {       
if (digitalRead(Pulsador) == HIGH) {  // Encender el Pulsador
  digitalWrite(LED, HIGH);            // Prende el LED por 1s
  delay(1000);
  digitalWrite(LED, LOW);             // Apaga el LED por 1s
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  }    

}
