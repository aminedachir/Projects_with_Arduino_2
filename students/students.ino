int sum;
void setup() {
  Serial.begin(9600);
  int students [ ] = {12,8,5,15,19,4,20,4.5,8.5,13};
  for (int i=0;i<10;i++) {int sum = sum + students[i];}
}

void loop() {

}
