// Clock
// by Lini Mestar 

#include <Servo.h> 
 
Servo myClockServo;
int SecPos = 0;

void setup() 
{ 
  myClockServo.attach(11);
} 

void loop() 
{ 
   for(SecPos = 180; SecPos >= 1; SecPos -=5){                                
    myClockServo.write(SecPos);
    delay(1000);
  }
} 
