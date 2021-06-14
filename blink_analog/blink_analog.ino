int led = 10;
int D = 500;
void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  static int x = 0;
  analogWrite(led,x);
  delay(D);
  x = x + 10;
}
