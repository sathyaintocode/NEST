int ledpin=5;
int buttonpin=2;
int buttonstate=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop() {
  buttonstate=digitalRead(buttonpin);
  if (buttonstate==HIGH)
  {
    digitalWrite(ledpin,HIGH);
    
  }
   else
   {
    digitalWrite(ledpin,LOW);
   
  }
  
}
