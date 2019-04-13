const int BLED =9;
const int GLED = 10;
const int RLED =11;
const int BUTTON =2;


void setup() {
pinMode(BLED,OUTPUT);
pinMode(GLED,OUTPUT);
pinMode(RLED,OUTPUT);
pinMode(BUTTON,INPUT); 
}

void loop() {
if( digitalRead(BUTTON) == HIGH){
  digitalWrite(BLED,HIGH);
  digitalWrite(GLED,HIGH);
  digitalWrite(RLED,HIGH); 
  
}


if (digitalRead(BUTTON) != HIGH)
{
  digitalWrite(BLED,LOW);
  digitalWrite(GLED,LOW);
  digitalWrite(RLED,LOW); 
   
 }

}
