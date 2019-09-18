void setup() {
  for (int i = 3; i <= 10; i++) 
  {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  for (int i = 3; i < 11; i++) 
  {
    digitalWrite(i, HIGH);
    delay(200);
    allLEDsOFF();

    
  }
  for (int i = 9; i >= 4; i--) {
    digitalWrite(i, HIGH);
    delay(200);
    allLEDsOFF();
      }
}
void allLEDsOFF(void)
{
  for (int i = 3; i < 11; i++) {
    digitalWrite(i, LOW);
  }
 
}
