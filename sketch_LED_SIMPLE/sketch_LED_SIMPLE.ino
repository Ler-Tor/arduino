const int LED=9;

void setup() 
{
 pinMode(LED,OUTPUT);
 
}

void loop()
{
  digitalWrite(LED,HIGH);
  delay(400);
  digitalWrite(LED,LOW);
  delay(400);
  
}

