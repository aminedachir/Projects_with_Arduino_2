void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  static int x = 0;
  analogWrite(10,x);
  delay(500);
  x = x + 10;

}
