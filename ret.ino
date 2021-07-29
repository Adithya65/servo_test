#include <Servo.h>

Servo servo_test; 
Servo servo1;
  Servo servo2;
                
  Servo servo3;
  Servo servo4;
int angle = 0;    
 
void setup() 
{ 
  servo_test.attach(13);
  servo1.attach(12);
  servo2.attach(11);
  servo3.attach(9);
    servo4.attach(10);
} 
  
void loop() 
{ 
  for(angle = 0; angle < 130; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle); 
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);//command to rotate the servo to the specified angle
    delay(10);                       
  } 
 
  delay(10);
  
  for(angle = 130; angle>=1; angle-=1)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);  
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);///command to rotate the servo to the specified angle
    delay(10);                       
  } 

    delay(10); }
