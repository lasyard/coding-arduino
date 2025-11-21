void breath() {
  for (int d = 0; d <= 255; d = d + (1)) {
    analogWrite(10, d);
    delay(5);
  }
  delay(250);
  for (int d = 255; d >= 0; d = d + (-1)) {
    analogWrite(10, d);
    delay(5);
  }
  delay(250);
}

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  breath();
}