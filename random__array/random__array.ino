int array_ [] = {};
int x;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<=18;i++) {
    x = random(70,100);
    array_[i] == x;
  ;}
  Serial.println(array_[18]);
}
