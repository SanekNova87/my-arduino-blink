int ledPin1 = 13;
int ledPin2 = 12;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Первый светодиод горит, второй гаснет, и наоборот
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(500);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(500);
}