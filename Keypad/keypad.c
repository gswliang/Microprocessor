#include <8051.h>

void delay(){
    for (int i=0; i<30;i++){
        for (int j=0; j<30; j++){
        }
    }
}

void seg(char s){
    unsigned check[] ={0,0,0,s};
    unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6,0xEE,0x3E,0x9C,0x7A,0x9E,0x8E}; //0-9 A-F

     for (int i=0; i<4; i++){
        P0 = ~(1<<i);  
        P2 = ~(seg[check[i]]);  
        delay();
    }
}

void noLed(){
    P0 = 0x00;
    P2 = ~(0x02);
}

void get_key(){
    unsigned arr []= {0xEE,0xED,0xEB,0xE7,0xDE,0xDD,0xDB,0xD7,0xBE,0xBD,0xBB,0xB7,0x7E,0x7D,0x7B,0x77};
    unsigned size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 4; i++)
    {
        P1 = 0xFF & ~(0x80>>i);
        unsigned k = P1;
        for (int j = 0; j < 4; j++)
        {    
            unsigned sh = 0x7F & ~(0x80>>i);
            if (P1==sh ) noLed();
            for (unsigned i=0; i<size;i++) if (P1==arr[i]) seg(i);
            
        }
    }
}

void main()
{
  	while (1) 
      get_key();                 
}


// TL0 = 15536 & 0xff;
// TH0 = 15536 >> 8;
//經過50000個clocks產生一個Interrupt
 // 500000us = 50 ms