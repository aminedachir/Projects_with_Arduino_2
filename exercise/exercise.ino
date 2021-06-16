int led = 10;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println("How many blinks :");
  while (Serial.available() == 0) {;}
  int x = Serial.parseInt();
  Serial.println("How many Delay Time :");
  while (Serial.available() == 0) {;}
  int y = Serial.parseInt();
  for (int i=x;i>0;i--){
    digitalWrite(led,HIGH);
    delay(y);
    digitalWrite(led,LOW);
    delay(y);
    }
}
