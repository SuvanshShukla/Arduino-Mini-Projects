void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1; i<=255; i++){ //by the looks of it inline initialization is allowed
    analogWrite(9, i);
    delay(10); //adjusting this time makes the increasing in brightness faster
    }
}
