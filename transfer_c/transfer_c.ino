float C;
void setup() {
  Serial.begin(9600);
  Serial.println("Enter Value of C° :");
  while (Serial.available() == 0) {;}
  float C = Serial.parseFloat();
  float F = C*9/5+32;
  Serial.print("F = ");
  Serial.println(F); 
}

void loop() {

}
