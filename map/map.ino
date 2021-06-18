void setup()
{
  pinMode(10,OUTPUT);
}
void loop()
{
  int x = analogRead(A0);
  int y = map(x,0,1023,0,255);
  analogWrite(10,y);
}
