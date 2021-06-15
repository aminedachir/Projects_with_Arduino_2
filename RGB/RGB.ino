int R = 9;
int G = 10;
int B = 11;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  static int x = 0;
  int RV = random(0,255);
  int GV = random(0,255);
  int BN = random(0,255);
  if (x<255) {x=x+50,analogWrite(R,x=x+50),
  analogWrite(G,x=x+30),
  analogWrite(B,x=x+10);  
  delay(1000);}
}
