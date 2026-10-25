//SEMÁFORO F1

// CONFIGURACIÓN
void setup() {
pinMode (4,OUTPUT); //ROJO 1
pinMode (5,OUTPUT); //ROJO 2
pinMode (6,OUTPUT); //ROJO 3
pinMode (7,OUTPUT); //ROJO 4
pinMode (13,OUTPUT); //VERDE
}

// PROGRAMA PRINCIPAL
void loop() {
digitalWrite (4,HIGH); 
delay (1000);  
digitalWrite (5,HIGH); 
delay (1000); 
digitalWrite (6,HIGH); 
delay (1000); 
digitalWrite (7,HIGH); 
delay (2000); 
digitalWrite (4,LOW); 
digitalWrite (5,LOW); 
digitalWrite (6,LOW); 
digitalWrite (7,LOW); 
digitalWrite (13,HIGH); 
delay (5000);
digitalWrite (13,LOW);
}
