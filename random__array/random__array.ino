int array_[18],max_=0,x;
void setup() {
  Serial.begin(9600);
  for(int i=0;i<18;i++) {
    array_[i] = random(70,100);
    Serial.println(array_[i]);
    }
   for (int i=0;i<3;i++){
    int max_ = max(max_,array_[i]);
    Serial.print("max :");
    Serial.println(max_);
    ;}
}
void loop() {
}
