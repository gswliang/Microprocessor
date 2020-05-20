#include <8051.h>

void delay(){
    for (int i=0; i<90;i++){
        for (int j=0; j<10; j++){
        }
    }
}

void seg(unsigned *s){
    unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6}; //0-9

    for (int i=0; i<4; i++){
        P0 = ~(1<<i);  //D1-4 0,0001=> 1000,0
        P2 = ~(seg[s[i]]);  
        delay();
    }
    
}

void main()
{
    unsigned s[]={5,4,3,2};
    unsigned k[]={9,4,8,7};
	while (1) {
        seg(s);
        delay();
        seg(k);

}

}

//0001 => ~(1000) ==> D1
//0010 => ~(0100) ==> D2
//0100 => ~(0010) ==> D3
//1000 => ~(0001) ==> D4
//D1 -> 0xEE = 1110
//D2 -> 0xDD = 1101
//D3 - > 0xBB = 1011
//D4 -> 0x77 = 0111


//出現6 - 1100 0000 -> 0011 1111

// a b c d  e f g p
// 0 0 1 1  1 1 1 0
  


