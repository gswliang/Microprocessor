#include <8051.h>
#define period 15536
#define max 9999
__bit bInc = 0; //記錄起來，等離開就刪除（設為0)
static __bit bEven =1;

void delay(){
    for (int i=0; i<90;i++){
        for (int j=0; j<40; j++){
        }
    }
}

void timer0_ISR(void) __interrupt(1) __using(1){
    TMOD = 0x01;
    TH0 = period >> 8;    
    TL0 = period & 0xff; 
    
    if(bEven){
        bEven =0;
        bInc =1;
    }else{
        bEven =1;
    }
}

void seg(unsigned *s){
    unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6};

    for (int i=0; i<4; i++){ 
        P0 = ~(1<<i);
        P2 = ~(seg[s[i]]);   
        delay();
    }
}
void init(){
    TMOD = 0x01; //mode 1 
    TH0 =  period >> 8;
    TL0 =  period & 0xff;
    EA=1;  //interrupt enable
    ET0=1; //timer0 interrupt enable
    TR0=1;  //timer0 start
}

int main(){
    unsigned four[4];
    int time=0;

    init();
    while(1){
        if (bInc){
            bInc = 0;
            time++;
        }
        if(time > max){
            time=0;
        }
        four[0] = (time/1000)%10; 
        four[1] = (time/100)%10; 
        four[2] = (time/10)%10; 
        four[3] = time%10;
        seg(four);
    }
}