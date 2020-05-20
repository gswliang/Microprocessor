#ifndef __REG_MG74PG1B08_INC
#define __REG_MG74PG1B08_INC

;(System)
ACC      DATA   0E0H
B        DATA   0F0H
SP       DATA   81H
DPL      DATA   82H
DPH      DATA   83H
PSW      DATA   0D0H

;(Interrupt)
SFIE     DATA   8EH
IE       DATA   0A8H
XPIE1    DATA   0ADh
IP0L     DATA   0B8H

;(I/O Port)
P1       DATA   90H
P3       DATA   0B0H
P1M0     DATA   91h
P1M1     DATA   92h
P3M0     DATA   0B1h
P3M1     DATA   0B2h

;(Timer)
TCON     DATA   88H
TMOD     DATA   89H
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH

;(Serial Port)
S0CON    DATA   98H
S0BUF    DATA   99H
SCON     DATA   98H
SBUF     DATA   99H

;(ADC)

;(Keypad Interrupt)
KBIEN0   DATA   0D6h

;(SPI)

;(PCA)
CCON     DATA   0D8H
CMOD     DATA   0D9H
CCAPM0   DATA   0DAH
CLRL     DATA   0CEH
CHRL     DATA   0CFH
CL       DATA   0E9H
CH       DATA   0F9H
CCAP0L   DATA   0EAH
CCAP0H   DATA   0FAH

;(TWSI)

;(CLOCK)
CKCON0   DATA   0C7H
CKCON2   DATA   0BBH

;(USB)
USBDAT   DATA   0AAH
USBADR   DATA   0ABH
UDCON0   EQU    0C0h
UDCON1   EQU    0C1h
UADDR    EQU    0D8h
UPCON    EQU    0C9h

IEN      EQU    0D9h
UIE      EQU    0DAh
UIFLG    EQU    0DBh
UIE1     EQU    0DCh
UIFLG1   EQU    0DDh

EPINDEX  EQU    0F1h
EPCON    EQU    0E1h
RXSTAT   EQU    0E2h
RXDAT    EQU    0E3h
RXCON    EQU    0E4h
RXCNT    EQU    0E6h

TXSTAT   EQU    0F2h
TXDAT    EQU    0F3h
TXCON    EQU    0F4h
TXCNT    EQU    0F6h

SIOCTL   EQU    0C2h

;(Others)
BOREV    DATA   96H
PCON0    DATA   87H
PCON1    DATA   97H
PCON2    DATA   0BAH
AUXR0    DATA   0A1H
AUXR1    DATA   0A2H
AUXR2    DATA   0A3H
DCON0    DATA   0BCH
SPCON0   DATA   0BDH
WDTCR    DATA   0E1H
SCMD     DATA   0E6H


;(bits in PSW)
CY       BIT    PSW.7
AC       BIT    PSW.6
F0       BIT    PSW.5
RS1      BIT    PSW.4
RS0      BIT    PSW.3
OV       BIT    PSW.2
F1       BIT    PSW.1
P        BIT    PSW.0

;(bits in SFIE)
SIDFIE   EQU    80H
KBIFIE   EQU    08H
BOF1IE   EQU    04H
BOF0IE   EQU    02H
WDTFIE   EQU    01H

;(bits in IE)
EA       BIT    IE.7
EXPIE1   BIT    IE.5
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

;(bits in XPIE1)
ESF      EQU    01H
EPCA     EQU    02H
EUSB     EQU    80H

;(bits in IP0L)
URXR     BIT    IP0L.7
PXPI1L   BIT    IP0L.5
PSL      BIT    IP0L.4
PT1L     BIT    IP0L.3
PX1L     BIT    IP0L.2
PT0L     BIT    IP0L.1
PX0L     BIT    IP0L.0

;(bits in P1)
P17      BIT    P1.7
P16      BIT    P1.6
P15      BIT    P1.5
P14      BIT    P1.4
P13      BIT    P1.3
P12      BIT    P1.2
P11      BIT    P1.1
P10      BIT    P1.0

;(bits in P3)
P37      BIT    P3.7
P36      BIT    P3.6
P32      BIT    P3.2
P31      BIT    P3.1
P30      BIT    P3.0

;(bits in TCON)
TF1      BIT    TCON.7
TR1      BIT    TCON.6
TF0      BIT    TCON.5
TR0      BIT    TCON.4
IE1      BIT    TCON.3
IT1      BIT    TCON.2
IE0      BIT    TCON.1
IT0      BIT    TCON.0

;(bits in TMOD)
T1GATE   EQU    80H
T1CT     EQU    40H
T1M1     EQU    20H
T1M0     EQU    10H
T0GATE   EQU    08H
T0CT     EQU    04H
T0M1     EQU    02H
T0M0     EQU    01H

;(bits in S0CON)
FE       BIT    S0CON.7
SM00     BIT    S0CON.7
SM10     BIT    S0CON.6
SM20     BIT    S0CON.5
REN0     BIT    S0CON.4
TB80     BIT    S0CON.3
RB80     BIT    S0CON.2
TI0      BIT    S0CON.1
RI0      BIT    S0CON.0

SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0

;(bits in CCON)
CF       BIT    CCON.7
CR       BIT    CCON.6
CCF0     BIT    CCON.0

;(bits in CMOD)
CIDL     EQU    80H
CPS2     EQU    08H
CPS1     EQU    04H
CPS0     EQU    02H
ECF      EQU    01H

;(bits in CCAPM0)
P0INV    EQU    80H
ECOM0    EQU    40H
CAPP0    EQU    20H
CAPN0    EQU    10H
MAT0     EQU    08H
TOG0     EQU    04H
PWM0     EQU    02H
ECCF0    EQU    01H

;(bits in CKCON0)
CCKS1    EQU    20H
CCKS0    EQU    10H
SCKS2    EQU    04H
SCKS1    EQU    02H
SCKS0    EQU    01H

;(bits in CKCON2)
IHRCOE   EQU    10H
MCKS1    EQU    08H
MCKS0    EQU    04H
OSCS1    EQU    02H
OSCS0    EQU    01H

;(bits in USBADR)
UBSY     EQU    80H

;(bits in UDCON0)
FRST     EQU    10H
SCWKP    EQU    20H
EP2DIR   EQU    80H

;(bits in UDCON1)
RPD1M    EQU    02H
NAKEP0   EQU    04H
NAKEP1   EQU    08H
STLDEN   EQU    10H
SETNO    EQU    20H

;(bits in UPCON)
USUS     EQU    01H
URSM     EQU    02H
URST     EQU    04H
URSTWKP  EQU    08H
URWU     EQU    20H
CONEN    EQU    80H

;(bits in IEN)
EF       EQU    02H
EFSR     EQU    04H

;(bits in UIE)
UTXIE0   EQU    01H
URXIE0   EQU    02H
UTXIE1   EQU    04H
UTXIE2   EQU    10H
URXIE2   EQU    10H
SOFIE    EQU    80H

;(bits in UIFLG)
UTXD0    EQU    01H
URXD0    EQU    02H
UTXD1    EQU    04H
UTXD2    EQU    10H
URXD2    EQU    10H
SOFIF    EQU    80H

;(bits in UIE1)
UTXIE3   EQU    01H		;only for EP3
TXNAKE   EQU    40H
RXNAKE   EQU    80H

;(bits in UIFLG1)
UTXD3    EQU    01H		;only for EP3
TXNAK    EQU    40H
RXNAK    EQU    80H

;(bits in EPCON)
TXEPEN   EQU    01H
TXISO    EQU    02H	;only for EP3
RXEPEN   EQU    04H
TXDBM    EQU    10H	;only for EP3
TXSTL    EQU    40H
RXSTL    EQU    80H

;(bits in RXSTAT)
RXSOVW   EQU    08H
EDOVW    EQU    10H
STOVW    EQU    20H
RXSETUP  EQU    40H
RXSEQ    EQU    80H

;(bits in RXCON)
RXFFRC   EQU    10H
RXCLR    EQU    80H

;(bits in TXSTAT)
TXSOVW   EQU    08H
TXSEQ    EQU    80H

;(bits in TXCON)
TXFFRC   EQU    10H
TXCLR    EQU    80H

;(bits in SIOCTL)
DPI      EQU    80H
DMI      EQU    40H

;(bits in PCON0)
SMOD1    EQU    80H
SMOD0    EQU    40H
POF      EQU    10H
PD       EQU    02H
IDL      EQU    01H

;(bits in PCON1)
SWRF     EQU    80H
EXRF     EQU    40H
KBIF     EQU    08H
BOF1     EQU    04H
BOF0     EQU    02H
WDTF     EQU    01H

;(bits in PCON2)
AWBOD1   EQU    80H
EBOD1    EQU    40H
BO1RE    EQU    08H
BO0RE    EQU    04H
RMLS     EQU    01H

;(bits in AUXR0)
P17OC1   EQU    80H
P17OC0   EQU    40H
T0XL     EQU    10H
P1FS1    EQU    08H
P1FS0    EQU    04H
INT1H    EQU    02H
INT0H    EQU    01H

;(bits in AUXR1)
INT1IS1  EQU    80H
INT1IS0  EQU    40H
INT0IS0  EQU    20H
STAF     EQU    08H
STOF     EQU    04H
PTCKOE   EQU    02H

;(bits in AUXR2)
UTIE     EQU    80H
CPHA     EQU    80H
BTI      EQU    40H
SSIG     EQU    40H
URM0X3   EQU    20H
SMOD2    EQU    20H
SM3      EQU    10H
T1X12    EQU    08H
T0X12    EQU    04H
T1CKOE   EQU    02H
T0CKOE   EQU    01H

;(bits in DCON0)
WCKS     EQU    80H
USBR     EQU    40H
ENUSB    EQU    20H
ENCKM    EQU    10H
CKMIS1   EQU    08H
CKMIS0   EQU    04H
RSTIO    EQU    02H
SWRST    EQU    01H

;(bits in SPCON0)
WRCTL    EQU    10H
CKCTL0   EQU    04H
PWCTL1   EQU    02H
PWCTL0   EQU    01H

;(bits in WDTCR)
WREN     EQU    80H
NSW      EQU    40H
ENW      EQU    20H
CLRW     EQU    10H
WIDL     EQU    08H
PS2      EQU    04H
PS1      EQU    02H
PS0      EQU    01H


#endif


