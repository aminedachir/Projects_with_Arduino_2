int array_[3],max_;
int x;
void setup() {
  Serial.begin(9600);
  for(int i=0;i<3;i++) {
    array_[i] = random(70,100);
    Serial.println(array_[i]);
    delay(2000);
    }
   for (int i=0;i<3;i+=2){
    int max_ = max(array_[i],array_[i+1])
    Serial.println(max_);
    ;}
}
void loop() {
}
