//Practico 3 - Ejercicio 2 - ESP32
//Encender un LED con un pulsador y cuando se suelta se apaga el LED

void setup() {
  pinMode(4, OUTPUT);   //Se asigna la entrada Led
  pinMode(5, INPUT);    //Se asigna la entrada Pulsador
}

void loop() {
   if  (digitalRead (5) == HIGH) {  //Si el Pulsador esta apretado
       digitalWrite(4, HIGH);       //Encender el LED
   }
  else  
      {digitalWrite(4, LOW);        //Sino esta apretado el pulsador, apagar el LED
  }

}
