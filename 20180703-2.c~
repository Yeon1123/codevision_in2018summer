#include <mega128.h>
#include <delay.h>


void main(void){
  //  unsigned char led = 0x06; //led 초기출력값. 
    
    DDRA.0 = 1;  //portA 출력 설정
    DDRA.1 = 1;
    DDRA.2 = 1;
    
    while(1) { 
        if(!(
        PINA.3)){
        
             PORTA = PORTA & 0xFE;

            }
            
        else{
              PORTA = PORTA | 0x01;
        }   
    }
    
    
}