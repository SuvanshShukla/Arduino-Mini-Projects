#include <Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  //for forward rotation
//  for(int i=1; i<=180; i++){
//    myservo.write(i);
//    delay(10);
//    }


//for reverse rotation
    for(int j=180; j>=1; j--){
      myservo.write(j);
      delay(10);
      }
}

//remember to join red to VCC 5V
// brown to ground
// yellow to any pwm digital pin
