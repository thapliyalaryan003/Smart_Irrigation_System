
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(A0,INPUT);
}
 
void loop() {
  int value = analogRead(A0);
  Serial.println(value);            
  if (value > 950) {
    digitalWrite(12, HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    
  } else {
    digitalWrite(12, LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);

    
    
  }
 
  if (value < 300) {
    Serial.print("MoistureHigh");
  } else if (value > 300 && value < 950) { 
    Serial.print("MoistureModerate");//serial print likho
  } else if (value > 950) {
    Serial.print("MoistureLow");
  
  }
}
