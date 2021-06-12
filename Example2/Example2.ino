
void setup()
{
  pinMode(13,OUTPUT);
}

void loop()
{
  int x = analogRead(A0);
  digitalWrite(13,HIGH);
  delay(x);
  digitalWrite(13,LOW);
  delay(x);
}
}
