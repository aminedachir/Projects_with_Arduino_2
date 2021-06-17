int x = 8;
void setup() {
  Serial.begin(9600);
  Serial.println(x,BIN);
  bitWrite(x,0,1);
  Serial.println(x,BIN);
  }
void loop() {
  }
