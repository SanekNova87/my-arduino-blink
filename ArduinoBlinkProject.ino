int ledPin1 = 13;
int ledPin2 = 12;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void blinkSOS() {
  // Три коротких (точка)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(150);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  delay(200); // Пауза между буквами
  // Три длинных (тире)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  delay(200);
  // Три коротких (точка)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(150);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  delay(2000); // Пауза перед повтором
}

void loop() {
  // Старый режим: попеременное мигание
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(500);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  
  // Новый режим: вызов SOS
  blinkSOS();
}