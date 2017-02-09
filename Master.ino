//Arduino code for Transmitter (Master)

#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11

SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar,val ; 
int value1;
//Constants:
const int ledPin = 4;   //pin 3 has PWM funtion
const int flexPin = A0; //pin A0 to read analog input
int n,b=0;
//Variables:
 //save analog value



void setup() {
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);   
  Serial.println("Goodnight moon!");

  mySerial.begin(38400);

}

void loop(){

  value1 = analogRead(flexPin); 
 if(350<value1<400)val='1';
 else if(100<value1<200)val='1';
 else val='0';
 Serial.println(val);
  while(mySerial.available()){
    myChar = mySerial.read();
    Serial.print(myChar);

if(val=='0')
{mySerial.print('b');
digitalWrite(13,LOW);
 


}
else 
{mySerial.print('a');
digitalWrite(13,HIGH);
  digitalWrite(4,'a');

}
while(Serial.available()){
  myChar = Serial.read();
  mySerial.print(myChar);
  }
 
}
