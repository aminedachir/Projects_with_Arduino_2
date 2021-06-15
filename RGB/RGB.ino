int R = 9;
int G = 10;
int B = 11;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  int RV = random(0,255);
  int GV = random(0,255);
  int BN = random(0,255);
  analogWrite(R,RV);
  analogWrite(G,GV);
  analogWrite(B,BV);
  delay(1000);
}
