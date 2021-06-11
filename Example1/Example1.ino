int D = 0;
void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  D = analogRead(A2)
  if (D>800){digitalWrite(10,LOW);}
  else {digitalWrite(10,HIGH);}
}
