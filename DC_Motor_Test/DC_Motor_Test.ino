
/* PiBot Test Programme for DC Motor 
   Patrick Brinson 05/05/2014 */


int dir1 = 7;
int dir2 = 8;
int pwm1 = 5;
int pwm2 = 6;


void setup() {                
  
  pinMode(dir1, OUTPUT); 
  pinMode(dir2, OUTPUT); 
  pinMode(pwm1, OUTPUT); 
  pinMode(pwm2, OUTPUT);   
}


void loop() {
  /****************MOTOR 1 TEST ***************************/
  digitalWrite(dir1, HIGH);
  analogWrite(pwm1, 50);   
  delay(1000); 
  analogWrite(pwm1, 100);   
  delay(1000); 
  analogWrite(pwm1, 200);   
  delay(1000); 
  analogWrite(pwm1, 250);   
  delay(1000); 

  digitalWrite(dir1, LOW);
  analogWrite(pwm1, 50);   
  delay(1000); 
  analogWrite(pwm1, 100);   
  delay(1000); 
  analogWrite(pwm1, 200);   
  delay(1000); 
  analogWrite(pwm1, 250);   
  delay(1000); 
  
  
analogWrite(pwm1, 0); 
 /****************MOTOR 2 TEST ***************************/
  
  digitalWrite(dir2, HIGH);
  analogWrite(pwm2, 50);   
  delay(1000); 
  analogWrite(pwm2, 100);   
  delay(1000); 
  analogWrite(pwm2, 200);   
  delay(1000); 
  analogWrite(pwm2, 250);   
  delay(1000); 

  digitalWrite(dir2, LOW);
  analogWrite(pwm2, 50);   
  delay(1000); 
  analogWrite(pwm2, 100);   
  delay(1000); 
  analogWrite(pwm2, 200);   
  delay(1000); 
  analogWrite(pwm2, 250);   
  delay(1000); 

analogWrite(pwm2, 0); 


  
}
