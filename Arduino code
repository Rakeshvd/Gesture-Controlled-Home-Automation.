Arduino code for Receiver(Slave)

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
 // mySerial.println("Hello, world?");
}

void loop(){
  
  while(mySerial.available()){
    myChar = mySerial.read();
    Serial.print(myChar);
   /* if(myChar=='a'){   // if number 1 pressed ....
  n=0;  }
  else n=1;
  if(n==1)b=!b;*/
   if(myChar=='b')b=1;
      if(myChar=='a'&& b==1){a=!a;b=0;}
// else n=0;
 // Serial.println(b);
  digitalWrite(13  ,a);
  digitalWrite(5,LOW);

  //analogWrite(ledPin, value);          //Send PWM value to led
  //delay(100); 
  // turn the LED on (HIGH is the voltage level)
  /*delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);*/
   
  /* if (myChar=='b'){// if number 0 pressed ....
digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);   // turn the LED on (HIGH is the voltage level)
   }*/
    
   //mySerial.print('a');
    //mySerial.print("t");
  }
//mySerial.print('a');
while(Serial.available()){
   myChar = Serial.read();
   mySerial.print(myChar);
  }
 
}


Arduino code for Transmitter (Master)

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
 // mySerial.println("Hello, world?");
}

void loop(){
 /*value = analogRead(A0); 
  value = map( value,620,200,-10,255);
  if(value<100)value=0;
  if(value==0){n=0;}
  else n=1;*/
  value1 = analogRead(flexPin); 
 if(350<value1<400)val='1';
 else if(100<value1<200)val='1';
 else val='0';
 Serial.println(val);
  while(mySerial.available()){
    myChar = mySerial.read();
    Serial.print(myChar);
    /* if(myChar=='a'){   // if number 1 pressed ....
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
   }*/
    
   //mySerial.print('a');
    //mySerial.print("t");
  }
//mySerial.print('b');
//delay(5000);
if(val=='0')
{mySerial.print('b');
digitalWrite(13,LOW);
 
//Serial.println("a");

}
else 
{mySerial.print('a');
digitalWrite(13,HIGH);
  digitalWrite(4,'a');
//Serial.println("b");
}
while(Serial.available()){
  myChar = Serial.read();
  mySerial.print(myChar);
  }
 
}





