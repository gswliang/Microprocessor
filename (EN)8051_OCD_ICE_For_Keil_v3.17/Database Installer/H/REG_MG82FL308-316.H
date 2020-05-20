#ifndef __REG_MG82FL308_316_H
#define __REG_MG82FL308_316_H

// (System)
sfr ACC       = 0xE0;
sfr B         = 0xF0;
sfr SP        = 0x81;
sfr DPL       = 0x82;
sfr DPH       = 0x83;
sfr PSW       = 0xD0;

// (Interrupt)
sfr IE        = 0xA8;
sfr EIE1      = 0xAD;
sfr XIFLG     = 0xC0;
sfr IP0L      = 0xB8;
sfr IP0H      = 0xB7;
sfr EIP1L     = 0xAE;
sfr EIP1H     = 0xAF;

// (I/O Port)
sfr P0        = 0x80;
sfr P1        = 0x90;
sfr P2        = 0xA0;
sfr P3        = 0xB0;
sfr P4        = 0xE8;
sfr P5        = 0xF8;                            
sfr P6        = 0xC8;                            // Page F
sfr P7        = 0xD8;                            // Page F
sfr P0M0      = 0x93;
sfr P0M1      = 0x94;
sfr P1M0      = 0x91;
sfr P1M1      = 0x92;
sfr P2M0      = 0x95;
sfr P2M1      = 0x96;
sfr P3M0      = 0xB1;
sfr P3M1      = 0xB2;
sfr P4M0      = 0xB3;
sfr P4M1      = 0xB4;
sfr P5M0      = 0xB5;
sfr P5M1      = 0xB6;

// (Timer)
sfr TCON      = 0x88;
sfr TMOD      = 0x89;
sfr T2CON     = 0xC8;
sfr T2MOD     = 0xC9;
sfr RCAP2L    = 0xCA;
sfr RCAP2H    = 0xCB;
sfr TL0       = 0x8A;
sfr TH0       = 0x8C;
sfr TL1       = 0x8B;
sfr TH1       = 0x8D;
sfr TL2       = 0xCC;
sfr TH2       = 0xCD;

// (Serial Port)
sfr SCON      = 0x98;
sfr SBUF      = 0x99;
sfr SADDR     = 0xA9;
sfr SADEN     = 0xB9;

// (Keypad Interrupt)
sfr GPWKPE    = 0xD6;
sfr P1WKPE    = 0xD7;

// (PCA)
sfr CCON      = 0xD8;
sfr CMOD      = 0xD9;
sfr CCAP0H    = 0xFA;
sfr CCAP0L    = 0xEA;

// (Others)
sfr PCON0     = 0x87;
sfr PCON1     = 0x97;
sfr CKCON0    = 0xC7;
sfr CKCON1    = 0xBF;
sfr AUXR0     = 0x8E;
sfr AUXR1     = 0xA2;
sfr AUXR2     = 0xA3;
sfr SFRPI     = 0xAC;
sfr WDTCR     = 0xE1;
sfr XICON0    = 0xC1;
sfr XICON1    = 0xC2;
sfr ACCON     = 0x9E;
sfr ACMOD     = 0x9F;

// (ISP)
sfr ISPCR     = 0xE7;
sfr SCMD      = 0xE6;
sfr IFMT      = 0xE5;
sfr IFADRL    = 0xE4;
sfr IFADRH    = 0xE3;
sfr IFD       = 0xE2;

// (bits in PSW)
sbit CY       = PSW^7;
sbit AC       = PSW^6;
sbit F0       = PSW^5;
sbit RS1      = PSW^4;
sbit RS0      = PSW^3;
sbit OV       = PSW^2;
sbit F1       = PSW^1;
sbit P        = PSW^0;

// (bits in IE)
sbit EA       = IE^7;
sbit GF4      = IE^6;
sbit ET2      = IE^5;
sbit ES       = IE^4;
sbit ET1      = IE^3;
sbit EX1      = IE^2;
sbit ET0      = IE^1;
sbit EX0      = IE^0;

// (bits in IP0L)
sbit PX3L     = IP0L^7;
sbit PX2L     = IP0L^6;
sbit PT2      = IP0L^5;
sbit PS       = IP0L^4;
sbit PT1      = IP0L^3;
sbit PX1      = IP0L^2;
sbit PT0      = IP0L^1;
sbit PX0      = IP0L^0;

// (bits in SCON)
sbit FE       = SCON^7;
sbit SM0      = SCON^7;
sbit SM1      = SCON^6;
sbit SM2      = SCON^5;
sbit REN      = SCON^4;
sbit TB8      = SCON^3;
sbit RB8      = SCON^2;
sbit TI       = SCON^1;
sbit RI       = SCON^0;

// (bits in TCON)
sbit TF1      = TCON^7;
sbit TR1      = TCON^6;
sbit TF0      = TCON^5;
sbit TR0      = TCON^4;
sbit IE1      = TCON^3;
sbit IT1      = TCON^2;
sbit IE0      = TCON^1;
sbit IT0      = TCON^0;

// (bits in T2CON)
sbit TF2      = T2CON^7;
sbit EXF2     = T2CON^6;
sbit RCLK     = T2CON^5;
sbit TCLK     = T2CON^4;
sbit EXEN2    = T2CON^3;
sbit TR2      = T2CON^2;
sbit C_T2     = T2CON^1;
sbit CP_RL2   = T2CON^0;

// (bits in CCON)
sbit CF       = CCON^7;
sbit CR       = CCON^6;
sbit PWMEN    = CCON^3;

// (bits in XIFLG)
sbit IE5      = XIFLG^3;
sbit IE4      = XIFLG^2;
sbit IE3      = XIFLG^1;
sbit IE2      = XIFLG^0;

// (bits in P0)
sbit P07      = P0^7;
sbit P06      = P0^6;
sbit P05      = P0^5;
sbit P04      = P0^4;
sbit P03      = P0^3;
sbit P02      = P0^2;
sbit P01      = P0^1;
sbit P00      = P0^0;

// (bits in P1)
sbit P17      = P1^7;
sbit P16      = P1^6;
sbit P15      = P1^5;
sbit P14      = P1^4;
sbit P13      = P1^3;
sbit P12      = P1^2;
sbit P11      = P1^1;
sbit P10      = P1^0;

// (bits in P2)
sbit P27      = P2^7;
sbit P26      = P2^6;
sbit P25      = P2^5;
sbit P24      = P2^4;
sbit P23      = P2^3;
sbit P22      = P2^2;
sbit P21      = P2^1;
sbit P20      = P2^0;

// (bits in P3)
sbit P37      = P3^7;
sbit P36      = P3^6;
sbit P35      = P3^5;
sbit P34      = P3^4;
sbit P33      = P3^3;
sbit P32      = P3^2;
sbit P31      = P3^1;
sbit P30      = P3^0;

// (bits in P4)
sbit P46      = P4^6;
sbit P45      = P4^5;
sbit P44      = P4^4;
sbit P43      = P4^3;
sbit P42      = P4^2;
sbit P41      = P4^1;
sbit P40      = P4^0;

// (bits in P5)
sbit P57      = P5^7;
sbit P56      = P5^6;
sbit P55      = P5^5;
sbit P54      = P5^4;
sbit P53      = P5^3;
sbit P52      = P5^2;
sbit P51      = P5^1;
sbit P50      = P5^0;

// (bits in P6)
sbit P61      = P6^1;
sbit P60      = P6^0;

// (bits in P7)
sbit P77      = P7^7;
sbit P76      = P7^6;
sbit P75      = P7^5;
sbit P74      = P7^4;
sbit P73      = P7^3;
sbit P72      = P7^2;
sbit P71      = P7^1;
sbit P70      = P7^0;

// (bits in P1, alternate)
sbit T2       = P1^0;
sbit T2CKO    = P1^0;
sbit T2EX     = P1^1;
sbit AC_P13   = P1^1;
sbit AC_P12   = P1^2;
sbit AC_P11   = P1^3;
sbit AC_P10   = P1^4;
sbit AC_MI    = P1^5;
sbit RXD1     = P1^6;
sbit TXD1     = P1^7;

// (bits in P3, alternate)
sbit RXD      = P3^0;
sbit TXD      = P3^1;
sbit INT0     = P3^2;
sbit INT1     = P3^3;
sbit T0       = P3^4;
sbit T0CKO    = P3^4;
sbit T1       = P3^5;
sbit T1CKO    = P3^5;
sbit WR       = P3^6;
sbit RD       = P3^7;

// (bits in P4, alternate)
sbit INT3     = P4^2;
sbit INT2     = P4^3;

// (bits in P5, alternate)
sbit INT4     = P5^0;
sbit INT5     = P5^1;

// (bits in P6, alternate)
sbit CKO      = P6^0;

#endif