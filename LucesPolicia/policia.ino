//LUCES DE POLICÍA

const int azul = 13; //declaramos que azul = 13 y rojo = 6
const int rojo = 6;


// CONFIGURACIÓN
void setup() {
pinMode (azul,OUTPUT); 
pinMode (rojo,OUTPUT); 

}

// PROGRAMA PRINCIPAL
void loop() {
digitalWrite (azul,HIGH); 
delay (250); 
digitalWrite (azul,LOW);
digitalWrite (rojo,HIGH); 
delay (250);
digitalWrite (rojo,LOW);
}
