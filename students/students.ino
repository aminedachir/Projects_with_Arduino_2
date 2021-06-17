void setup() {
  Serial.begin(9600);
  int a [ ] = {12,8,5};
  float moyenn = (a[0]+a[1]+a[2])/3;
  Serial.println(moyenn);
}

void loop() {

}
