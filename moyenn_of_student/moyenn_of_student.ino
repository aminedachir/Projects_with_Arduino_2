float moyenn = 3.78,y;
void setup() {
  Serial.begin(9600);
  float parsent = map(moyenn*100,0,4,0,100)/100.0;
  Serial.println(parsent);
  float moyenn2 = map(parsent*100,0,100,0,5)/100.0;
  Serial.println(moyenn2);
}
void loop() {
}
