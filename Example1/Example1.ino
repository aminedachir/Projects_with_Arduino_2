int led = 10;
int lx = 100;
int c = analogRead(A0);
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  if (c>lx){digitalWrite(led,LOW);}
  else {digitalWrite(led,HIGH);}
}
