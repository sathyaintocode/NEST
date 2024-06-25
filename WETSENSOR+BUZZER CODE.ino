int buzzerpin=13;
int wetpin=5;
int wetstate=0;
void setup()
{
  pinMode(buzzerpin, OUTPUT);
  pinMode(wetpin, INPUT);
}

void loop()
{
  wetstate=digitalRead(wetpin);
  if (wetstate==HIGH)
  {
  digitalWrite(buzzerpin, HIGH);
  }
  else
  {
  digitalWrite(buzzerpin, LOW);
  }
}