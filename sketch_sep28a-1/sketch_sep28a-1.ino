void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  //Serial.println("Hello World!");
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
}
