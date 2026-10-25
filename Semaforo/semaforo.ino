//Semáforo

// CONFIGURACIÓN
void setup() {
pinMode (2,OUTPUT); //ROJO
pinMode (4,OUTPUT); //AMARILLO
pinMode (7,OUTPUT); //VERDE

}

// PROGRAMA PRINCIPAL
void loop() {
digitalWrite (7,HIGH);
delay (1000); //PARA EL RETO DE QUE VAYA MÁS RÁPIDO HAY QUE CAMBIAR EL DELAY...
digitalWrite (7,LOW);
digitalWrite (4,HIGH);
delay (500);
digitalWrite (4,LOW);
digitalWrite (2,HIGH);
delay (500);
digitalWrite (2,LOW);
}
