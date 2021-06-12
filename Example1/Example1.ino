
void setup(){
  pinMode(10,OUTPUT);
}
void loop(){
  if (analogRead(A0)>700){digitalWrite(10,LOW);}
  else {digitalWrite(10,HIGH);}
}
