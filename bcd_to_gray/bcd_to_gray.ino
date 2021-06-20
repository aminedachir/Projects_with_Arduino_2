int number;
int number_ = 00;
void setup() {
  Serial.begin(9600);
  Serial.println("enter a number in bcd :");
  while (Serial.available() == 0) {;}
  int z = Serial.parseInt();
  Serial.println(z);
  int x = bitRead(number,0);
  int y = bitWrite(number_,0,x);
  for (int i=0;i<3;i++){
    int x = bitRead(number,i);
    int l = bitRead(number,i+1);
    if (x == l) {int y=bitWrite(number_,i+1,0);}
    else {int y=bitWrite(number_,i+1,1);}
  ;}
  Serial.println(number_);
  }
void loop() {
}
