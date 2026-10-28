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


void loop() {
  // 1. Encender ROJO
  // Llamamos a nuestra función 'encenderColor'.
  // HIGH en el primero (Rojo) y LOW en los otros dos apaga Verde y Azul.
  encenderColor(HIGH, LOW, LOW); 
  delay(500); // Mantiene el color durante 500 milisegundos (0.5 segundos)

  // 2. Encender VERDE
  // Enviamos LOW al Rojo, HIGH al Verde, y LOW al Azul.
  encenderColor(LOW, HIGH, LOW); 
  delay(500); // Espera 0.5 segundos

  // 3. Encender AZUL
  // Enviamos LOW al Rojo y Verde, y HIGH al Azul.
  encenderColor(LOW, LOW, HIGH); 
  delay(500); // Espera 0.5 segundos
}

// --- SECCIÓN 4: Función Personalizada ---
// Esta función nos ayuda a escribir menos código en el loop.
// Recibe 3 parámetros (r, g, b) que pueden ser HIGH (encendido) o LOW (apagado).
void encenderColor(int r, int g, int b) {
  digitalWrite(Rojo, r);  // Aplica el estado recibido 'r' al pin del Rojo
  digitalWrite(Verde, g); // Aplica el estado recibido 'g' al pin del Verde
  digitalWrite(Azul, b);  // Aplica el estado recibido 'b' al pin del Azul
}
