// Práctica encender LED con botón pulsador y luego apagar LED con el mismo
//boton pulsador

const int LED = 5;
const int Pulsador = 4;
int valor = 0;              //Se emplea para almacenar el estado del boton
int estado = 0;             //0 LED apagado, mientras que 1 encendido
int valor_viejo = 0;        //Almacena el antiguo valor


void setup(){  
 pinMode(LED,OUTPUT); 
 pinMode(Pulsador,INPUT); 
}


void loop() {       
valor= digitalRead(Pulsador);     //Lee el estado del Boton
if ((valor == HIGH) && (valor_viejo == LOW)){
estado=1-estado;

}
valor_viejo = valor;               //Valor del antiguo estado
if (estado==1){
 digitalWrite(LED, HIGH);          // enciende el LED
}
else{
 digitalWrite(LED,LOW);            // apagar el LED
}
}