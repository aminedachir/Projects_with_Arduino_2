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
    if (x == l) {bitWrite(number_,i+1,0);}
    else {bitWrite(number_,i+1,1);}
    ;}
  Serial.println(number_);
  /*int x = bitRead(number,0);
  Serial.println(x);
  int y = bitWrite(number,0,1);
  Serial.println(y);*/
  }
  
void loop() {
}