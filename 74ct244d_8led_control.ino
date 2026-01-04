// 8 input lines to 74CT244
const int lines[8] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // Set all lines as OUTPUT
  for (int i = 0; i < 8; i++) {
    pinMode(lines[i], OUTPUT);
    digitalWrite(lines[i], LOW); // LEDs OFF initially
  }
}

void loop() {
  // Turn ON LEDs one by one (right to left)
  for (int i = 0; i < 8; i++) {
    digitalWrite(lines[i], HIGH);
    delay(200);
  }

  // Turn OFF LEDs one by one
  for (int i = 0; i < 8; i++) {
    digitalWrite(lines[i], LOW);
    delay(200);
  }

  // Blink all LEDs together
  for (int i = 0; i < 8; i++) {
    digitalWrite(lines[i], HIGH);
  }
  delay(500);

  for (int i = 0; i < 8; i++) {
    digitalWrite(lines[i], LOW);
  }
  delay(500);
}
