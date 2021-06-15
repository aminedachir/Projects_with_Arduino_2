void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  for (int i=0;i<10;i++) {
    digitalWrite(10,HIGH),
    delay(200),
    digitalWrite(10,LOW),
    delay(200)
    ;}
  delay(5000);
}
