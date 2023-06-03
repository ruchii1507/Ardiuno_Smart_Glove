#include <SoftwareSerial.h>

SoftwareSerial mySerial(5,4);


//variable initializtion
int xpin = A5;
int xadc = 0;

int ypin = A6;
int yadc = 0;


int FLEX_PIN1 = A0; 
int FLEX_PIN2 = A1; 
int FLEX_PIN3 = A2; 
int FLEX_PIN4 = A3; 
int FLEX_PIN5 = A4; 


void setup() 
{
mySerial.begin(9600);
while (!Serial) 
{
; // wait for serial port to connect. Needed for native USB port only
}

}



void loop() 
{
// reading sensor value
float flex1 = analogRead(FLEX_PIN1);
float flex2 = analogRead(FLEX_PIN2);
float flex3 = analogRead(FLEX_PIN3);
float flex4 = analogRead(FLEX_PIN4);
float flex5 = analogRead(FLEX_PIN5);

xadc = analogRead(xpin);
yadc = analogRead(ypin);

//flat hand
if(flex1 >= 1000 && xadc >= 340 && xadc <= 390)
mySerial.print("HI");
if(flex2 >= 1000 && xadc >= 340 && xadc <= 390)
mySerial.print("THANK YOU");
if(flex3 >= 1000 && xadc >= 340 && xadc <= 390)
mySerial.print("NEED WATER");
if(flex4 >= 1000 && xadc >= 340 && xadc <= 390)
mySerial.print("NEED FOOD");
if(flex5 >= 1000 && xadc >= 340 && xadc <= 390)
mySerial.print("MY NAME IS ABHISHEK");


//hand down
if(flex1 >= 1000 && xadc >= 280 && xadc <= 310)
mySerial.print("WASHROOM");
if(flex2 >= 1000 && xadc >= 280 && xadc <= 310)
mySerial.print("HA HA HA HA");
if(flex3 >= 1000 && xadc >= 280 && xadc <= 310)
mySerial.print("GOOD MORNING");
if(flex4 >= 1000 && xadc >= 280 && xadc <= 310)
mySerial.print("HELLO EVERY NYAN");
if(flex5 >= 1000 && xadc >= 280 && xadc <= 310)
mySerial.print("OH MY GAH");

delay(3000);

}