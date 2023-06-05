#include "mbed.h"
DigitalOut myled[]={LED1, PB_1};
int main()
{
    while (true) {
        for(int i=0;i<2;i++){
            myled[i] = 1;
        }
        wait_ms(500);
        for(int i=0;i<2;i++){
            myled[i] = 0;
        }
        wait_ms(500);
    }
}