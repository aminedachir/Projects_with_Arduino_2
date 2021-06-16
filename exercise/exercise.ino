int led = 10;
int x;
int y;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  Serial.println("How many blinks :");
  while (Serial.available() == 0) {;}
  x = Serial.parseInt();
  Serial.println("How many Delay time in ms :");
  while (Serial.available() == 0) {;}
  y = Serial.parseInt();
  for (int i=0;i<x;i++){
    digitalWrite(led,1);
    delay(y);
    digitalWrite(led,0);
    delay(y);
    }
  
  
}
