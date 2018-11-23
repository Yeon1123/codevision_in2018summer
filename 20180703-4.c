
#include <delay.h>
#include <mega128a.h>

// Declare your global variables here


void main(void)
{
    unsigned char led = 0x01; 
    DDRA = 0xFF; //PORTA출력설정
    

while (1) {
    PORTA = led; 
    delay_ms(1000);
    led <<=1;
    led = led & 0x0F;   
    
    if(led == 0x08){ 
        led = 0x01;
    }
}

}
