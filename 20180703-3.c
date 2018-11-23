
#include <delay.h>
#include <mega128a.h>

// Declare your global variables here


void main(void)
{
    unsigned char led = 0x06; 
    DDRA = 0xFF; //PORTA출력설정
    

while (1) {
    PORTA = led; 
    delay_ms(100);
    led <<=1;
    led |= 0x01;
    led = led & 0x0F;   
    
    if(led == 0x0F){ 
        led = 0x06;
    }
}

}
