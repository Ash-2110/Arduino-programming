int a = 100;  
int ledPins[] = {2,3,4,5,6,7,8,9};                 
int pc = 8;  
int thisPins = b;

void setup() 
{
  pinMode(A0,INPUT)

  for (int b = 0; b < pc; b++) 
  {
    pinMode(ledPins[b],OUTPUT);
  }
}

void loop() 
{

  int pot=AnalogRead(A0);
  pot=analogRead(pot,0,1,100,200)
 
  for (int b = 0; b < pc; b++) 
  {
    
    digitalWrite(ledPins[b], HIGH);
    delay(a);
    digitalWrite(ledPins[b], LOW);
  }

  for (int b = pc - 1; b >= 0; b--) 
  {
   
    digitalWrite(ledPins[b], HIGH);
    delay(a);
    digitalWrite(ledPins[b], LOW);
  }
}