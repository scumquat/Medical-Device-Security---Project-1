#include <SoftwareSerial.h>

int RED = 13;
int GREEN = 12;
int YELL = 11;
int state = 0;
int input;
SoftwareSerial serMon1(2,3);

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(YELL,OUTPUT);
  serMon1.begin(9600);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    input = Serial.parseInt();
    state = input;
    Serial.print("State Changed to ");
    Serial.println(state);
    while(Serial.available()>0) Serial.read();
  }
  if((state>2)||(state<0))
  {
    state=0;
  }
  if(state == 0)
  {
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,LOW);
    digitalWrite(YELL,LOW);
  }
  else if(state == 1)
  {
    
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,LOW);
    digitalWrite(YELL,HIGH);
  }
  else if(state == 2)
  {
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,HIGH);
    digitalWrite(YELL,LOW);
  }
  serMon1.print("State: ");
  serMon1.println(state);
  state++;
  if(state>2)
  {
    state=0;
  }
  delay(2500);

}
