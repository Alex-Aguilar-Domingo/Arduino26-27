//Sensor de proximidad del coche
// PINES
const int trigPin = 9;
const int echoPin = 10;

const int ledVerde = 2;
const int ledAmarillo = 3;
const int ledRojo = 4;

const int buzzer = 5;

// CONFIGURACIÓN
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

// PROGRAMA PRINCIPAL
void loop() {

  // Enviar un pulso al sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Recibir el tiempo que tarda el sonido en volver
  long duracion = pulseIn(echoPin, HIGH);

  // Convertir el tiempo en centímetros
  float distancia = duracion * 0.0343 / 2;

  // Mostrar la distancia en el Monitor Serie
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");


  // MÁS DE 30 CM
  if (distancia > 10) {

    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, LOW);

    noTone(buzzer);
  }


  // ENTRE 15 Y 30 CM
  else if (distancia > 5) {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    digitalWrite(ledRojo, LOW);

    // Pitido de aviso
    tone(buzzer, 800);
    delay(100);
    noTone(buzzer);
    delay(200);
  }


  // ===== MENOS DE 15 CM =====
  else {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, HIGH);

    // Alarma
    tone(buzzer, 1500);
  }

  delay(50);
}
