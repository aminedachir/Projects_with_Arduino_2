int led = 10;
int lx = 170;
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  if (analogRead(A0)>lx){digitalWrite(led,LOW);}
  else {digitalWrite(led,HIGH);}
}
