int number,number_=00,x,y,z,l;
void setup() {
  Serial.begin(9600);
  Serial.println("enter a number in bcd :");
  while (Serial.available() == 0) {;}
  z=Serial.parseInt();
  Serial.println(z);
  x=bitRead(number,0);
  y=bitWrite(number_,0,x);
  for (int i=0;i<3;i++){
    x=bitRead(number,i);
    l=bitRead(number,i+1);
    if (x==l) {y=bitWrite(number_,i+1,0);}
    else {y=bitWrite(number_,i+1,1);}
  ;}
  Serial.println(number_);
  }
void loop() {
}
