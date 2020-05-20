#ifndef __REG_MG20FEL809_H
#define __REG_MG20FEL809_H
sfr SP             = 0x81;

sfr DPL            = 0x82;

sfr DPH            = 0x83;

sfr PCON0          = 0x87;
// (bits in PCON0)
#define SMOD1        0x80
#define SMOD0        0x40
#define GF           0x20
#define POF          0x10
#define GF1          0x08
#define GF0          0x04
#define PD           0x02
#define IDL          0x01

sfr TCON           = 0x88;
// (bits in TCON)
sbit TF1           = TCON^7;
sbit TR1           = TCON^6;
sbit TF0           = TCON^5;
sbit TR0           = TCON^4;
sbit IE1           = TCON^3;
sbit IT1           = TCON^2;
sbit IE0           = TCON^1;
sbit IT0           = TCON^0;

sfr TMOD           = 0x89;
// (bits in TMOD)
#define T1GATE       0x80
#define T1CT         0x40
#define T1M1         0x20
#define T1M0         0x10
#define T0GATE       0x08
#define T0CT         0x04
#define T0M1         0x02
#define T0M0         0x01

sfr TL0            = 0x8A;

sfr TL1            = 0x8B;

sfr TH0            = 0x8C;

sfr TH1            = 0x8D;

sfr SFIE           = 0x8E;
// (bits in SFIE)
#define UTIE         0x80
#define SIDFIE       0x40
#define OTDFIE       0x04
#define BOF0IE       0x02
#define WDTFIE       0x01

sfr P1             = 0x90;
// (bits in P1)
sbit P16           = P1^6;
sbit P15           = P1^5;
sbit P14           = P1^4;
sbit P12           = P1^2;
sbit P11           = P1^1;
sbit P10           = P1^0;

sfr BOREV          = 0x96;
// (bits in BOREV)
#define BOREV7       0x80
#define BOREV6       0x40
#define BOREV5       0x20
#define BOREV4       0x10
#define BOREV3       0x08
#define BOREV2       0x04
#define BOREV1       0x02
#define BOREV0       0x01

sfr PCON1          = 0x97;
// (bits in PCON1)
#define SWRF         0x80
#define EXRF         0x40
#define OTDF         0x04
#define BOF0         0x02
#define WDTF         0x01

sfr SCON           = 0x98;
// (bits in SCON)
sbit SM0_FE        = SCON^7;
sbit SM1           = SCON^6;
sbit SM2           = SCON^5;
sbit REN           = SCON^4;
sbit TB8           = SCON^3;
sbit RB8           = SCON^2;
sbit Ti            = SCON^1;
sbit RI            = SCON^0;

sfr SBUF           = 0x99;

sfr P2             = 0xA0;
// (bits in P2)
sbit P25           = P2^5;
sbit P24           = P2^4;
sbit P22           = P2^2;
sbit P21           = P2^1;
sbit P20           = P2^0;

sfr AUXR0          = 0xA1;
// (bits in AUXR0)
#define LEDOE        0x80
#define PBCS         0x40
#define SPIPS        0x20
#define T0XL         0x10
#define TXPS         0x08
#define RXPS         0x04
#define INT1H        0x02
#define INT0H        0x01

sfr AUXR1          = 0xA2;
// (bits in AUXR1)
#define INT1IS1      0x80
#define INT1IS0      0x40
#define INT0IS0      0x20
#define XTOR         0x10
#define STAF         0x08
#define STOF         0x04
#define P36OP0       0x01

sfr AUXR2          = 0xA3;
// (bits in AUXR2)
#define URXR         0x80
#define BTI          0x40
#define URM0X3       0x20
#define SM3          0x10
#define T1X12        0x08
#define T0X12        0x04
#define T1CKOE       0x02
#define T0CKOE       0x01

sfr IE             = 0xA8;
// (bits in IE)
sbit EA            = IE^7;
sbit ESF           = IE^6;
sbit ES            = IE^4;
sbit ET1           = IE^3;
sbit EX1           = IE^2;
sbit ET0           = IE^1;
sbit EX0           = IE^0;

sfr SADDR          = 0xA9;

sfr P3             = 0xB0;
// (bits in P3)
sbit P36           = P3^6;
sbit P35           = P3^5;
sbit P34           = P3^4;
sbit P33           = P3^3;
sbit P32           = P3^2;
sbit P31           = P3^1;
sbit P30           = P3^0;

sfr P3M0           = 0xB1;
// (bits in P3M0)
#define P3M06        0x40
#define P3M05        0x20
#define P3M04        0x10
#define P3M03        0x08
#define P3M02        0x04
#define P3M01        0x02
#define P3M00        0x01

sfr P3M1           = 0xB2;
// (bits in P3M1)
#define P3M16        0x40
#define P3M15        0x20
#define P3M14        0x10
#define P3M13        0x08
#define P3M12        0x04
#define P3M11        0x02
#define P3M10        0x01

sfr IP0H           = 0xB7;
// (bits in IP0H)
#define PSFH         0x40
#define PSH          0x10
#define PT1H         0x08
#define PX1H         0x04
#define PT0H         0x02
#define PX0H         0x01

sfr IP0L           = 0xB8;
// (bits in IP0L)
sbit PSFL          = IP0L^6;
sbit PSL           = IP0L^4;
sbit PT1L          = IP0L^3;
sbit PX1L          = IP0L^2;
sbit PT0L          = IP0L^1;
sbit PX0L          = IP0L^0;

sfr SADEN          = 0xB9;
// (bits in SADEN)
#define CASE         0x04
#define CPHA         0x02
#define SSIG         0x01

sfr CKCON0         = 0xC7;
// (bits in CKCON0)
#define AFS          0x80
#define SCKS2        0x04
#define SCKS1        0x02
#define SCKS0        0x01

sfr PSW            = 0xD0;
// (bits in PSW)
sbit CY            = PSW^7;
sbit AC            = PSW^6;
sbit F0            = PSW^5;
sbit RS1           = PSW^4;
sbit RS0           = PSW^3;
sbit OV            = PSW^2;
sbit F1            = PSW^1;
sbit P             = PSW^0;

sfr PAOE1          = 0xD1;
// (bits in PAOE1)
#define L7OP3        0x80
#define L6OP3        0x40
#define P35OP3       0x20
#define P3INV        0x10
#define L5OP2        0x08
#define L4OP2        0x04
#define P34OP2       0x02
#define P2INV        0x01

sfr IAPLB          = 0xDC;
// (bits in IAPLB)
#define IAPLB3       0x10
#define IAPLB2       0x08
#define IAPLB1       0x04
#define IAPLB0       0x02

sfr CKCON2         = 0xDD;
// (bits in CKCON2)
#define XTGS1        0x80
#define XTGS0        0x40
#define XTALE        0x20
#define IHRCOE       0x10
#define OSCS1        0x02
#define OSCS0        0x01

sfr DCON0          = 0xDE;
// (bits in DCON0)
#define HSE          0x80
#define IAPO         0x40
#define AWBOD0       0x20
#define BO0RE        0x10
#define RSTIO        0x02

sfr SPCON0         = 0xDF;
// (bits in SPCON0)
#define WRCTL        0x10
#define CKCTL0       0x04
#define PWCTL1       0x02
#define PWCTL0       0x01

sfr ACC            = 0xE0;
// (bits in ACC)
sbit ACC7          = ACC^7;
sbit ACC6          = ACC^6;
sbit ACC5          = ACC^5;
sbit ACC4          = ACC^4;
sbit ACC3          = ACC^3;
sbit ACC2          = ACC^2;
sbit ACC1          = ACC^1;
sbit ACC0          = ACC^0;

sfr WDTCR          = 0xE1;
// (bits in WDTCR)
#define WREN         0x80
#define NSW          0x40
#define ENW          0x20
#define CLRW         0x10
#define WIDL         0x08
#define PS2          0x04
#define PS1          0x02
#define PS0          0x01

sfr IFD            = 0xE2;

sfr IFADRH         = 0xE3;

sfr IFADRL         = 0xE4;

sfr IFMT           = 0xE5;
// (bits in IFMT)
#define MS7          0x80
#define MS6          0x40
#define MS5          0x20
#define MS4          0x10
#define MS3          0x08
#define MS2          0x04
#define MS1          0x02
#define MS0          0x01

sfr SCMD           = 0xE6;

sfr ISPCR          = 0xE7;
// (bits in ISPCR)
#define ISPEN        0x80
#define SWBS         0x40
#define SWRST        0x20
#define CFAIL        0x10
#define DATM2        0x04
#define DATM1        0x02
#define DATM0        0x01

sfr B              = 0xF0;
// (bits in B)
sbit F7H           = B^7;
sbit F6H           = B^6;
sbit F5H           = B^5;
sbit F4H           = B^4;
sbit F3H           = B^3;
sbit F2H           = B^2;
sbit F1H           = B^1;
sbit F0H           = B^0;

sfr PAOE           = 0xF1;
// (bits in PAOE)
#define L3OP1        0x80
#define L2OP1        0x40
#define P33OP1       0x20
#define P1INV        0x10
#define L1OP0        0x08
#define L0OP0        0x04
#define P32OP0       0x02
#define P0INV        0x01

#endif
