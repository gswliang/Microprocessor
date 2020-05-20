#ifndef __REG_MG87FL04_H
#define __REG_MG87FL04_H

/* for Megawin MG87FL(E)04 */

/*-----------------------------------------------------------------------------
Standard SFRs
-----------------------------------------------------------------------------*/

/* 8051 Registers */

sfr P1     = 0x90;
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
sbit EAC   = IE^6;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

// (IP)
sbit PAC   = IP^6;
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
sbit P35   = P3^5;
sbit P32   = P3^2;
sbit P31   = P3^1;
sbit P30   = P3^0;

// (P1)
sbit P15   = P1^5;
sbit P13   = P1^3;
sbit P11   = P1^1;
sbit P10   = P1^0;

// (P3 alternate)
sbit T1    = P3^5;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*-----------------------------------------------------------------------------
New-defined SFRs
-----------------------------------------------------------------------------*/

/* MG87FL(E)04 Extensions */

sfr AUXR   = 0x8E;
sfr SADDR  = 0xA9;
sfr SADEN  = 0xB9;
sfr IPL    = 0xB8;
sfr IPH    = 0xB7;
sfr WDTCR  = 0xE1;
sfr AUXR1  = 0xA2;
sfr XICON  = 0xC0;
sfr P4     = 0xE8;
sfr CKCON  = 0xC7;
sfr CKCON2 = 0xBF;
sfr CKCON3 = 0x8F;
sfr ACSR   = 0x97;
sfr P3WKPE = 0xD6;
sfr P1WKPE = 0xD7;
sfr CCON   = 0xD8;
sfr CMOD   = 0xD9;
sfr CCAP0L = 0xEA;
sfr CCAP0H = 0xFA;

// for ISP
sfr IFD    = 0xE2;
sfr IFADRH = 0xE3;
sfr IFADRL = 0xE4;
sfr IFMT   = 0xE5;
sfr SCMD   = 0xE6;
sfr ISPCR  = 0xE7;

// (SCON)
sbit FE    = SCON^7;

// (XICON)
sbit PTC   = XICON^7;
sbit PX2   = XICON^3;
sbit EX2   = XICON^2;
sbit IE2   = XICON^1;
sbit IT2   = XICON^0;

// (CCON)
sbit CF    = CCON^7;
sbit CR    = CCON^6;

// (P4)
sbit P43   = P4^3;

// (P4 alternate)
sbit INT2  = P4^3;

#endif