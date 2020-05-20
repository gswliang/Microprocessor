#include <8051.h>
#define period 15536

unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6};
#define uint unsigned int 
#define uchar unsigned char 
sbit dula=P2^6;
sbit wela=P2^7;
uchar tt;
uchar aa,bb, cc,bai;
uint shu;//要記得uint的範圍可是比uchar大的，所以這裡到9999了必須用uint。
uchar code table[]={
0x3f,0x06,0x5b,0x4f,
0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,
0x39,0x5e,0x79,0x71,
0x67,0x76,0x38,0x3f,0};
void display(uchar aa,uchar bb,uchar cc,uchar bai);
void delay(uint z);
void init();
void main()
{
      init();
      while(1)
 {
 display(aa,bb,cc,bai);
 }
   
 


}
void init ()
{ 
  shu=0;
  TMOD=0X01;//確定定時器的工作方式開啟定時器零和定時器1
  TH0=(65536-50000)/256;
  TL0=(65536-50000)%256;
  EA=1;//開啟總中斷
  ET0=1;//開啟定時器0的中斷；
  TR0=1; //啟動定時器0；
}
void timer0() interrupt 1
 {
    TH0=(65536-50000)/256 ;
    TL0=(65536-50000)%256;
    tt++;
    if(tt==20)
    {
        tt=0;
        shu++;
        aa=shu/1000;  //0.001, 0.002 ....
        bb=shu/100%10; //0.1,0.2
        cc=shu/10%10; //1,2,3
        bai=shu%10; // 0.01
    }


void display(uchar aa,uchar bb,uchar cc,uchar bai)
{
        dula=1;
        P0=table[aa];
        dula=0;
        P0=0xff;
        wela=1;
        P0=0xfe;
        wela=0;
        delay(5);

        dula=1;
        P0=table[bb];
        dula=0;
        P0=0xff;
        wela=1;
        P0=0xfd;
        wela=0;
        delay(5);


        dula=1;
        P0=table[cc];
        dula=0;
        P0=0xff;
        wela=1;
        P0=0xfb;
        wela=0;
        delay(5);

        dula=1;
        P0=table[bai];
        dula=0;
        P0=0xff;
        wela=1;
        P0=0xf7;
        wela=0;
        delay(5);
}

void delay(uint z)
    {
    uint x,y;
    for(x=z;x>0;x--)
       for(y=110;y>0;y--);
    }