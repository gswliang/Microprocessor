#ifndef __REG_MG74PG1B08_H
#define __REG_MG74PG1B08_H

// (System)
sfr ACC       = 0xE0;
sfr B         = 0xF0;
sfr SP        = 0x81;
sfr DPL       = 0x82;
sfr DPH       = 0x83;
sfr PSW       = 0xD0;

// (Interrupt)
sfr SFIE      = 0x8E;
sfr IE        = 0xA8;
sfr XPIE1     = 0xAD;
sfr IP0L      = 0xB8;

// (I/O Port)
sfr P1        = 0x90;
sfr P3        = 0xB0;
sfr P1M0      = 0x91;
sfr P1M1      = 0x92;
sfr P3M0      = 0xB1;
sfr P3M1      = 0xB2;

// (Timer)
sfr TCON      = 0x88;
sfr TMOD      = 0x89;
sfr TL0       = 0x8A;
sfr TL1       = 0x8B;
sfr TH0       = 0x8C;
sfr TH1       = 0x8D;

// (Serial Port)
sfr S0CON     = 0x98;
sfr S0BUF     = 0x99;
sfr SCON      = 0x98;
sfr SBUF      = 0x99;

// (ADC)

// (Keypad Interrupt)
sfr KBIEN0      = 0xD6;

// (SPI)

// (PCA)
sfr CCON      = 0xD8;
sfr CMOD      = 0xD9;
sfr CCAPM0    = 0xDA;
sfr CLRL      = 0xCE;
sfr CHRL      = 0xCF;
sfr CL        = 0xE9;
sfr CH        = 0xF9;
sfr CCAP0L    = 0xEA;
sfr CCAP0H    = 0xFA;

// (TWSI)

// (Clock)
sfr CKCON0    = 0xC7;
sfr CKCON2    = 0xBB;

// (USB)
sfr USBDAT    = 0xAA;
sfr USBADR    = 0xAB;
#define UDCON0   0xC0
#define UDCON1   0xC1
#define UPCON    0xC9
#define UADDR    0xD8

#define IEN      0xD9
#define UIE      0xDA
#define UIFLG    0xDB
#define UIE1     0xDC
#define UIFLG1   0xDD

#define EPINDEX  0xF1
#define EPCON    0xE1
#define RXSTAT   0xE2
#define RXDAT    0xE3
#define RXCON    0xE4
#define RXCNT    0xE6

#define TXSTAT   0xF2
#define TXDAT    0xF3
#define TXCON    0xF4
#define TXCNT    0xF6

#define SIOCTL   0xC2

// (Others)
sfr BOREV     = 0x96;
sfr PCON0     = 0x87;
sfr PCON1     = 0x97;
sfr PCON2     = 0xBA;
sfr AUXR0     = 0xA1;
sfr AUXR1     = 0xA2;
sfr AUXR2     = 0xA3;
sfr DCON0     = 0xBC;
sfr SPCON0    = 0xBD;
sfr WDTCR     = 0xE1;
sfr SCMD      = 0xE6;


// (bits in PSW)
sbit CY       = PSW^7;
sbit AC       = PSW^6;
sbit F0       = PSW^5;
sbit RS1      = PSW^4;
sbit RS0      = PSW^3;
sbit OV       = PSW^2;
sbit F1       = PSW^1;
sbit P        = PSW^0;

// (bits in SFIE)
#define SIDFIE   0x80
#define KBIFIE   0x08
#define BOF1IE   0x04
#define BOF0IE   0x02
#define WDTFIE   0x01

// (bits in IE)
sbit EA       = IE^7;
sbit EXPIE1   = IE^5;
sbit ES       = IE^4;
sbit ET1      = IE^3;
sbit EX1      = IE^2;
sbit ET0      = IE^1;
sbit EX0      = IE^0;

// (bits in XPIE1)
#define ESF      0x01
#define EPCA     0x02
#define EUSB     0x80

// (bits in IP0L)
sbit URXR     = IP0L^7;
sbit PXPI1L   = IP0L^5;
sbit PSL      = IP0L^4;
sbit PT1L     = IP0L^3;
sbit PX1L     = IP0L^2;
sbit PT0L     = IP0L^1;
sbit PX0L     = IP0L^0;

// (bits in P1)
sbit P17      = P1^7;
sbit P16      = P1^6;
sbit P15      = P1^5;
sbit P14      = P1^4;
sbit P13      = P1^3;
sbit P12      = P1^2;
sbit P11      = P1^1;
sbit P10      = P1^0;

// (bits in P3)
sbit P37      = P3^7;
sbit P36      = P3^6;
sbit P32      = P3^2;
sbit P31      = P3^1;
sbit P30      = P3^0;

// (bits in TCON)
sbit TF1      = TCON^7;
sbit TR1      = TCON^6;
sbit TF0      = TCON^5;
sbit TR0      = TCON^4;
sbit IE1      = TCON^3;
sbit IT1      = TCON^2;
sbit IE0      = TCON^1;
sbit IT0      = TCON^0;

// (bits in TMOD)
#define T1GATE   0x80
#define T1CT     0x40
#define T1M1     0x20
#define T1M0     0x10
#define T0GATE   0x08
#define T0CT     0x04
#define T0M1     0x02
#define T0M0     0x01

// (bits in S0CON)
sbit FE       = S0CON^7;
sbit SM00     = S0CON^7;
sbit SM10     = S0CON^6;
sbit SM20     = S0CON^5;
sbit REN0     = S0CON^4;
sbit TB80     = S0CON^3;
sbit RB80     = S0CON^2;
sbit TI0      = S0CON^1;
sbit RI0      = S0CON^0;

sbit SM0      = SCON^7;
sbit SM1      = SCON^6;
sbit SM2      = SCON^5;
sbit REN      = SCON^4;
sbit TB8      = SCON^3;
sbit RB8      = SCON^2;
sbit TI       = SCON^1;
sbit RI       = SCON^0;

// (bits in CCON)
sbit CF       = CCON^7;
sbit CR       = CCON^6;
sbit CCF0     = CCON^0;

// (bits in CMOD)
#define CIDL     0x80
#define CPS2     0x08
#define CPS1     0x04
#define CPS0     0x02
#define ECF      0x01

// (bits in CCAPM0)
#define P0INV    0x80
#define ECOM0    0x40
#define CAPP0    0x20
#define CAPN0    0x10
#define MAT0     0x08
#define TOG0     0x04
#define PWM0     0x02
#define ECCF0    0x01

// (bits in CKCON0)
#define CCKS1    0x20
#define CCKS0    0x10
#define SCKS2    0x04
#define SCKS1    0x02
#define SCKS0    0x01

// (bits in CKCON2)
#define IHRCOE   0x10
#define MCKS1    0x08
#define MCKS0    0x04
#define OSCS1    0x02
#define OSCS0    0x01

// (bits in USBADR)
#define UBSY     0x80

// (bits in UDCON0)
#define FRST     0x10
#define SCWKP    0x20
#define EP2DIR   0x80

// (bits in UDCON1)
#define RPD1M    0x02
#define NAKEP0   0x04
#define NAKEP1   0x08
#define STLDEN   0x10
#define SETNO    0x20

// (bits in UPCON)
#define USUS     0x01
#define URSM     0x02
#define URST     0x04
#define URSTWKP  0x08
#define URWU     0x20
#define CONEN    0x80

// (bits in IEN)
#define EF       0x02
#define EFSR     0x04

// (bits in UIE)
#define UTXIE0   0x01
#define URXIE0   0x02
#define UTXIE1   0x04
#define UTXIE2   0x10
#define URXIE2   0x10
#define SOFIE    0x80

// (bits in UIFLG)
#define UTXD0    0x01
#define URXD0    0x02
#define UTXD1    0x04
#define UTXD2    0x10
#define URXD2    0x10
#define SOFIF    0x80

// (bits in UIE1)
#define UTXIE3   0x01
#define TXNAKE   0x40
#define RXNAKE   0x80

// (bits in UIFLG1)
#define UTXD3    0x01
#define TXNAK    0x40
#define RXNAK    0x80

// (bits in EPCON)
#define TXEPEN   0x01
#define TXISO    0x02
#define RXEPEN   0x04
#define TXDBM    0x10
#define TXSTL    0x40
#define RXSTL    0x80

// (bits in RXSTAT)
#define RXSOVW   0x08
#define EDOVW    0x10
#define STOVW    0x20
#define RXSETUP  0x40
#define RXSEQ    0x80

// (bits in RXCON)
#define RXFFRC   0x10
#define RXCLR    0x80

// (bits in TXSTAT)
#define TXSOVW   0x08
#define TXSEQ    0x80

// (bits in TXCON)
#define TXFFRC   0x10
#define TXCLR    0x80

// (bits in SIOCTL)
#define DPI      0x80
#define DMI      0x40

// (bits in PCON0)
#define SMOD1    0x80
#define SMOD0    0x40
#define POF      0x10
#define PD       0x02
#define IDL      0x01

// (bits in PCON1)
#define SWRF     0x80
#define EXRF     0x40
#define KBIF     0x08
#define BOF1     0x04
#define BOF0     0x02
#define WDTF     0x01

// (bits in PCON2)
#define AWBOD1   0x80
#define EBOD1    0x40
#define BO1RE    0x08
#define BO0RE    0x04
#define RMLS     0x01

// (bits in AUXR0)
#define P17OC1   0x80
#define P17OC0   0x40
#define T0XL     0x10
#define P1FS1    0x08
#define P1FS0    0x04
#define INT1H    0x02
#define INT0H    0x01

// (bits in AUXR1)
#define INT1IS1  0x80
#define INT1IS0  0x40
#define INT0IS0  0x20
#define STAF     0x08
#define STOF     0x04
#define PTCKOE   0x02

// (bits in AUXR2)
#define UTIE     0x80
#define CPHA     0x80
#define BTI      0x40
#define SSIG     0x40
#define URM0X3   0x20
#define SMOD2    0x20
#define SM3      0x10
#define T1X12    0x08
#define T0X12    0x04
#define T1CKOE   0x02
#define T0CKOE   0x01

// (bits in DCON0)
#define WCKS     0x80
#define USBR     0x40
#define ENUSB    0x20
#define ENCKM    0x10
#define CKMIS1   0x08
#define CKMIS0   0x04
#define RSTIO    0x02
#define SWRST    0x01

// (bits in SPCON0)
#define WRCTL    0x10
#define CKCTL0   0x04
#define PWCTL1   0x02
#define PWCTL0   0x01

// (bits in WDTCR)
#define WREN     0x80
#define NSW      0x40
#define ENW      0x20
#define CLRW     0x10
#define WIDL     0x08
#define PS2      0x04
#define PS1      0x02
#define PS0      0x01


#endif


