/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 1
int servoPin = 2
int servoPin = 3
int servoPin = 4
int servoPin = 5
int servoPin = 6
int servoPin = 7
int servoPin = 8
int servoPin = 9
int servoPin = 10;
 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin); 
} 
 
 
void loop() 
{ 
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
} 
