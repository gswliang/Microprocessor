//for Megawin MG86FL(E)508
//------------------------------------------------------------------------------
//Standard sfrs
//------------------------------------------------------------------------------
//8051 Registers
//(Core)
#ifndef REG_MG86FL508_H
#define REG_MG86FL508_H

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
sbit BEEP          = P1^6;
sbit AIN5          = P1^5;
sbit RTCKO         = P1^5;
sbit AIN4          = P1^4;
sbit AIN3          = P1^3;
sbit AIN2          = P1^2;
sbit AIN1          = P1^1;
sbit AIN0          = P1^0;  

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
//sbit PWM3          = P2^4;
//sbit PWM2          = P2^0;

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
sbit S0MI          = P3^7;
sbit CEX0          = P3^7;
sbit RST           = P3^6;
sbit T1            = P3^5;
sbit T1CKO         = P3^5;
sbit CEX1          = P3^5;
sbit T0            = P3^4;
sbit T0CKO         = P3^4;
sbit ECI           = P3^4;
sbit TWI_SDA       = P3^4;
sbit nINT1         = P3^3;
sbit TWI_SCL       = P3^3;
sbit nINT0         = P3^2;
sbit TXD0          = P3^1;
sbit RXD0          = P3^0;

sfr P4             = 0xE8;
// (P4)
sbit P41           = P4^1;
sbit P40           = P4^0;
// (P4 alternate)
sbit XTAL2         = P4^0;
sbit ICKO          = P4^0;
sbit ECKI          = P4^0;
sbit XTAL1         = P4^1;

sfr PCON0          = 0x87;
#define PCON0_P      0x87    // For used in page P
#define SMOD1        0x80
#define SMOD0        0x40
#define GF           0x20
#define POF          0x10
#define GF1          0x08
#define GF0          0x04
#define PD           0x02
#define IDL          0x01

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

sfr SCON           = 0x98;
// (SCON)
sbit FE            = SCON^7;
sbit SM0           = SCON^7;
sbit SM1           = SCON^6;
sbit SM2           = SCON^5;
sbit REN           = SCON^4;
sbit TB8           = SCON^3;
sbit RB8           = SCON^2;
sbit TI            = SCON^1;
sbit RI            = SCON^0;

sfr SBUF           = 0x99;

sfr IE             = 0xA8;
// (IE)
sbit EA            = IE^7;
sbit GF4           = IE^6;
sbit ES            = IE^4;
sbit ET1           = IE^3;
sbit EX1           = IE^2;
sbit ET0           = IE^1;
sbit EX0           = IE^0;

sfr IP0H           = 0xB7;
#define PSH          0x10
#define PT1H         0x08
#define PX1H         0x04
#define PT0H         0x02
#define PX0H         0x01

sfr IP0L           = 0xB8;
// (IP0L)
sbit PSL           = IP0L^4;
sbit PT1L          = IP0L^3;
sbit PX1L          = IP0L^2;
sbit PT0L          = IP0L^1;
sbit PX0L          = IP0L^0;



/*-----------------------------------------------------------------------------
New-defined SFRs
-----------------------------------------------------------------------------*/

/* MG86FL(E)508 Extensions */

sfr SFIE           = 0x8E;
#define UTIE         0x80
#define SDIFIE       0x40
#define RTCFIE       0x10
#define KBIFIE       0x08
#define BOF0IE       0x02
#define WDTFIE       0x01

sfr P1M0           = 0x91;
#define P1M07        0x80
#define P1M06        0x40
#define P1M05        0x20
#define P1M04        0x10
#define P1M03        0x08
#define P1M02        0x04
#define P1M01        0x02
#define P1M00        0x01

sfr P1AIO          = 0x92;
#define P17AIO       0x80
#define P16AIO       0x40
#define P15AIO       0x20
#define P14AIO       0x10
#define P13AIO       0x08
#define P12AIO       0x04
#define P11AIO       0x02
#define P10AIO       0x01

sfr P2M0           = 0x95;
#define P2M07        0x80
#define P2M06        0x40
#define P2M05        0x20
#define P2M04        0x10
#define P2M03        0x08
#define P2M02        0x04
#define P2M01        0x02
#define P2M00        0x01

sfr BOREV          = 0x96;
#define BOREV7       0x80
#define BOREV6       0x40
#define BOREV5       0x20
#define BOREV4       0x10
#define BOREV3       0x08
#define BOREV2       0x04
#define BOREV1       0x02
#define BOREV0       0x01

sfr PCON1          = 0x97;
#define PCON1_P      0x97    // For used in page P
#define SWRF         0x80
#define EXRF         0x40
#define RTCF         0x10
#define KBIF         0x08
#define BOF0         0x02
#define WDTF         0x01

sfr AUXR0          = 0xA1;
#define P40OC1       0x80
#define P40OC0       0x40
#define P40FD        0x20
#define T0XL         0x10
#define P1FS1        0x08
#define P1FS0        0x04
#define INT1H        0x02
#define INT0H        0x01

sfr AUXR1          = 0xA2;
#define P3TWI        0x80
#define P4S0MI       0x40
#define P2PCA        0x20
#define XTOR         0x10
#define STAF         0x08
#define STOF         0x04
#define BPOC1        0x02
#define BPOC0        0x01

sfr AUXR2          = 0xA3;
#define BTI          0x40
#define URM0X3       0x20
#define SM3          0x10
#define T1X12        0x08
#define T0X12        0x04
#define T1CKOE       0x02
#define T0CKOE       0x01

sfr SADDR          = 0xA9;

sfr EIE1           = 0xAD;
#define ESF          0x08
#define EPCA         0x04
#define EADC         0x02

sfr EIP1L          = 0xAE;
#define PSFL         0x08
#define PPCAL        0x04
#define PADCL        0x02

sfr EIP1H          = 0xAF;
#define PSFH         0x08
#define PPCAH        0x04
#define PADCH        0x02

sfr P3M0           = 0xB1;
#define P3M07        0x80
#define P3M06        0x40
#define P3M05        0x20
#define P3M04        0x10
#define P3M03        0x08
#define P3M02        0x04
#define P3M01        0x02
#define P3M00        0x01

sfr P3M1           = 0xB2;
#define P3M17        0x80
#define P3M16        0x40
#define P3M15        0x20
#define P3M14        0x10
#define P3M13        0x08
#define P3M12        0x04
#define P3M11        0x02
#define P3M10        0x01

sfr P4M0           = 0xB3;
#define P4M01        0x02
#define P4M00        0x01

sfr PUCON0         = 0xB4;
#define PU40         0x40
#define PU21         0x20
#define PU20         0x10
#define PU11         0x08
#define PU10         0x04

sfr RTCTM          = 0xB6;
#define RTCCS1       0x80
#define RTCCS0       0x40
#define RTCCT5       0x20
#define RTCCT4       0x10
#define RTCCT3       0x08
#define RTCCT2       0x04
#define RTCCT1       0x02
#define RTCCT0       0x01

sfr SADEN          = 0xB9;

sfr RTCCR          = 0xBE;
#define RTCCR_P      0xBE    // For used in page P
#define RTCE         0x80
#define RTCOE        0x40
#define RTCRL5       0x20
#define RTCRL4       0x10
#define RTCRL3       0x08
#define RTCRL2       0x04
#define RTCRL1       0x02
#define RTCRL0       0x01

sfr ADCON0         = 0xC4;
#define ADCEN        0x80
#define SPEED1       0x40
#define SPEED0       0x20
#define ADCI         0x10
#define ADCS         0x08
#define CHS2         0x04
#define CHS1         0x02
#define CHS0         0x01

sfr ADCDH          = 0xC6;
#define ADCV7        0x80
#define ADCV6        0x40
#define ADCV5        0x20
#define ADCV4        0x10
#define ADCV3        0x08
#define ADCV2        0x04
#define ADCV1        0x02
#define ADCV0        0x01

sfr CKCON0         = 0xC7;
#define CKCON0_P     0xC7    // For used in page P  
#define AFS          0x80
#define SCKS2        0x04
#define SCKS1        0x02
#define SCKS0        0x01

sfr CLRL           = 0xCE;
#define CLRL7        0x80
#define CLRL6        0x40
#define CLRL5        0x20
#define CLRL4        0x10
#define CLRL3        0x08
#define CLRL2        0x04
#define CLRL1        0x02
#define CLRL0        0x01

sfr CHRL           = 0xCF;
#define CHRL7        0x80
#define CHRL6        0x40
#define CHRL5        0x20
#define CHRL4        0x10
#define CHRL3        0x08
#define CHRL2        0x04
#define CHRL1        0x02
#define CHRL0        0x01

sfr P3KBIE         = 0xD6;
#define P37KBIE      0x80
#define P36KBIE      0x40
#define P35KBIE      0x20
#define P34KBIE      0x10
#define P41KBIE      0x08
#define P40KBIE      0x04
#define P31KBIE      0x02
#define P30KBIE      0x01

sfr P1KBIE         = 0xD7;
#define P17KBIE      0x80
#define P16KBIE      0x40
#define P15KBIE      0x20
#define P14KBIE      0x10
#define P13KBIE      0x08
#define P12KBIE      0x04
#define P11KBIE      0x02
#define P10KBIE      0x01

sfr CCON           = 0xD8;
// (CCON)
sbit CF            = CCON^7;
sbit CR            = CCON^6;
sbit CCF1          = CCON^1;
sbit CCF0          = CCON^0;

sfr CMOD           = 0xD9;
#define CIDL         0x80
#define CPS1         0x04
#define CPS0         0x02
#define ECF          0x01

sfr CCAPM0         = 0xDA;
#define ECOM0        0x40
#define CAPP0        0x20
#define CAPN0        0x10
#define MAT0         0x08
#define TOG0         0x04
#define PWM0         0x02
#define ECCF0        0x01

sfr CCAPM1         = 0xDB;
#define ECOM1        0x40
#define CAPP1        0x20
#define CAPN1        0x10
#define MAT1         0x08
#define TOG1         0x04
#define PWM1         0x02
#define ECCF1        0x01

sfr WDTCR          = 0xE1;
#define WDTCR_P      0xE1    // For used in page P
#define WREN         0x80
#define NSW          0x40
#define ENW          0x20
#define CLW          0x10
#define WIDL         0x08
#define PS2          0x04
#define PS1          0x02
#define PS0          0x01

sfr IFD            = 0xE2;
sfr IFADRH         = 0xE3;
sfr IFADRL         = 0xE4;

sfr IFMT           = 0xE5;
#define MS2          0x04
#define MS1          0x02
#define MS0          0x01

sfr SCMD           = 0xE6;

sfr ISPCR          = 0xE7;
#define ISPEN        0x80
#define BS           0x40
#define SRST         0x20
#define CFAIL        0x10

sfr CL             = 0xE9;
sfr CCAP0L         = 0xEA;
sfr CCAP1L         = 0xEB;
sfr CCAP2L         = 0xEC;
sfr CCAP3L         = 0xED;
sfr PAOE           = 0xF1;

sfr PCAPWM0        = 0xF2;
#define P0INV        0x04
#define EPC0H        0x02
#define EPC0L        0x01

sfr PCAPWM1        = 0xF3;
#define P1INV        0x04
#define EPC1H        0x02
#define EPC1L        0x01

sfr PCAPWM2        = 0xF4;
#define PWM2         0x80
#define P2INV        0x04
#define EPC2H        0x02
#define EPC2L        0x01

sfr PCAPWM3        = 0xF5;
#define PWM3         0x80
#define P3INV        0x04
#define EPC3H        0x02
#define EPC3L        0x01

sfr CH             = 0xF9;
sfr CCAP0H         = 0xFA;
sfr CCAP1H         = 0xFB;
sfr CCAP2H         = 0xFC;
sfr CCAP3H         = 0xFD;

// Auxiliary SFR
#define IAPLB        0x03

#define CKCON2       0x40
#define XTGS1        0x80
#define XTGS0        0x40
#define XTALE        0x20
#define IHRCOE       0x10
#define OSCS1        0x02
#define OSCS0        0x01

#define PCON2        0x44
#define AWBOD0       0x40
#define BO0RE        0x02

#define SPCON0       0x48
#define RTCCTL       0x80
#define WRCTL        0x10
#define CKCTL0       0x04
#define PWCTL1       0x02
#define PWCTL0       0x01

#define DCON0        0x4C
#define HSE          0x80
#define IAPO         0x40
#define RSTIO        0x02

#endif