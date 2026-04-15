#include <Servo.h>

Servo servo;

const int segA=2;
const int segB=3;
const int segC=4;
const int segD=5;
const int segE=6;
const int segF=7;
const int segG=8;

const int buttonInc=12;
const int buttonDec=13;

int buttonIncstate;
int buttonDecstate;
int compteur=0;

void setup() {
  // put your setup code here, to run once:
  for(int x=2; x<=8 ; x++){
    pinMode(x, OUTPUT); 
  }
  pinMode(buttonInc, INPUT);
  pinMode(buttonDec, INPUT);
  servo.attach(10);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonIncstate=digitalRead(buttonInc);
  buttonDecstate=digitalRead(buttonDec);

  if(buttonIncstate==1 && compteur<5){
    compteur++;
    delay(300);
  }

  if(buttonDecstate==1 && compteur>0){
    compteur--;
    delay(300);
  }

  switch(compteur){
    case 0: zero(); break;
    case 1: un(); break;
    case 2: deux(); break;
    case 3: troix(); break;
    case 4: quatre(); break;
    case 5: cinq(); break;
    default: off(); break;
  }

  Serial.println(compteur);  
}

void zero(){
  servo.write(0);
  for(int i=2 ; i<=7 ; i++){
    digitalWrite(i, HIGH);
  }
  digitalWrite(segG, LOW);
}

void un(){
  servo.write(10);
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  for(int i=5 ; i<=8 ; i++){
    digitalWrite(i, LOW);
  }
}

void deux(){
  servo.write(20);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segF, LOW);  
}

void troix(){
  servo.write(30);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  for(int i=2 ; i<=5 ; i++){
    digitalWrite(i, HIGH);
  }
}

void quatre(){
  servo.write(40);
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
}

void cinq(){
  servo.write(50);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
}

void off(){
  for(int i=2 ; i<=8 ; i++){
    digitalWrite(i, LOW);
  }
}
