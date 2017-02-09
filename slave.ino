//Arduino code for Receiver(Slave)

#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11
const int ledPin = 13;   //pin 3 has PWM funtion
const int flexPin = A0; //pin A0 to read analog input
int n,b=1, a=1;


//Variables:
int value; 

SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar ; 

void setup() {
  pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(ledPin,OUTPUT);
  Serial.begin(9600);   
  Serial.println("Goodnight moon!");

  mySerial.begin(38400);

}

void loop(){
  
  while(mySerial.available()){
    myChar = mySerial.read();
    Serial.print(myChar);
   
   if(myChar=='b')b=1;
      if(myChar=='a'&& b==1){a=!a;b=0;}

  digitalWrite(13  ,a);
  digitalWrite(5,LOW);

 
  }

while(Serial.available()){
   myChar = Serial.read();
   mySerial.print(myChar);
  }
 
}








