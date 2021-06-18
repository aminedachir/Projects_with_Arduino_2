float moyenn = 3.78;
void setup() {
  Serial.begin(9600);
  float parsent = moyenn*100/4;
  Serial.println(parsent);
  float moyenn2 = parsent*5/100;
  Serial.println(moyenn2);
}

void loop() {

}
