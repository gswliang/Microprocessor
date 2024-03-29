#ifndef __REG_MPC82L54_H
#define __REG_MPC82L54_H

/* for Megawin MPC82L(E)54 */

/*-----------------------------------------------------------------------------
Standard SFRs
-----------------------------------------------------------------------------*/

/* 8051 Registers */

sfr P0     = 0x80;
sfr P1     = 0x90;
sfr P2     = 0xA0;
sfr P3     = 0xB0;
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr PCON   = 0x87;
sfr TCON   = 0x88;
sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr IE     = 0xA8;
sfr IP     = 0xB8;
sfr SCON   = 0x98;
sfr SBUF   = 0x99;

// (PSW)
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0;

// (TCON)
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

// (IE)
sbit EA    = IE^7;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

// (IP)
sbit PS    = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

// (SCON)
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

// (P3)
sbit P37   = P3^7;
sbit P35   = P3^5;
sbit P34   = P3^4;
sbit P33   = P3^3;
sbit P32   = P3^2;
sbit P31   = P3^1;
sbit P30   = P3^0;

// (P2)
sbit P27   = P2^7;
sbit P26   = P2^6;
sbit P25   = P2^5;
sbit P24   = P2^4;
sbit P23   = P2^3;
sbit P22   = P2^2;
sbit P21   = P2^1;
sbit P20   = P2^0;

// (P1)
sbit P17   = P1^7;
sbit P16   = P1^6;
sbit P15   = P1^5;
sbit P14   = P1^4;
sbit P13   = P1^3;
sbit P12   = P1^2;
sbit P11   = P1^1;
sbit P10   = P1^0;

// (P0)
sbit P03   = P0^3;
sbit P02   = P0^2;
sbit P01   = P0^1;
sbit P00   = P0^0;

// (P3 alternate)
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*-----------------------------------------------------------------------------
New-defined SFRs
-----------------------------------------------------------------------------*/

/* MPC82L(E)54 Extensions */

sfr AUXR   = 0x8E;
sfr SADDR  = 0xA9;
sfr SADEN  = 0xB9;
sfr IPH    = 0xB7;
sfr WDTCR  = 0xE1;
sfr P0M0   = 0x93;
sfr P0M1   = 0x94;
sfr P1M0   = 0x91;
sfr P1M1   = 0x92;
sfr P2M0   = 0x95;
sfr P2M1   = 0x96;
sfr P3M0   = 0xB1;
sfr P3M1   = 0xB2;
sfr PCON2  = 0xC7;

// for ISP
sfr IFD    = 0xE2;
sfr IFADRH = 0xE3;
sfr IFADRL = 0xE4;
sfr IFMT   = 0xE5;
sfr SCMD   = 0xE6;
sfr ISPCR  = 0xE7;

// for ADC
sfr ADCTL  = 0xC5;
sfr ADCH   = 0xC6;
sfr ADCL   = 0xBE;
sfr ADC    = 0xC6; //the same as ADCH: ADC result, higher 8 bits

// for PCA
sfr CCON   = 0xD8;
sfr CMOD   = 0xD9;
sfr CCAPM0 = 0xDA;
sfr CCAPM1 = 0xDB;
sfr CCAPM2 = 0xDC;
sfr CCAPM3 = 0xDD;
sfr CL     = 0xE9;
sfr CH     = 0xF9;
sfr CCAP0L = 0xEA;
sfr CCAP0H = 0xFA;
sfr CCAP1L = 0xEB;
sfr CCAP1H = 0xFB;
sfr CCAP2L = 0xEC;
sfr CCAP2H = 0xFC;
sfr CCAP3L = 0xED;
sfr CCAP3H = 0xFD;
sfr PCAPWM0= 0xF2;
sfr PCAPWM1= 0xF3;
sfr PCAPWM2= 0xF4;
sfr PCAPWM3= 0xF5;

// for SPI
sfr SPISTAT= 0x84;
sfr SPICTL = 0x85;
sfr SPIDAT = 0x86;

// (CCON)
sbit CF    = CCON^7;
sbit CR    = CCON^6;
sbit CCF3  = CCON^3;
sbit CCF2  = CCON^2;
sbit CCF1  = CCON^1;
sbit CCF0  = CCON^0;

// (IE)
sbit EPCALVD  = IE^6;
sbit ESPIADC  = IE^5;

// (IP)
sbit PPCALVD  = IP^6;
sbit PSPIADC  = IP^5;

// (SCON)
sbit FE       = SCON^7;

// (P3 alternate)
sbit CEX0     = P3^7;
sbit CEX1     = P3^5;
sbit ECI      = P3^4;

// (P1 alternate)
sbit SPI_CLK  = P1^7;
sbit SPI_MISO = P1^6;
sbit SPI_MOSI = P1^5;
sbit SPI_SS   = P1^4;

#endif