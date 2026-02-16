int ledPin1 = 13;
int ledPin2 = 12;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

// Функция для сигнала SOS
void blinkSOS() {
  // Буква S (три коротких)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(150);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  
  delay(200);
  
  // Буква O (три длинных)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  
  delay(200);
  
  // Буква S (три коротких)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(150);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  
  delay(3000); // Пауза 3 секунды
}

void loop() {
  // Попеременное мигание
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(500);
  
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  
  // Сигнал SOS
  blinkSOS();
}