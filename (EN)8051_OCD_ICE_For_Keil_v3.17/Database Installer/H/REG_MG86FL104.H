#ifndef __REG_MG86FL104_H
#define __REG_MG86FL104_H

sfr P1     = 0x90;
sfr P3     = 0xB0;
sfr P4     = 0xE8;
sfr PSW    = 0xD0;
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr SP     = 0x81;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr PCON0  = 0x87;
//sfr PCON   = 0x87;
sfr TCON   = 0x88;
sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr IE     = 0xA8;
sfr IP0L   = 0xB8;
//sfr IP     = 0xB8;
sfr SCON   = 0x98;
sfr SBUF   = 0x99;

// (PSW)
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit F1     = PSW^1;
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
sbit GF4   = IE^6;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

// (IP0L)
sbit PSL   = IP0L^4;
sbit PT1L  = IP0L^3;
sbit PX1L  = IP0L^2;
sbit PT0L  = IP0L^1;
sbit PX0L  = IP0L^0;

// (SCON)
sbit FE    = SCON^7;
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

// (P1)
sbit P17   = P1^7;
sbit P16   = P1^6;
sbit P15   = P1^5;
sbit P14   = P1^4;
sbit P13   = P1^3;
sbit P12   = P1^2;
sbit P11   = P1^1;
sbit P10   = P1^0;

// (P3)
sbit P37   = P3^7;
sbit P36   = P3^6;
sbit P35   = P3^5;
sbit P34   = P3^4;
sbit P33   = P3^3;
sbit P32   = P3^2;
sbit P31   = P3^1;
sbit P30   = P3^0;

// (P4)
sbit P41   = P4^1;
sbit P40   = P4^0;


// (P1 alternate)
sbit TXD3  = P1^5;
sbit RXD3  = P1^4;
sbit TXD2  = P1^3;
sbit TXD1  = P1^2;


// (P3 alternate)
sbit T1    = P3^5;
sbit T1CKO = P3^5;
sbit T0    = P3^4;
sbit T0CKO = P3^4;
sbit INT1  = P3^3;
sbit RXD2  = P3^3;
sbit INT0  = P3^2;
sbit RXD1  = P3^2;
sbit TXD0  = P3^1;
//sbit TXD   = P3^1;
sbit RXD0  = P3^0;
//sbit RXD   = P3^0;

/*-----------------------------------------------------------------------------
New-defined SFRs
-----------------------------------------------------------------------------*/

/* MG86FL(E)104 Extensions */

sfr SFIE   = 0x8E;
//sfr AUXR   = 0x8E;
sfr SADDR  = 0xA9;
sfr SADEN  = 0xB9;
sfr IP0H    = 0xB7;
//sfr IPH    = 0xB7;
sfr WDTCR  = 0xE1;
sfr P1M0   = 0x91;
sfr P3M0   = 0xB1;
sfr P3M1   = 0xB2;
sfr P4M0   = 0xB3;
sfr PCON1  = 0x97;
sfr AUXR0  = 0xA1;
sfr AUXR1  = 0xA2;
sfr AUXR2  = 0xA3;
sfr EIE1   = 0xAD;
sfr EIP1L  = 0xAE;
sfr EIP1H  = 0xAF;
sfr PUCON0 = 0xB4;
sfr CKCON0 = 0xC7;
//sfr PCON2  = 0xC7;
sfr P3KBIE = 0xD6;
sfr P1KBIE = 0xD7;

// for ISP
sfr IFD    = 0xE2;
sfr IFADRH = 0xE3;
sfr IFADRL = 0xE4;
sfr IFMT   = 0xE5;
sfr SCMD   = 0xE6;
sfr ISPCR  = 0xE7;

#endif