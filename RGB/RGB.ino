int RED = 0;
int GREEN = 0;
int BLUE = 0;
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
