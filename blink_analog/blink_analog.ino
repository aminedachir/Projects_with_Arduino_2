int led = 10;
int D = 70;
void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  static  int x = 17;
  analogWrite(led,x);
  delay(D);
  if (x < 255) {x=x+17;}
}
