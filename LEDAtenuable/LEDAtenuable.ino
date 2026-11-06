const int pinPotenciometro = A0;
const int pinLED = 9;

int valorPot = 0;                 // Guarda la lectura analógica (0 a 1023)
int brilloLED = 0;                // Guarda el valor convertido para el LED (0 a 255)

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // 1. Lee el voltaje del potenciómetro (devuelve un número entre 0 y 1023)
  valorPot = analogRead(pinPotenciometro);

  // 2. Convierte el rango de entrada (0-1023) al rango de salida PWM (Lo que utiliza y entiende el LED) (0-255)
  brilloLED = map(valorPot, 0, 1023, 0, 255);

  // 3. Envia la señal PWM al LED para variar su intensidad luminosa
  analogWrite(pinLED, brilloLED);

  // Pausa recomendada de 10 milisegundos para estabilizar las lecturas
  delay(10);
}
