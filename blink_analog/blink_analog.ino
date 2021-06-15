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
  else {x=0,delay(1000);analogWrite(led,x);delay(1000);}
}
