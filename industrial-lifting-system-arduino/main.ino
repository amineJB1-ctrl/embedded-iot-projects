int trig = 9;
int echo = 8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  for (int x = 2; x <= 13; x++) {
    if (x == 8) continue;
    pinMode(x, OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  
  long t = pulseIn(echo, HIGH);

  float distance = t * 0.0343 / 2;
  int n = map(distance, 0, 300, 2, 13);

  n = constrain(n, 2, 13);

  for (int x = 2; x <= n; x++) {
    if (x == 8) continue;
    digitalWrite(x, HIGH);
  }

  for (int x = n + 1; x <= 13; x++) {
    if (x == 8) continue;
    digitalWrite(x, LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(200);
}
