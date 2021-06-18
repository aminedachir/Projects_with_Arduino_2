float moyenn_4 = 3.78;
void setup() {
  Serial.begin(9600);
  float parsent = map(moyenn_4*100,0,4,0,100)/100.0;
  Serial.println(parsent);
  float moyenn_5 = map(parsent*100,0,100,0,5)/100.0;
  Serial.println(moyenn_5);
}
void loop() {
}
