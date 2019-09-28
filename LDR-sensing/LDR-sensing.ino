int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A5);

  Serial.println(value);
  delay(500);
}
