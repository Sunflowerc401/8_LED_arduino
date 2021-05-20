int pinLED[] = {0,1,2,3,4,5,6,7};
int i;
void setup() {
  for(i = 0; i<8; i++){
      pinMode(pinLED[i],OUTPUT);
      digitalWrite(pinLED[i],LOW);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i<8; i++){
      digitalWrite(pinLED[i],HIGH);
      delay(500);
    }
  for(i = 0; i<8; i++){
      digitalWrite(pinLED[i],LOW);
      delay(500);
    }
}
