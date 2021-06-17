float students[ ]={12.0,8.0,5.0,15.0,19.0,4.0,20.0,4.5,8.5,13.6};
float sum = 0;
float moyenn = 0;
void setup() {
  Serial.begin(9600);
  for (int i=0;i<10;i++) {sum = sum + students[i];}
  moyenn = sum/10.0;
  Serial.println(moyenn);
}

void loop() {

}
