# HC-05-Bluetooth-Module
HC‐05 module is an easy to use Bluetooth SPP (Serial Port Protocol) module,designed for wireless serial connection setup.
The HC-05 Bluetooth Module can be used in a Master or Slave configuration for wireless communication.This serial port bluetooth module has 2.4GHz radio transceiver.

Here We are using Arduino UNO 

Pairing commands:

Step1: Upload blank code
Step2: Arduino  Bluetooth
         TX       TX
         RX       RX
         5V       VCC
         Gnd      Gnd
         3.3v     En
Step3: Go to serial monitor and set baudrate 38400 and Both NL&CR

Step4: Commands

Slave(Transmiter):

AT 
AT+ROLE?
AT+ROLE=0 //Slave
AT+ADDR? //18,E4,400006

Master(Reciever):

AT 
AT+ROLE?
AT+ROLE=1 //Master
AT+CMODE?
AT+COMODE=0 //Connect to only one slave
AT+BIND?
AT+BIND=18,E4,400006


Code:
Step1: Upload code
Step2: Arduino  Bluetooth
         TX       RX
         RX       TX
         5V       VCC
         Gnd      Gnd
 
