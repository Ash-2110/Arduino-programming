int pin1 = 13;  // Connect to the positive terminal of the motor1
int pin2 = 12; // Connect to the negative terminal of the motor1
int pin3 = 8;  // Connect to the positive terminal of the motor2
int pin4 = 7;  // Connect to the negative terminal of the motor2

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

}

void forward(){
  digitalWrite(pin1, 1);
  digitalWrite(pin2, 0);
  digitalWrite(pin3, 1);
  digitalWrite(pin4, 0);
}

void reverse(){
  
  digitalWrite(pin1, 0);
  digitalWrite(pin2, 1);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 1);
}

void right()
{
  digitalWrite(pin1, 1);
  digitalWrite(pin2, 0);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);

}

void left()
{

  digitalWrite(pin1, 0);
  digitalWrite(pin2, 0);
  digitalWrite(pin3, 1);
  digitalWrite(pin4, 0);
}

void stop() {

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}


void loop() {
  forward(); 
  delay(2500);
  stop();
  delay(2500);

  right(); 
  delay(2500);
  stop();
  delay(2500);

  reverse(); 
  delay(2500);
  stop(); 
  delay(2500);

  left(); 
  delay(2500);
  stop();
  delay(2500);

}