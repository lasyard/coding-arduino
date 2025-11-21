void blink(int times) {
  for (int i = (1); i <= (times); i = i + (1)) {
    digitalWrite(10, HIGH);
    delay(250);
    digitalWrite(10, LOW);
    delay(250);
  }
}

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  blink(1);
}