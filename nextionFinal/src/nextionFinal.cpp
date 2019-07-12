/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/johnw/Desktop/APCSSCHOOOL20189/nextionFinal/src/nextionFinal.ino"
#include "Nextion.h"


void b0PopCallback(void *ptr);
void b1PopCallback(void *ptr);
void setup(void);
void loop(void);
#line 4 "c:/Users/johnw/Desktop/APCSSCHOOOL20189/nextionFinal/src/nextionFinal.ino"
NexButton b0 = NexButton(0, 2, "b0");
NexText t0 = NexText(0, 3, "t0");
NexButton b1 = NexButton(0, 4, "b1");


// Register a button object to the touch event list.  
NexTouch *nex_listen_list[] = {
  &b0,
  &b1,
  NULL
};

void b0PopCallback(void *ptr)
{
    t0.setText("Hello World. Group Three is the Best");
}

void b1PopCallback(void *ptr) {
  t0.setText("Group 3 Rocks!!!");
}

// setup() runs once, when the device is first turned on.
void setup(void) {
  Serial.begin(9600);

  nexInit();

  b0.attachPop(b0PopCallback, &b0);

  b1.attachPop(b1PopCallback, &b1);
  
}

void loop(void) 
{
  nexLoop(nex_listen_list);
}