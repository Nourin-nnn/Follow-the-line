void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(0));
  if(analogRead(0)<900){
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
    digitalWrite(13, 1);
    delay(100);
    digitalWrite(13, 0);
    delay(100);
  }else{
    digitalWrite(13, 0);
  }
  delay(500);

}
