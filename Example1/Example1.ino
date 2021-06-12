led = 10;
lx = 700
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  if (analogRead(A0)>lx){digitalWrite(led,LOW);}
  else {digitalWrite(led,HIGH);}
}
