const int ledPin =  13; 
int ledState = LOW;         
int i= 0;
unsigned long previousMillis = 0; 
unsigned long currentMillis;

unsigned long previousMillis2 = 0; 
unsigned long currentMillis2;


void setup() {
  
Serial.begin(9600);  
pinMode(ledPin, OUTPUT);
  
}

void loop() {
 
  currentMillis = millis(); 
  currentMillis2 = millis();

  if (currentMillis - previousMillis >= 1000) 
  {
    previousMillis = currentMillis;

    if (ledState == LOW) {
      digitalWrite(ledPin,1); 
      ledState = HIGH;
    } 
    else {
      digitalWrite(ledPin,0);
      ledState = LOW;
    }
    
  }
  if (currentMillis2 - previousMillis2 >= 5000) 
  {
      previousMillis2 = currentMillis2;
      
      Serial.println(i);
      i = i+1;
     

  }
  

}
