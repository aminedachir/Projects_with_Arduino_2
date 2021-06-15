void setup() {
  Serial.begin(9600);
  for (int i=0;i<=10;i++){
    Serial.println(i,BIN);
    delay(300); 
  }
}

void loop() {
}
