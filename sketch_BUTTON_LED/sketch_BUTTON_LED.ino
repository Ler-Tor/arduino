
const int LED=9;
const int BUTTON=2;

void setup() {
 
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);

}

void loop() {



  if(digitalRead(BUTTON)== HIGH){
        digitalWrite(LED,HIGH);
  }
  
 else{
        digitalWrite(LED,LOW);
 }

}
