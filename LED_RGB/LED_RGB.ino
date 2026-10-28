//código que hace funcionar un mismo led cambiando los colores que emite

const int Rojo = 11;   // Pin 11 = Rojo
const int Verde = 10; // Pin 10 = Verde
const int Azul = 9;  // Pin 11 = Azul

void setup() {
//ponemos los pines como SALIDA
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
}
// Este void pone Rojo, Verde y Azul (r, g, b) como los valores de encender
// Recibe 3 parámetros (r, g, b) que pueden ser HIGH (encendido) o LOW (apagado).
void controlarLed(int r, int g, int b) {
  digitalWrite(Rojo, r);  // Aplica el estado recibido 'r' al pin del Rojo
  digitalWrite(Verde, g); // Aplica el estado recibido 'g' al pin del Verde
  digitalWrite(Azul, b);  // Aplica el estado recibido 'b' al pin del Azul
}

void loop() {
  // 1.Encender ROJO
  controlarLed(HIGH, LOW, LOW); 
  delay(500);
  
  // 2.Encender VERDE
  controlarLed(LOW, HIGH, LOW); 
  delay(500); // Espera 0.5 segundos

  // 3.Encender AZUL
  controlarLed(LOW, LOW, HIGH); 
  delay(500);
}


