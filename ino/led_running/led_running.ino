void running() {
  for (int p = 2; p <= 7; p = p + (1)) {
    pinMode(p, OUTPUT);
    digitalWrite(p, HIGH);
    delay(150);
  }
  delay(150);
  for (int p = 2; p <= 7; p = p + (1)) {
    pinMode(p, OUTPUT);
    digitalWrite(p, LOW);
    delay(150);
  }
  delay(150);
}

void running2() {
  for (int p = 2; p <= 7; p = p + (1)) {
    pinMode(p, OUTPUT);
    digitalWrite(p, HIGH);
    pinMode((2 + (long)((p + 3)) % (long)(6)), OUTPUT);
    digitalWrite((2 + (long)((p + 3)) % (long)(6)), LOW);
    delay(150);
  }
}

void setup() {
}

void loop() {
  for (int i = 1; i <= 3; i = i + (1)) {
    running();
  }
  for (int i = 1; i <= 6; i = i + (1)) {
    running2();
  }
}