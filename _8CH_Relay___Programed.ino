/*
 8CH Relay - Programed (X-MAS WREATH)
 Created June 2014
 by Matthew Eccles
 
 http://www.matteccles.com
 */
 
 
int relay1 = 2;
int relay2 = 3;
int relay3 = 4;
int relay4 = 5;
int relay5 = 6;
int relay6 = 7;
int relay7 = 8;
int relay8 = 9;
 
void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);
}
void loop() {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);
  delay(1000);                   // wait for a second
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  digitalWrite(relay5, LOW);
  digitalWrite(relay6, LOW);
  digitalWrite(relay7, LOW);
  digitalWrite(relay8, LOW);
  delay(200);                   // wait for a half second
  digitalWrite(relay2, HIGH);
  digitalWrite(relay1, LOW);
  delay(200); 
  digitalWrite(relay3, HIGH);
  digitalWrite(relay2, LOW);
  delay(200);  
  digitalWrite(relay4, HIGH);
  digitalWrite(relay3, LOW);
  delay(200); 
  digitalWrite(relay5, HIGH);
  digitalWrite(relay4, LOW);
  delay(200); 
  digitalWrite(relay6, HIGH);
  digitalWrite(relay5, LOW);
  delay(200); 
  digitalWrite(relay7, HIGH);
  digitalWrite(relay6, LOW);
  delay(200); 
  digitalWrite(relay8, HIGH);
  digitalWrite(relay7, LOW);
  delay(200); 
  digitalWrite(relay8, LOW);
  delay(300); 
  digitalWrite(relay1, HIGH);
  digitalWrite(relay5, HIGH);
  delay(200); 
  digitalWrite(relay2, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay1, LOW);
  digitalWrite(relay5, LOW);
  delay(200); 
  digitalWrite(relay3, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay2, LOW);
  digitalWrite(relay6, LOW);
  delay(200); 
  digitalWrite(relay4, HIGH);
  digitalWrite(relay8, HIGH);
  digitalWrite(relay3, LOW);
  digitalWrite(relay7, LOW);  
  delay(200); 
  digitalWrite(relay1, HIGH);
  digitalWrite(relay5, HIGH);  
  digitalWrite(relay4, LOW);
  digitalWrite(relay8, LOW);   
  delay(200); 
  digitalWrite(relay2, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay1, LOW);
  digitalWrite(relay5, LOW);
  delay(200); 
  digitalWrite(relay3, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay2, LOW);
  digitalWrite(relay6, LOW);
  delay(200); 
  digitalWrite(relay4, HIGH);
  digitalWrite(relay8, HIGH);
  digitalWrite(relay3, LOW);
  digitalWrite(relay7, LOW);  
  delay(200); 
  digitalWrite(relay4, LOW);
  digitalWrite(relay8, LOW);  
  delay(300); 
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);
  delay(500);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  digitalWrite(relay5, LOW);
  digitalWrite(relay6, LOW);
  digitalWrite(relay7, LOW);
  digitalWrite(relay8, LOW);
  delay(250);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);
  delay(500);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  digitalWrite(relay5, LOW);
  digitalWrite(relay6, LOW);
  digitalWrite(relay7, LOW);
  digitalWrite(relay8, LOW);
  delay(250);           
} 
