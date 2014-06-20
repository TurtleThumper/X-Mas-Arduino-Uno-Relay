/*
 8CH Relay - RANDOM (X-MAS WREATH)
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
  digitalWrite(relay1, random(2));
  digitalWrite(relay2, random(2));
  digitalWrite(relay3, random(2));
  digitalWrite(relay4, random(2));
  digitalWrite(relay5, random(2));
  digitalWrite(relay6, random(2));
  digitalWrite(relay7, random(2));
  digitalWrite(relay8, random(2));
  
  delay(1000);
}
