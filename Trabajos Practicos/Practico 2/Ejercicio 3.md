# Ejercicio 3

## Las salidas digitales de Arduino pueden suministrar una corriente limitada, por lo que es importante conocer las especificaciones de cada componente para determinar si es seguro encenderlos directamente desde las salidas del Arduino o si se requiere el uso de circuitos de control adicionales.

## a. Diodo LED:

- Corriente: Varía según el LED, típicamente de 5 a 20 mA.
- Tensión: Generalmente alrededor de 2 a 3.3 V.
- ¿Puede ser encendido por Arduino?: 
- Sí, las salidas digitales de Arduino pueden encender un LED mediante una resistencia limitadora de corriente adecuada.

## b. Buzzer:

- Corriente: Generalmente unos pocos mA (varía según el buzzer).
- Tensión: Puede variar, pero a menudo se pueden encender con 5V.
- ¿Puede ser encendido por Arduino?: 
- Sí, pero puede requerir una resistencia limitadora si el buzzer no tiene una interna.

## c. Relé:

- Corriente: Varía según el relé, pero puede ser varios cientos de mA.
- Tensión: Varía, pero comúnmente se utilizan relés de 5V o 12V.
- ¿Puede ser encendido por Arduino?: 
- Sí, pero generalmente se requiere un circuito de control adicional (transistor) debido a la corriente requerida.

## d. Motor de CC:

- Corriente: Varía según el motor, puede ser desde unos pocos cientos de mA hasta varios A.
- Tensión: Depende del motor, comúnmente se utilizan motores de 3V, 6V, 12V, etc.
- ¿Puede ser encendido por Arduino?:
- Sí, pero generalmente se necesita un circuito de control adicional como un transistor o puente H debido a la corriente requerida.

## e. Motor de CA:

- Corriente: Suele ser alta y puede requerir controladores específicos.
- Tensión: Generalmente se utilizan voltajes de línea de CA (por ejemplo, 110V o 220V), por lo que se requiere un controlador adecuado.
- ¿Puede ser encendido por Arduino?:
- No es seguro ni práctico encender un motor de CA directamente desde las salidas de Arduino debido a la alta corriente y la tensión involucrada. Se requieren controladores de motor específicos.

## f. Servomotor de aeromodelismo:

- Corriente: Depende del servomotor, pero generalmente unos pocos cientos de mA.
- Tensión: Comúnmente se utilizan servomotores de 4.8V o 6V.
- ¿Puede ser encendido por Arduino?:
- Sí, los servomotores se pueden controlar mediante las salidas de Arduino, pero a menudo se necesita una fuente de alimentación externa para proporcionar suficiente corriente.

## g. Motor Paso a Paso:

- Corriente: Varía según el motor paso a paso, puede ser desde unos pocos cientos de mA hasta varios A.
- Tensión: Puede variar, pero a menudo se utilizan motores de 5V o 12V.
- ¿Puede ser encendido por Arduino?:
- Sí, pero generalmente se necesita un controlador específico (como un controlador de motor paso a paso) debido a la naturaleza de control del motor.

## h. Lámpara Incandescente:

- Corriente: Depende de la potencia de la lámpara, puede ser alta.
- Tensión: Depende de la potencia de la lámpara, generalmente 110V o 220V.
- ¿Puede ser encendido por Arduino?:
- No es seguro ni práctico encender una lámpara incandescente directamente desde las salidas de Arduino debido a la alta corriente y tensión involucradas. Se requieren dispositivos de conmutación adecuados.

## i. Lámpara LED:

- Corriente: Depende de la lámpara LED, pero suele ser baja, en el rango de unos pocos cientos de mA.
- Tensión: Depende de la lámpara LED, pero a menudo se utilizan lámparas de 5V o 12V.
- ¿Puede ser encendida por Arduino?:
- Sí, siempre y cuando se utilice una resistencia limitadora de corriente adecuada.

## j. Fluorescente:

- Corriente: Varía según el tipo y tamaño del tubo fluorescente, pero generalmente se requiere una cantidad significativa de corriente.
- Tensión: Puede variar, pero generalmente se requiere una tensión alta (cientos de voltios) para encender el tubo.
- ¿Puede ser encendido por Arduino?:
- No es seguro ni práctico encender un tubo fluorescente directamente desde las salidas de Arduino debido a la alta corriente y tensión involucradas. Se requieren dispositivos de conmutación adecuados.
