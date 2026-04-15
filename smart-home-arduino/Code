const int ldrsensor = A0;

#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

#include <Servo.h>
Servo servo1 , servo2;

const int trig = 6;
const int echo = 5;

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  servo1.attach(3);
  servo2.attach(9);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float light = (1023 - analogRead(ldrsensor)) * 100.0 / 1023; 
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Error reading DHT");
    return;
  }

  if (temp > 30 && light > 30) {
    servo1.write(180);
  }
  else {
    servo1.write(0);
  }

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long t = pulseIn(echo, HIGH);
  float distance = (t * 0.0343) / 2;

  if (distance < 50 && light > 30) {
    servo2.write(180);
    delay(2000);
    servo2.write(0);
  }
  else {
    servo2.write(0);
  }

  Serial.print("temp=");
  Serial.print(temp);
  Serial.print(" light=");
  Serial.print(light);
  Serial.print(" distance=");
  Serial.println(distance);

  delay(50);
}

