const int pirPin = 4;    
const int ledPin = 13;   
void setup() {
  pinMode(pirPin, INPUT);   
  pinMode(ledPin, OUTPUT);  
}
void loop() {
  if (digitalRead(pirPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  } 
  else if 
   (digitalRead(pirPin) == LOW){
    digitalWrite(ledPin, HIGH);
    }

  delay(100);
}
