//Slave
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11);
//Bluetooth Tx to Arduino 10
//Bluetooth Rx to Arduino 11
int x=3;
void setup() 
{ 

  Serial.begin (9600);      //Communication rate serial monitor
  BTSerial.begin(38400);    // Default communication rate of the Bluetooth module
} 
  
void loop() 
{ 


//Serial.println(x); 
BTSerial.write(x);
BTSerial.write("\r");
//BTSerial.print(x);
//BTSerial.print("\r");

delay(1000);
}
