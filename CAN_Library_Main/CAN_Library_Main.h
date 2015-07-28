/*
   This is a combination of two CAN bus libraries that will simplify the
   use of CAN bus on different hardware platforms.






*/

#ifndef CAN_LIBRARY_MAIN
#define CAN_LIBRARY_MAIN

#include "Arduino.h"

class CanNode
{
private:
   int baudRate; 
protected:

public:
   CanNode(int rate);
   ~CanNode();
   virtual void Send(Message txMessage) = 0;
   virtual void Begin() = 0;



};


class Message
{


}








#endif