
#define ButtonPin=3
#define led1=12


int Statebutton = 0;         

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(ButtonPin, INPUT);
}

void loop() 

{

  Statebutton = digitalRead(ButtonPin);

  if (buttonState == HIGH) 
  {
   digitalWrite(ledPin, HIGH);
  } 
  else 
  {
   digitalWrite(ledPin, LOW);
  }
}
