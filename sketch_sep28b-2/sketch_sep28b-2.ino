int trig = 2;
int echo = 3;
float dist,t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //pinMode is important to set what the pin does
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(9, OUTPUT);
  
  //this is for letting the sensor rest
  digitalWrite(trig, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //the above was the code for the transmitter TX
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  //the above was for the receiver RX
  t = pulseIn(echo, HIGH);
  dist = 0.01715 * t;
   
  //this is to print the distance
  Serial.println(dist);
  delay(0);

  //for turning an LED on or off
  if(dist<20){
    digitalWrite(9, HIGH);
    }
  else{
    digitalWrite(9, LOW);
    }
}
