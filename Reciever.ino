//Master
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX | TX
String content;
char character;
void setup(){
  BTSerial.begin(38400);
  Serial.begin(9600);
}

void loop(){
  
   if(BTSerial.available()>0){
      //  Serial.println(BTSerial.read());
   
    character = BTSerial.read();
    Serial.print(BTSerial.read());
    content.concat(character);
     if(character == '\r'){ // find if there is carriage return
     Serial.print(content); //display content (Use baud rate 9600)
     content = ""; //clear buffer
     Serial.println();
  }
   }
}

//void loop(){
//   while(bluetooth.available()){
//    character = bluetooth.read();
//    content.concat(character);
//   if(character == '\r'){ // find if there is carriage return
//     Serial.print(content); //display content (Use baud rate 9600)
//     content = ""; //clear buffer
//     Serial.println();
//  }
//  }
//
//}
