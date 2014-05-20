
int dir = 13;
int stp = 12;
int enable = 11;

int change = 0;
int count = 0;

void setup() {                
  pinMode(dir, OUTPUT);
  pinMode(step, OUTPUT); 
  pinMode(enable, OUTPUT);  
  
  digitalWrite(dir, HIGH);
  digitalWrite(enable, HIGH);
}


void loop() {
  
  if (change = 1) 
  {
  digitalWrite(dir, HIGH);
  digitalWrite(stp, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);               // wait for a second
  digitalWrite(stp, LOW);    // turn the LED off by making the voltage LOW
  delay(10);               // wait for a second
  count++;
  }
  
  else 
  {
  digitalWrite(dir, LOW);  
  digitalWrite(stp, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);               // wait for a second
  digitalWrite(stp, LOW);    // turn the LED off by making the voltage LOW
  delay(10);               // wait for a second
  count--;
  }
  
  if (count = 1000)
  {
    change == 0;
  }
 
 if (count = 0)

  {
   change == 1; 
   
  }
  
  
  
  
}
    
    
    
