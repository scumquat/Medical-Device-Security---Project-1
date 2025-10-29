# Medical-Device-Security---Project-1
This is a project that uses an Arduino Leonardo, a basic LED circuit and a USB-TTL cable to 1) monitor sensor data on the arduino using the serial monitor, and use the cable to observe a second serial monitor 2) use the TTL cable to flash code onto the Arduino by the second serial bus and 3) use a state machine to control the Arduino


## Definitions
### Serial Communication
*   What is Serial Communication
Serial Communication is a means of digital communication where information is sent one bit at a time (in series.) It is a very common and typically quick way of conveying information from a transmitting device to a receiving device.
*   How do devices communicate serially?
Devices require four connections: a clock signal that dictates the rate at which information is sent, a common ground or reference voltage, a Tx (transmit) and Rx (receive) lines.  Rx is connected to Tx and Tx is connected to Rx.  Data is sent in packets, typically consisting of a start bit, a byte of information, and a stop bit.  In some instances these packets include a parity bit which is a means of error checking. It describes what the information in the packet is supposed to look like by way of counting an odd or even number of ones and zeros. If the information in the packet doesn't match the parity then the information can be handled appropriately or discarded without causing problems.
*   What is a Serial Communciation Protocol
Serial communication protocols are means by which serial communication is conducted.  Basically it is the rules of communication and  it describes how this communication is done. (fix me)
*   What is a Serial Monitor
Computers and IDEs will sometimes have a serial monitor, which is a tool that reads out information conveyed over serial communication ports, such as a USB port.  The most common form of serial port is a program called PuTTy.
### Baud Rate
*   What is Baud Rate
Baud rate is effectively the rate at which devices can communicate by serial protocol.  It is also known as bits per second (bps) and it effectively describes the frequency of a digital signal.  Most devices operate on 11520 or 9600 baud.
*   How do you calculate baud
Baud is calculated by considering the number of bits that can be transmitted in one second, or how often the signal through a serial line can change within a second.
### TTL Cable
*   [This is our cable](https://www.adafruit.com/product/954)
*   This allows a device to use a USB cable to send data over pins
*   V_cc: +3.3V, GND: ground, Tx: Data out, Rx: Data in
### Arduino Leonardo
*   [Documentation](https://docs.arduino.cc/hardware/leonardo/)
*   Pinout Information
*   Arduino ISP 
## Multiple Serial Port Communication
## State Machine
*   What is a statemachine
A state machine is a machine or devices that has multiple states through which it iterates over either a time frame or by user input
    * think stoplight  
*   Rules
Our state machine works by iterating through states 0,1 and 2. It changes states every 2 and a half seconds, and can be controlled through the serial monitor.
*   Block Diagram
*   Circuit Diagram
* *  linkercad simulation would be nice
  *  

Errors:
some compatibility issues
drivers needed to be installed
debugging stuff on the thing


### Firmware Extraction
*   Circuit diagram
*   
https://www.avrfreaks.net/s/topic/a5CV40000002enlMAA/t399127
