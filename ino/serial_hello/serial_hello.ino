void blink(int times) {
  for (int i = (1); i <= (times); i = i + (1)) {
    digitalWrite(13, HIGH);
    delay(250);
    digitalWrite(13, LOW);
    delay(250);
  }
}

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char ch = Serial.read();
  if (ch == '1') {
    blink(1);
    Serial.println("Hello, world!");

  } else if (ch == '2') {
    blink(2);
    Serial.println("I am Arduino.");
  }
}