float c = 23.65;
void setup() {
  Serial.begin(9600);
  float F = c*9/5+32;
  Serial.print("F = ");
  Serial.println(F); 
}

void loop() {

}
