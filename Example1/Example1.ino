int led = 10;
int lx = 100;
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  if (analogRead(A0)>lx){digitalWrite(led,LOW);}
  else {digitalWrite(led,HIGH);}
}
