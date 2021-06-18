void setup()
{
  pinMode(10,OUTPUT);
}
void loop()
{
  int x = analogRead(A0);
  int y = map(x,0,500,0,255);
  int z = constrain(y,0,255);
  analogWrite(10,y);
}
