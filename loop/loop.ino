void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  int i = 0;
  while (i<10) {
    digitalWrite(10,HIGH),
    delay(200),
    digitalWrite(10,LOW),
    delay(200),
    i++
    ;}
  delay(5000);
}
