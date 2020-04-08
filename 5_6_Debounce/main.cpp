#include "mbed.h"

Timer debounce;
InterruptIn button(SW2);
DigitalOut redLED(LED1);

void toggle(){
    if(debounce.read_ms()>1000){
        redLED = !redLED;
        debounce.reset();
    }
}

int main(){
    debounce.start();
    button.rise(&toggle);
    //Interrupt run LED state, and toggle use Timer to sure button stability.
    while(1); // Keep LED state
}