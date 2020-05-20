#ifndef __REG_MG20FEL809_INC
#define __REG_MG20FEL809_INC
SP         DATA    081H

DPL        DATA    082H

DPH        DATA    083H

PCON0      DATA    087H
; (bits in PCON0)
SMOD1      EQU     080h
SMOD0      EQU     040h
GF         EQU     020h
POF        EQU     010h
GF1        EQU     008h
GF0        EQU     004h
PD         EQU     002h
IDL        EQU     001h

TCON       DATA    088H
; (bits in TCON)
TF1        BIT     TCON.7
TR1        BIT     TCON.6
TF0        BIT     TCON.5
TR0        BIT     TCON.4
IE1        BIT     TCON.3
IT1        BIT     TCON.2
IE0        BIT     TCON.1
IT0        BIT     TCON.0

TMOD       DATA    089H
; (bits in TMOD)
T1GATE     EQU     080h
T1CT       EQU     040h
T1M1       EQU     020h
T1M0       EQU     010h
T0GATE     EQU     008h
T0CT       EQU     004h
T0M1       EQU     002h
T0M0       EQU     001h

TL0        DATA    08AH

TL1        DATA    08BH

TH0        DATA    08CH

TH1        DATA    08DH

SFIE       DATA    08EH
; (bits in SFIE)
UTIE       EQU     080h
SIDFIE     EQU     040h
OTDFIE     EQU     004h
BOF0IE     EQU     002h
WDTFIE     EQU     001h

P1         DATA    090H
; (bits in P1)
P16        BIT     P1.6
P15        BIT     P1.5
P14        BIT     P1.4
P12        BIT     P1.2
P11        BIT     P1.1
P10        BIT     P1.0

BOREV      DATA    096H
; (bits in BOREV)
BOREV7     EQU     080h
BOREV6     EQU     040h
BOREV5     EQU     020h
BOREV4     EQU     010h
BOREV3     EQU     008h
BOREV2     EQU     004h
BOREV1     EQU     002h
BOREV0     EQU     001h

PCON1      DATA    097H
; (bits in PCON1)
SWRF       EQU     080h
EXRF       EQU     040h
OTDF       EQU     004h
BOF0       EQU     002h
WDTF       EQU     001h

SCON       DATA    098H
; (bits in SCON)
SM0_FE     BIT     SCON.7
SM1        BIT     SCON.6
SM2        BIT     SCON.5
REN        BIT     SCON.4
TB8        BIT     SCON.3
RB8        BIT     SCON.2
Ti         BIT     SCON.1
RI         BIT     SCON.0

SBUF       DATA    099H

P2         DATA    0A0H
; (bits in P2)
P25        BIT     P2.5
P24        BIT     P2.4
P22        BIT     P2.2
P21        BIT     P2.1
P20        BIT     P2.0

AUXR0      DATA    0A1H
; (bits in AUXR0)
LEDOE      EQU     080h
PBCS       EQU     040h
SPIPS      EQU     020h
T0XL       EQU     010h
TXPS       EQU     008h
RXPS       EQU     004h
INT1H      EQU     002h
INT0H      EQU     001h

AUXR1      DATA    0A2H
; (bits in AUXR1)
INT1IS1    EQU     080h
INT1IS0    EQU     040h
INT0IS0    EQU     020h
XTOR       EQU     010h
STAF       EQU     008h
STOF       EQU     004h
P36OP0     EQU     001h

AUXR2      DATA    0A3H
; (bits in AUXR2)
URXR       EQU     080h
BTI        EQU     040h
URM0X3     EQU     020h
SM3        EQU     010h
T1X12      EQU     008h
T0X12      EQU     004h
T1CKOE     EQU     002h
T0CKOE     EQU     001h

IE         DATA    0A8H
; (bits in IE)
EA         BIT     IE.7
ESF        BIT     IE.6
ES         BIT     IE.4
ET1        BIT     IE.3
EX1        BIT     IE.2
ET0        BIT     IE.1
EX0        BIT     IE.0

SADDR      DATA    0A9H

P3         DATA    0B0H
; (bits in P3)
P36        BIT     P3.6
P35        BIT     P3.5
P34        BIT     P3.4
P33        BIT     P3.3
P32        BIT     P3.2
P31        BIT     P3.1
P30        BIT     P3.0

P3M0       DATA    0B1H
; (bits in P3M0)
P3M06      EQU     040h
P3M05      EQU     020h
P3M04      EQU     010h
P3M03      EQU     008h
P3M02      EQU     004h
P3M01      EQU     002h
P3M00      EQU     001h

P3M1       DATA    0B2H
; (bits in P3M1)
P3M16      EQU     040h
P3M15      EQU     020h
P3M14      EQU     010h
P3M13      EQU     008h
P3M12      EQU     004h
P3M11      EQU     002h
P3M10      EQU     001h

IP0H       DATA    0B7H
; (bits in IP0H)
PSFH       EQU     040h
PSH        EQU     010h
PT1H       EQU     008h
PX1H       EQU     004h
PT0H       EQU     002h
PX0H       EQU     001h

IP0L       DATA    0B8H
; (bits in IP0L)
PSFL       BIT     IP0L.6
PSL        BIT     IP0L.4
PT1L       BIT     IP0L.3
PX1L       BIT     IP0L.2
PT0L       BIT     IP0L.1
PX0L       BIT     IP0L.0

SADEN      DATA    0B9H
; (bits in SADEN)
CASE       EQU     004h
CPHA       EQU     002h
SSIG       EQU     001h

CKCON0     DATA    0C7H
; (bits in CKCON0)
AFS        EQU     080h
SCKS2      EQU     004h
SCKS1      EQU     002h
SCKS0      EQU     001h

PSW        DATA    0D0H
; (bits in PSW)
CY         BIT     PSW.7
AC         BIT     PSW.6
F0         BIT     PSW.5
RS1        BIT     PSW.4
RS0        BIT     PSW.3
OV         BIT     PSW.2
F1         BIT     PSW.1
P          BIT     PSW.0

PAOE1      DATA    0D1H
; (bits in PAOE1)
L7OP3      EQU     080h
L6OP3      EQU     040h
P35OP3     EQU     020h
P3INV      EQU     010h
L5OP2      EQU     008h
L4OP2      EQU     004h
P34OP2     EQU     002h
P2INV      EQU     001h

IAPLB      DATA    0DCH
; (bits in IAPLB)
IAPLB3     EQU     010h
IAPLB2     EQU     008h
IAPLB1     EQU     004h
IAPLB0     EQU     002h

CKCON2     DATA    0DDH
; (bits in CKCON2)
XTGS1      EQU     080h
XTGS0      EQU     040h
XTALE      EQU     020h
IHRCOE     EQU     010h
OSCS1      EQU     002h
OSCS0      EQU     001h

DCON0      DATA    0DEH
; (bits in DCON0)
HSE        EQU     080h
IAPO       EQU     040h
AWBOD0     EQU     020h
BO0RE      EQU     010h
RSTIO      EQU     002h

SPCON0     DATA    0DFH
; (bits in SPCON0)
WRCTL      EQU     010h
CKCTL0     EQU     004h
PWCTL1     EQU     002h
PWCTL0     EQU     001h

ACC        DATA    0E0H
; (bits in ACC)
ACC7       BIT     ACC.7
ACC6       BIT     ACC.6
ACC5       BIT     ACC.5
ACC4       BIT     ACC.4
ACC3       BIT     ACC.3
ACC2       BIT     ACC.2
ACC1       BIT     ACC.1
ACC0       BIT     ACC.0

WDTCR      DATA    0E1H
; (bits in WDTCR)
WREN       EQU     080h
NSW        EQU     040h
ENW        EQU     020h
CLRW       EQU     010h
WIDL       EQU     008h
PS2        EQU     004h
PS1        EQU     002h
PS0        EQU     001h

IFD        DATA    0E2H

IFADRH     DATA    0E3H

IFADRL     DATA    0E4H

IFMT       DATA    0E5H
; (bits in IFMT)
MS7        EQU     080h
MS6        EQU     040h
MS5        EQU     020h
MS4        EQU     010h
MS3        EQU     008h
MS2        EQU     004h
MS1        EQU     002h
MS0        EQU     001h

SCMD       DATA    0E6H

ISPCR      DATA    0E7H
; (bits in ISPCR)
ISPEN      EQU     080h
SWBS       EQU     040h
SWRST      EQU     020h
CFAIL      EQU     010h
DATM2      EQU     004h
DATM1      EQU     002h
DATM0      EQU     001h

B          DATA    0F0H
; (bits in B)
F7H        BIT     B.7
F6H        BIT     B.6
F5H        BIT     B.5
F4H        BIT     B.4
F3H        BIT     B.3
F2H        BIT     B.2
F1H        BIT     B.1
F0H        BIT     B.0

PAOE       DATA    0F1H
; (bits in PAOE)
L3OP1      EQU     080h
L2OP1      EQU     040h
P33OP1     EQU     020h
P1INV      EQU     010h
L1OP0      EQU     008h
L0OP0      EQU     004h
P32OP0     EQU     002h
P0INV      EQU     001h

#endif
