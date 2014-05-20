

#include <Servo.h> 
 
Servo myservo;  
 
int pos = 0;   
void setup() 
{ 
  myservo.attach(A2);  
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 90; pos += 1) 
  {                                  
    myservo.write(pos);              
    delay(15);                       
  } 
  for(pos = 90; pos>=1; pos-=1)     
  {                                
    myservo.write(pos);               
    delay(15);                        
  } 
} 
