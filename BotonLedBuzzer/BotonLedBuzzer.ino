const int pinBoton = 2;
const int pinBuzzer = 8; 
const int pinLED = 13;

void setup() {
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLED, OUTPUT);
  pinMode(pinBoton, INPUT_PULLUP);  // Configura el pin del botón como entrada Pull-Up
}

void loop() {
  // Leemos el estado del pulsador
  int estadoBoton = digitalRead(pinBoton);

  // Al usar INPUT_PULLUP, LOW significa que el botón está presionado
  if (estadoBoton == HIGH) {
    digitalWrite(pinLED, HIGH); // Enciende el LED
        tone(pinBuzzer, 1000); // Enciende el buzzer
  } else {
    digitalWrite(pinLED, LOW); //Apaga el LED
        noTone(pinBuzzer);  // Apaga el buzzer
  }
}
