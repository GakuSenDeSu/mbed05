#include "mbed.h"

Ticker time_up;
DigitalOut redLED(LED1);

void blink(){
    redLED = !redLED;
}

int main(){
    time_up.attach( &blink, 0.2 );
    //This program switches the LED every 200ms, using Timeout rather than a wait( ) function. 
    while(1);
}