#ifndef __REG_MG82FL632_664_H
#define __REG_MG82FL632_664_H

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
sfr XICON     = 0xC0;
sfr IP        = 0xB8;
sfr IP0L      = 0xB8;
sfr IPH       = 0xB7;
sfr IP0H      = 0xB7;
sfr EIP1L     = 0xAE;
sfr EIP1H     = 0xAF;

// (I/O Port)
sfr P0        = 0x80;
sfr P1        = 0x90;
sfr P2        = 0xA0;
sfr P3        = 0xB0;
sfr P0M0      = 0x93;
sfr P1M0      = 0x91;
sfr P2M0      = 0x95;
sfr P3M0      = 0xB1;
sfr P3M1      = 0xB2;

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
sfr S0CON     = 0x98;
sfr S1CON     = 0x98;
sfr SBUF      = 0x99;
sfr S0BUF     = 0x99;
sfr S1BUF     = 0x99;
sfr SADDR     = 0xA9;
sfr SADEN     = 0xB9;
sfr SCFG      = 0x9A;
sfr S1BRT     = 0x9A;

// (Keypad Interrupt)
sfr P3WKPE    = 0xD6;
sfr P1WKPE    = 0xD7;


// (Timer P)
sfr TPFLG     = 0xF1;
sfr TPCON     = 0xD9;
sfr TPMOD0    = 0xDA;
sfr TPMOD1    = 0xDB;
sfr TPMOD2    = 0xDC;
sfr TPMOD3    = 0xDD;
sfr TPMOD4    = 0xDE;
sfr TPL0      = 0xEA;
sfr TPL1      = 0xEB;
sfr TPL2      = 0xEC;
sfr TPL3      = 0xED;
sfr TPL4      = 0xEE;
sfr TPH0      = 0xFA;
sfr TPH1      = 0xFB;
sfr TPH2      = 0xFC;
sfr TPH3      = 0xFD;
sfr TPH4      = 0xFE;

// (Others)
sfr PCON      = 0x87;
sfr PCON0     = 0x87;
sfr PCON1     = 0x97;
sfr AUXR1     = 0xA2;
sfr AUXR2     = 0xA3;
sfr CKCON0    = 0xC7;
sfr CKCON1    = 0xBF;
sfr WDTCR     = 0xE1;
sfr PUCON0    = 0xB4;
sfr SFRPI     = 0xAC;

// (ISP)
sfr ISPCR     = 0xE7;
sfr IFMT      = 0xE5;
sfr IFD       = 0xE2;
sfr IFADRH    = 0xE3;
sfr IFADRL    = 0xE4;
sfr SCMD      = 0xE6;

// (bits in PSW)
sbit CY       = PSW^7;
sbit AC       = PSW^6;
sbit F0       = PSW^5;
sbit RS1      = PSW^4;
sbit RS0      = PSW^3;
sbit OV       = PSW^2;
sbit F1       = PSW^1;//
sbit P        = PSW^0;

// (bits in IE)
sbit EA       = IE^7;
sbit ET2      = IE^5;
sbit ES       = IE^4;
sbit ET1      = IE^3;
sbit EX1      = IE^2;
sbit ET0      = IE^1;
sbit EX0      = IE^0;

// (bits in IPL)
sbit PX3L     = IP^7;
sbit PX2L     = IP^6;
sbit PT2L     = IP^5;
sbit PSL      = IP^4;
sbit PT1L     = IP^3;
sbit PX1L     = IP^2;
sbit PT0L     = IP^1;
sbit PX0L    = IP^0;

// (bits in SCON)
sbit FE       = SCON^7;
sbit SM0      = SCON^7;
sbit SM00     = SCON^7;
sbit SM01     = SCON^7;
sbit SM1      = SCON^6;
sbit SM10     = SCON^6;
sbit SM11     = SCON^6;
sbit SM2      = SCON^5;
sbit SM20     = SCON^5;
sbit SM21     = SCON^5;
sbit REN      = SCON^4;
sbit REN0     = SCON^4;
sbit REN1     = SCON^4;
sbit TB8      = SCON^3;
sbit TB80     = SCON^3;
sbit TB81     = SCON^3;
sbit RB8      = SCON^2;
sbit RB80     = SCON^2;
sbit RB81     = SCON^2;
sbit TI       = SCON^1;
sbit TI0      = SCON^1;
sbit TI1      = SCON^1;
sbit RI       = SCON^0;
sbit RI0      = SCON^0;
sbit RI1      = SCON^0;

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

// (bits in XICON)
sbit IT3H      = XICON^7;
sbit EX3      = XICON^6;
sbit IE3      = XICON^5;
sbit IT3      = XICON^4;
sbit IT2H     = XICON^3;
sbit EX2      = XICON^2;
sbit IE2      = XICON^1;
sbit IT2      = XICON^0;

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

// (bits in P0, alternate)
sbit INT2     = P0^2;
sbit INT3     = P0^3;

// (bits in P1, alternate)
sbit T2EX     = P1^1;
sbit T2       = P1^0;
sbit TPO0     = P1^2;
sbit TPO1     = P1^3;
sbit TPO2     = P1^4;
sbit TPO3     = P1^5;
sbit TPO4     = P1^6;
sbit TPO5     = P1^7;

// (bits in P2, alternate)
sbit TXD1     = P2^1;
sbit RXD1     = P2^0;

// (bits in P3, alternate)
sbit RD       = P3^7;
sbit WR       = P3^6;
sbit T1       = P3^5;
sbit T0       = P3^4;
sbit INT1     = P3^3;
sbit INT0     = P3^2;
sbit TXD      = P3^1;
sbit TXD0     = P3^1;
sbit RXD      = P3^0;
sbit RXD0     = P3^0;
sbit T1CKO    = P3^5;
sbit T0CKO    = P3^4;

#endif