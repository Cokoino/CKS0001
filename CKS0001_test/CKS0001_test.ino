void setup()          
{
pinMode(6, OUTPUT);    
pinMode(4, OUTPUT);   
pinMode(5, OUTPUT);   
pinMode(2, OUTPUT);   
}
void loop()     
{
analogWrite(6,200);   
digitalWrite(4,HIGH); 
analogWrite(5,200);   
digitalWrite(2,HIGH); 
delay(2000);         
analogWrite(6,200);    
digitalWrite(4,LOW);   
analogWrite(5,200);   
digitalWrite(2,LOW);   
delay(2000);          
}
