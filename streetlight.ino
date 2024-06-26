int ledpin=5;
float ldrpin=2;
float ldrstate=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);

}

void loop() {
 ldrstate=digitalRead(ldrpin);
 if (ldrstate==HIGH)
 {
  digitalWrite(ledpin,HIGH);
 }
 else
 {
  digitalWrite(ledpin,LOW);
 }

}
