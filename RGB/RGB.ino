int RED = 200;
int GREEN = 30;
int BLUE = 80;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  analogWrite(11,RED);
  analogWrite(9,GREEN);
  analogWrite(10,BLUE);
}

void loop() {
}
