int motor1pin1 = 9;
int motor1pin2 = 8;
int motor2pin1 = 6;
int motor2pin2 = 7;

const int sensor1 = 13;
const int sensor2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);

  //(Optional)
  pinMode(10, OUTPUT); 
  pinMode(4, OUTPUT);
}

void loop() {

  bool sensor1State = digitalRead(sensor1);
  bool sensor2State = digitalRead(sensor2);

  if (sensor1State == 1 && sensor2State == 1)
  {
    goFoward();
  }
  else if (sensor1State == 0 && sensor2State == 1)
  {
    goRight();
  }
  else if (sensor1State == 1 && sensor2State == 0)
  {
    goLeft();
  }
  else 
  {
    stop();
  }
}

void goFoward(){
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void goRight(){
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, HIGH);
}

void goLeft(){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void stop(){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, HIGH);
}
