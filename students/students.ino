void setup() {
  Serial.begin(9600);
  int students [ ] = {12,8,5,15,19,2};
  for (int i=0;i<6;i++){
    int moyenn = students[i] + students[i+1];
    Serial.println(moyenn);  
    ;}
}

void loop() {

}
