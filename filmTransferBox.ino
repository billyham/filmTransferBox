
//Transfer Box for Bad Mutha
//by David Vincent Hanagan, copyright Ham Again LLC

int incomingByte = 0;

int ledPin = 9;
int onDuration = 400;

void setup() {

  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  
}


void loop(){
  
  if (Serial.available() > 0) {

    incomingByte = Serial.read();

  }
  
  if (incomingByte > 0){
   
   digitalWrite(ledPin, HIGH);
    
    delay(onDuration);
    
    digitalWrite(ledPin, LOW);
    
    incomingByte = 0; 
  }

  

}

