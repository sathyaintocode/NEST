int triggerpin=12;
int echopin=13;
int distance;
long duration;;
void setup()
{
  pinMode(triggerpin, OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(triggerpin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(triggerpin, HIGH);
  delayMicroseconds(10); // Wait for 1000 millisecond(s)
  digitalWrite(triggerpin, LOW);
  delayMicroseconds(10);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance in cm: ");
  Serial.println(distance);
  delay(1000);
}