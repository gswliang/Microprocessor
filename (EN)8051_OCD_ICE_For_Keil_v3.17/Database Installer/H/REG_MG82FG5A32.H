#ifndef __REG_MG82FG5A32_H
#define __REG_MG82FG5A32_H
// (System)
sfr ACC            = 0xE0;
sfr B              = 0xF0;
sfr SP             = 0x81;
sfr DPL            = 0x82;
sfr DPH            = 0x83;

sfr PSW            = 0xD0;
// (PSW)
sbit CY            = PSW^7;
sbit AC            = PSW^6;
sbit F0            = PSW^5;
sbit RS1           = PSW^4;
sbit RS0           = PSW^3;
sbit OV            = PSW^2;
sbit F1            = PSW^1;
sbit P             = PSW^0;

// (I/O Port)
sfr P0             = 0x80;
// (P0)
sbit P07           = P0^7;
sbit P06           = P0^6;
sbit P05           = P0^5;
sbit P04           = P0^4;
sbit P03           = P0^3;
sbit P02           = P0^2;
sbit P01           = P0^1;
sbit P00           = P0^0;
// (P0 alternate)
sbit AD7           = P0^7;
sbit AD6           = P0^6;
sbit AD5           = P0^5;
sbit AD4           = P0^4;
sbit AD3           = P0^3;
sbit AD2           = P0^2;
sbit AD1           = P0^1;
sbit AD0           = P0^0;

sbit KBI7          = P0^7;
sbit KBI6          = P0^6;
sbit KBI5          = P0^5;
sbit KBI4          = P0^4;
sbit KBI3          = P0^3;
sbit KBI2          = P0^2;
sbit KBI1          = P0^1;
sbit KBI0          = P0^0;

sbit T3            = P0^1;
sbit T3CKO         = P0^1;
sbit T3EX          = P0^0;

sfr P1             = 0x90;
// (P1)
sbit P17           = P1^7;
sbit P16           = P1^6;
sbit P15           = P1^5;
sbit P14           = P1^4;
sbit P13           = P1^3;
sbit P12           = P1^2;
sbit P11           = P1^1;
sbit P10           = P1^0;
// (P1 alternate)
sbit AIN7          = P1^7;
sbit AIN6          = P1^6;
sbit AIN5          = P1^5;
sbit AIN4          = P1^4;
sbit AIN3          = P1^3;
sbit AIN2          = P1^2;
sbit AIN1          = P1^1;
sbit AIN0          = P1^0;  

sbit SPICLK        = P1^7;
sbit MISO          = P1^6;
sbit MOSI          = P1^5;
sbit nSS           = P1^4;
sbit TXD1          = P1^3;
sbit RXD1          = P1^2;
sbit T2EX          = P1^1;
sbit T2            = P1^0;
sbit T2CKO         = P1^0;

sfr P2             = 0xA0;
// (P2)
sbit P27           = P2^7;
sbit P26           = P2^6;
sbit P25           = P2^5;
sbit P24           = P2^4;
sbit P23           = P2^3;
sbit P22           = P2^2;
sbit P21           = P2^1;
sbit P20           = P2^0;
// (P2 alternate)
sbit CEX5          = P2^7;
sbit CEX4          = P2^6;
sbit CEX3          = P2^5;
sbit CEX2          = P2^4;
sbit CEX1          = P2^3;
sbit CEX0          = P2^2;
sbit ECI           = P2^1;
sbit S1CKO         = P2^0;

sfr P3             = 0xB0;
// (P3)
sbit P37           = P3^7;
sbit P36           = P3^6;
sbit P35           = P3^5;
sbit P34           = P3^4;
sbit P33           = P3^3;
sbit P32           = P3^2;
sbit P31           = P3^1;
sbit P30           = P3^0;
// (P3 alternate)
sbit nRD           = P3^7;
sbit nWR           = P3^6;
sbit T1            = P3^5;
sbit T1CKO         = P3^5;
sbit T0            = P3^4;
sbit T0CKO         = P3^4;
sbit nINT1         = P3^3;
sbit nINT0         = P3^2;
sbit TXD0          = P3^1;
sbit RXD0          = P3^0;

sfr P4             = 0xE8;
#define P4_P         0xE8   // for used in page P   
// (P4)
sbit P46           = P4^6;
sbit P45           = P4^5;
sbit P44           = P4^4;
sbit P43           = P4^3;
sbit P42           = P4^2;
sbit P41           = P4^1;
sbit P40           = P4^0;
// (P4 alternate)
sbit ALE           = P4^6;
sbit OCD_SDA       = P4^5;
sbit OCD_SCL       = P4^4;
sbit nINT2         = P4^3;
sbit nINT3         = P4^2;
sbit TWI_SDA       = P4^1;
sbit TWI_SCL       = P4^0;

sfr P5             = 0xF8;
// (P5)
sbit P57           = P5^7;
sbit P56           = P5^6;
sbit P55           = P5^5;
sbit P54           = P5^4;
sbit P53           = P5^3;
sbit P52           = P5^2;
sbit P51           = P5^1;
sbit P50           = P5^0;

sfr P6             = 0xF8;                     
#define P6_P         0xF8   // for used in page P
// (P6)
sbit P67           = P6^7;
sbit P66           = P6^6;
sbit P65           = P6^5;
sbit P64           = P6^4;
sbit P63           = P6^3;
sbit P62           = P6^2;
sbit P61           = P6^1;
sbit P60           = P6^0;
// (P6 alternate)
sbit XTAL1         = P6^1;
sbit ICKO          = P6^0;
sbit ECKI          = P6^0;
sbit XTAL2         = P6^0;

// (Interrupt)
sfr IE             = 0xA8;
// (IE)
sbit EA            = IE^7;
sbit GF4           = IE^6;
sbit ET2           = IE^5;
sbit ES0           = IE^4;
sbit ET1           = IE^3;
sbit EX1           = IE^2;
sbit ET0           = IE^1;
sbit EX0           = IE^0;

sfr IP0L           = 0xB8;
sfr IP             = 0xB8;  // for compatible
// (IP0L)
sbit PX3L          = IP0L^7;
sbit PX2L          = IP0L^6;
sbit PT2L          = IP0L^5;
sbit PSL           = IP0L^4;
sbit PT1L          = IP0L^3;
sbit PX1L          = IP0L^2;
sbit PT0L          = IP0L^1;
sbit PX0L          = IP0L^0;

sfr IP0H           = 0xB7;
sfr IPH            = 0xB7;  // for compatible
// (IP0H)
#define PX3H         0x80
#define PX2H         0x40
#define PT2H         0x20
#define PSH          0x10
#define PT1H         0x08
#define PX1H         0x04
#define PT0H         0x02
#define PX0H         0x01

sfr EIE1           = 0xAD;
sfr AUXIE          = 0xAD;  // for compatible
// (EIE1)  
#define ETWSI        0x40
#define EKB          0x20
#define ES1          0x10 
#define ESF          0x08 
#define EPCA         0x04 
#define EADC         0x02
#define ESPI         0x01

sfr EIE2           = 0xA5;
// (EIE2)
#define ET3          0x01

sfr XICON          = 0xC0;
// (XICON)
sbit INT3H         = XICON^7;
sbit EX3           = XICON^6;
sbit IE3           = XICON^5;
sbit IT3           = XICON^4;
sbit INT2H         = XICON^3;
sbit EX2           = XICON^2;
sbit IE2           = XICON^1;
sbit IT2           = XICON^0;

sfr EIP1L          = 0xAE;
sfr AUXIP          = 0xAE;  // for compatible
// (EIP1L)
#define PTWIL        0x40
#define PKBL         0x20
#define PS1L         0x10
#define PSFL         0x08
#define PPCAL        0x04
#define PADCL        0x02
#define PSPIL        0x01

sfr EIP2L          = 0xA6;
// (EIP2L)
#define PT3L         0x01

sfr EIP1H          = 0xAF;
sfr AUXIPH         = 0xAF;  // for compatible
// (EIP1h)
#define PTWIH        0x40
#define PKBH         0x20
#define PS1H         0x10
#define PSFH         0x08
#define PPCAH        0x04
#define PADCH        0x02
#define PSPIH        0x01

sfr EIP2H          = 0xA7;
// (EIP2H)
#define PT3H         0x01

sfr P0M0           = 0x93;
// (P0M0)
#define P0M07        0x80
#define P0M06        0x40
#define P0M05        0x20
#define P0M04        0x10
#define P0M03        0x08
#define P0M02        0x04
#define P0M01        0x02
#define P0M00        0x01

sfr P1M0           = 0x91;
// (P1M0)
#define P1M07        0x80
#define P1M06        0x40
#define P1M05        0x20
#define P1M04        0x10
#define P1M03        0x08
#define P1M02        0x04
#define P1M01        0x02
#define P1M00        0x01

sfr P1AIO          = 0x92;
// (P1AIO)
#define P17AIO       0x80
#define P16AIO       0x40
#define P15AIO       0x20
#define P14AIO       0x10
#define P13AIO       0x08
#define P12AIO       0x04
#define P11AIO       0x02
#define P10AIO       0x01

sfr P2M0           = 0x95;
// (P2M0)
#define P2M07        0x80
#define P2M06        0x40
#define P2M05        0x20
#define P2M04        0x10
#define P2M03        0x08
#define P2M02        0x04
#define P2M01        0x02
#define P2M00        0x01

sfr P3M0           = 0xB1;
// (P3M0)
#define P3M07        0x80
#define P3M06        0x40
#define P3M05        0x20
#define P3M04        0x10
#define P3M03        0x08
#define P3M02        0x04
#define P3M01        0x02
#define P3M00        0x01

sfr P3M1           = 0xB2;
// (P3M1)
#define P3M17        0x80
#define P3M16        0x40
#define P3M15        0x20
#define P3M14        0x10
#define P3M13        0x08
#define P3M12        0x04
#define P3M11        0x02
#define P3M10        0x01

sfr P4M0           = 0xB3;
// (P4M0)
#define P4M06        0x40
#define P4M05        0x20
#define P4M04        0x10
#define P4M03        0x08
#define P4M02        0x04
#define P4M01        0x02
#define P4M00        0x01

sfr PUCON0         = 0xB4;
// (PUCON0)
#define P4PU1        0x80
#define P4PU0        0x40
#define P2PU1        0x20
#define P2PU0        0x10
#define P1PU1        0x08
#define P1PU0        0x04
#define P0PU1        0x02
#define P0PU0        0x01

sfr PUCON1         = 0xB4;                      
// (PUCON1)
#define P6PU1        0x08
#define P6PU0        0x04
#define P5PU1        0x02
#define P5PU0        0x01

sfr P5M0           = 0xB5;
// (P5M0)
#define P5M07        0x80
#define P5M06        0x40
#define P5M05        0x20
#define P5M04        0x10
#define P5M03        0x08
#define P5M02        0x04
#define P5M01        0x02
#define P5M00        0x01

sfr P6M0           = 0xB5;                       
// (P6M0)
#define P6M07        0x80
#define P6M06        0x40
#define P6M05        0x20
#define P6M04        0x10
#define P6M03        0x08
#define P6M02        0x04
#define P6M01        0x02
#define P6M00        0x01

// (Timer)
sfr TCON           = 0x88;
// (TCON)
sbit TF1           = TCON^7;
sbit TR1           = TCON^6;
sbit TF0           = TCON^5;
sbit TR0           = TCON^4;
sbit IE1           = TCON^3;
sbit IT1           = TCON^2;
sbit IE0           = TCON^1;
sbit IT0           = TCON^0;

sfr TMOD           = 0x89;
// (TMOD)
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

sfr T2CON          = 0xC8;
// (T2CON)
sbit TF2           = T2CON^7;
sbit EXF2          = T2CON^6;
sbit RCLK          = T2CON^5;
sbit TCLK          = T2CON^4;
sbit EXEN2         = T2CON^3;
sbit TR2           = T2CON^2;
sbit C_T2          = T2CON^1;
sbit CP_RL2        = T2CON^0;

sfr T3CON          = 0xC8;                       
// (T3CON)
sbit TF3           = T3CON^7;
sbit EXF3          = T3CON^6;
sbit EXEN3         = T3CON^3;
sbit TR3           = T3CON^2;
sbit C_T3          = T3CON^1;

sfr T2MOD          = 0xC9;
// (T2MOD)
#define T2EXH        0x20
#define T2X12        0x10
#define T2OE         0x02
#define DCEN2        0x01

sfr T3MOD          = 0xC9;                     
// (T3MOD)
#define T3SPL        0x80
#define TL3X12       0x40
#define T3EXH        0x20
#define T3X12        0x10
#define T3OE         0x02

sfr RCAP2L         = 0xCA;
sfr RCAP3L         = 0xCA;                      
sfr RCAP2H         = 0xCB;
sfr RCAP3H         = 0xCB;                      
sfr TL2            = 0xCC;
sfr TL3            = 0xCC;                      
sfr TH2            = 0xCD;
sfr TH3            = 0xCD;                      

// (Serial Port)
sfr S0CON          = 0x98;
sfr SCON           = 0x98;  // for compatible
// (S0CON)
sbit SM00_FE       = S0CON^7;
sbit SM10          = S0CON^6;
sbit SM20          = S0CON^5;
sbit REN0          = S0CON^4;
sbit TB80          = S0CON^3;
sbit RB80          = S0CON^2;
sbit TI0           = S0CON^1;
sbit RI0           = S0CON^0;

sfr S1CON          = 0x98;                 
// (S1CON)
sbit SM01          = S1CON^7;
sbit SM11          = S1CON^6;
sbit SM21          = S1CON^5;
sbit REN1          = S1CON^4;
sbit TB81          = S1CON^3;
sbit RB81          = S1CON^2;
sbit TI1           = S1CON^1;
sbit RI1           = S1CON^0;

sfr S0BUF          = 0x99;
sfr SBUF           = 0x99;  // for compatible
sfr S1BUF          = 0x99;                    

sfr S0CFG          = 0x9A;
sfr SCFG           = 0x9A;  // for compatible
// (S0CFG) 
#define URTS         0x80
#define SMOD2        0x40
#define URM0X6       0x20

sfr S1BRT          = 0x9A;      

sfr S1CFG          = 0x9B;
// (S1CFG)
#define S1TR         0x10
#define S1MOD1       0x08
#define S1TX12       0x04
#define S1CKOE       0x02
#define S1TME        0x01

sfr S1BRC          = 0x9B;               
sfr SADDR          = 0xA9;
sfr SADEN          = 0xB9;

// (ADC)
sfr ADCFG0         = 0xC3;
// (ADCFG0)
#define ADCKS2       0x80
#define ADCKS1       0x40
#define ADCKS0       0x20
#define ADRJ         0x10
#define ADTM1        0x02
#define ADTM0        0x01

sfr ADCON0         = 0xC4;
// (ADCON0)
#define ADCEN        0x80
#define ADCMS        0x40
#define AZEN         0x20
#define ADCI         0x10
#define ADCS         0x08
#define CHS2         0x04
#define CHS1         0x02
#define CHS0         0x01

sfr ADCDL          = 0xC5;
// (ADCDL)
#define ADCV3        0x80
#define ADCV2        0x40
#define ADCV1        0x20
#define ADCV0        0x10

sfr ADCDH          = 0xC6;
// (ADCDH)
#define ADCV11       0x80
#define ADCV10       0x40
#define ADCV9        0x20
#define ADCV8        0x10
#define ADCV7        0x08
#define ADCV6        0x04
#define ADCV5        0x02
#define ADCV4        0x01

// (Keypad Interrupt)
sfr KBPATN         = 0xD5;

sfr KBCON          = 0xD6;
// (KBCON)
#define PATNS        0x02
#define KBIF         0x01

sfr KBMASK         = 0xD7;

// (SPI)
sfr SPSTAT         = 0x84;
sfr SPISTAT        = 0x84;  // for compatible
// (SPSTAT)
#define SPIF         0x80
#define WCOL         0x40
#define THRF         0x20
#define SPIBSY       0x10
#define SPR2         0x01

sfr SPCON          = 0x85;
sfr SPCTL          = 0x85;  // for compatible
sfr SPICON         = 0x85;  // for compatible
sfr SPICTL         = 0x85;  // for compatible
// (SPCON)
#define SSIG         0x80
#define SPEN         0x40
#define DORD         0x20
#define MSTR         0x10
#define CPOL         0x08
#define CPHA         0x04
#define SPR1         0x02
#define SPR0         0x01

sfr SPDAT          = 0x86;
sfr SPIDAT         = 0x86;  // for compatible

// (PCA)
sfr CCON           = 0xD8;
// (CCON)
sbit CF            = CCON^7;
sbit CR            = CCON^6;
sbit CCF5          = CCON^5;
sbit CCF4          = CCON^4;
sbit CCF3          = CCON^3;
sbit CCF2          = CCON^2;
sbit CCF1          = CCON^1;
sbit CCF0          = CCON^0;

sfr CMOD           = 0xD9;
// (CMOD)
#define CIDL         0x80
#define CPS1         0x04
#define CPS0         0x02
#define ECF          0x01

sfr CCAPM0         = 0xDA;
// (CCAPM0)
#define ECOM0        0x40
#define CAPP0        0x20
#define CAPN0        0x10
#define MAT0         0x08
#define TOG0         0x04
#define PWM0         0x02
#define ECCF0        0x01

sfr CCAPM1         = 0xDB;
// (CCAPM1)
#define ECOM1        0x40
#define CAPP1        0x20
#define CAPN1        0x10
#define MAT1         0x08
#define TOG1         0x04
#define PWM1         0x02
#define ECCF1        0x01

sfr CCAPM2         = 0xDC;
// (CCAPM2)
#define ECOM2        0x40
#define CAPP2        0x20
#define CAPN2        0x10
#define MAT2         0x08
#define TOG2         0x04
#define PWM2         0x02
#define ECCF2        0x01

sfr CCAPM3         = 0xDD;
// (CCAPM3)
#define ECOM3        0x40
#define CAPP3        0x20
#define CAPN3        0x10
#define MAT3         0x08
#define TOG3         0x04
#define PWM3         0x02
#define ECCF3        0x01

sfr CCAPM4         = 0xDE;
// (CCAPM4)
#define ECOM4        0x40
#define CAPP4        0x20
#define CAPN4        0x10
#define MAT4         0x08
#define TOG4         0x04
#define PWM4         0x02
#define ECCF4        0x01

sfr CCAPM5         = 0xDF;
// (CCAPM5)
#define ECOM5        0x40
#define CAPP5        0x20
#define CAPN5        0x10
#define MAT5         0x08
#define TOG5         0x04
#define PWM5         0x02
#define ECCF5        0x01

sfr CL             = 0xE9;
sfr CCAP0L         = 0xEA;
sfr CCAP1L         = 0xEB;
sfr CCAP2L         = 0xEC;
sfr CCAP3L         = 0xED;
sfr CCAP4L         = 0xEE;
sfr CCAP5L         = 0xEF;
sfr CH             = 0xF9;
sfr CCAP0H         = 0xFA;
sfr CCAP1H         = 0xFB;
sfr CCAP2H         = 0xFC;
sfr CCAP3H         = 0xFD;
sfr CCAP4H         = 0xFE;
sfr CCAP5H         = 0xFF;

sfr PCAPWM0        = 0xF2;
// (PCAPWM0)
#define  P0RS1       0x80
#define  P0RS0       0x40
#define  P0PS2       0x20
#define  P0PS1       0x10
#define  P0PS0       0x08
#define  P0INV       0x04
#define  EPC0H       0x02
#define  EPC0L       0x01

sfr PCAPWM1        = 0xF3;
// (PCAPWM1)
#define  P1RS1       0x80
#define  P1RS0       0x40
#define  P1PS2       0x20
#define  P1PS1       0x10
#define  P1PS0       0x08
#define  P1INV       0x04
#define  EPC1H       0x02
#define  EPC1L       0x01

sfr PCAPWM2        = 0xF4;
// (PCAPWM2)
#define  P2RS1       0x80
#define  P2RS0       0x40
#define  P2PS2       0x20
#define  P2PS1       0x10
#define  P2PS0       0x08
#define  P2INV       0x04
#define  EPC2H       0x02
#define  EPC2L       0x01

sfr PCAPWM3        = 0xF5;
// (PCAPWM3)
#define  P3RS1       0x80
#define  P3RS0       0x40
#define  P3PS2       0x20
#define  P3PS1       0x10
#define  P3PS0       0x08
#define  P3INV       0x04
#define  EPC3H       0x02
#define  EPC3L       0x01

sfr PCAPWM4        = 0xF6;
// (PCAPWM4)
#define  P4RS1       0x80
#define  P4RS0       0x40
#define  P4PS2       0x20
#define  P4PS1       0x10
#define  P4PS0       0x08
#define  P4INV       0x04
#define  EPC4H       0x02
#define  EPC4L       0x01

sfr PCAPWM5        = 0xF7;
// (PCAPWM5)
#define  P5RS1       0x80
#define  P5RS0       0x40
#define  P5PS2       0x20
#define  P5PS1       0x10
#define  P5PS0       0x08
#define  P5INV       0x04
#define  EPC5H       0x02
#define  EPC5L       0x01

// (TWSI)
sfr SIADR          = 0xD1;
// (SIADR)
#define GC           0x01

sfr SIDAT          = 0xD2;
sfr SISTA          = 0xD3;

sfr SICON          = 0xD4;
// (SICON)
#define CR2          0x80
#define ENSI         0x40
#define STA          0x20
#define STO          0x10
#define SI           0x08
#define AA           0x04
#define CR1          0x02
#define CR0          0x01

// (Clock)
sfr CKCON0         = 0xC7;
#define CKCON0_P     0xC7   // for used in page P
// (CKCON0)
#define ENCKM        0x40
#define CKMIS1       0x20
#define CKMIS0       0x10
#define SCKS2        0x04
#define SCKS1        0x02
#define SCKS0        0x01

sfr CKCON1         = 0xBF;
#define CKCON1_P     0xBF   // for used in page P
// (CKCON1)
#define XCKS5        0x20
#define XCKS4        0x10
#define XCKS3        0x08
#define XCKS2        0x04
#define XCKS1        0x02
#define XCKS0        0x01

// (Others)
sfr PCON0          = 0x87;
#define PCON0_P      0x87   // for used in page P
sfr PCON           = 0x87;  // for compatible
// (PCON0)
#define SMOD1        0x80
#define SMOD0        0x40
#define POF0         0x10
#define GF1          0x08
#define GF0          0x04
#define PD           0x02
#define IDL          0x01

sfr PCON1          = 0x97;
#define PCON1_P      0x97   // for used in page P
// (PCON1)
#define SWRF         0x80
#define EXRF         0x40
#define BOF1         0x04
#define BOF0         0x02
#define WDTF         0x01

sfr SFIE           = 0x8E;
// (SFIE)
#define BOF1IE       0x04
#define BOF0IE       0x02
#define WDTFIE       0x01

sfr STRETCH        = 0x8F;
// (STRETCH)
#define EMAI1        0x80
#define ALES1        0x20
#define ALES0        0x10
#define RWSH         0x08
#define RWS2         0x04
#define RWS1         0x02
#define RWS0         0x01

sfr AUXR0          = 0xA1;
// (AUXR0)
#define P60OC1       0x80
#define P60OC0       0x40
#define P60FD        0x20
#define P4FS1        0x08
#define P4FS0        0x04
#define INT1H        0x02
#define INT0H        0x01

sfr AUXR1          = 0xA2;
// (AUXR1)
#define KBIPS1       0x80
#define KBIPS0       0x40
#define P5SPI        0x20
#define P5S1         0x10
#define P5T2         0x08
#define P6PCA        0x04
#define EXTRAM       0x02
#define DPS          0x01

sfr AUXR2          = 0xA3;
// (AUXR2)
#define INT3IS1      0x80
#define INT3IS0      0x40
#define INT2IS1      0x20
#define INT2IS0      0x10
#define T1X12        0x08
#define T0X12        0x04
#define T1CKOE       0x02
#define T0CKOE       0x01

sfr SFRPI          = 0xAC;
// (SFRPI)
#define IDX3         0x08
#define IDX2         0x04
#define IDX1         0x02
#define IDX0         0x01

sfr WDTCR          = 0xE1;
#define WDTCR_P      0xE1   // for used in page P
// (WDTCR)
#define WREN         0x80
#define NSW          0x40
#define ENW          0x20
#define CLRW         0x10
#define WIDL         0x08
#define PS2          0x04
#define PS1          0x02
#define PS0          0x01

// (ISP)
sfr IFD            = 0xE2;
sfr IFADRH         = 0xE3;
sfr IFADRL         = 0xE4;

sfr IFMT           = 0xE5;
// (IFMT)
#define MS2          0x04
#define MS1          0x02
#define MS0          0x01

sfr SCMD           = 0xE6;

sfr ISPCR          = 0xE7;
// (ISPCR)
#define ISPEN        0x80
#define BS           0x40
#define SRST         0x20
#define CFAIL        0x10
#define MISPF        0x08

// Page P
#define CKCON2       0x40    
#define PCON2        0x44
#define PCON3        0x45
#define SPCON0       0x48

#endif