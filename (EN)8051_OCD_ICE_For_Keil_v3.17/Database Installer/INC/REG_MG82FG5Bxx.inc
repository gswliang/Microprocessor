#ifndef __REG_MG82FG5Bxx_INC
#define __REG_MG82FG5Bxx_INC

GF_7       EQU     080h
GF_6       EQU     040h
GF_5       EQU     020h
GF_4       EQU     010h
GF_3       EQU     008h
GF_2       EQU     004h
GF_1       EQU     002h
GF_0       EQU     001h

SP         DATA    081H

DPL        DATA    082H

DPH        DATA    083H

SPSTAT     DATA    084H
; (bits in SPSTAT)
SPIF       EQU     080h
WCOL       EQU     040h
THRF       EQU     020h
SPIBSY     EQU     010h
MODF       EQU     008h
SPR2       EQU     001h

SPCON      DATA    085H
; (bits in SPCON)
SSIG       EQU     080h
SPEN       EQU     040h
DORD       EQU     020h
MSTR       EQU     010h
CPOL       EQU     008h
CPHA       EQU     004h
SPR1       EQU     002h
SPR0       EQU     001h

SPDAT      DATA    086H

PCON0      DATA    087H
; (bits in PCON0)
SMOD1      EQU     080h
SMOD0      EQU     040h
POF0       EQU     010h
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
T0C_T      EQU     004h
T0M1       EQU     002h
T0M0       EQU     001h

TL0        DATA    08AH

TL1        DATA    08BH

TH0        DATA    08CH

TH1        DATA    08DH

SFIE       DATA    08EH
; (bits in SFIE)
SIDFIE     EQU     080h
MCDRE      EQU     040h
MCDFIE     EQU     020h
RTCFIE     EQU     010h
BOF1IE     EQU     004h
BOF0IE     EQU     002h
WDTFIE     EQU     001h

P1         DATA    090H
; (bits in P1)
P17        BIT     P1.7
P16        BIT     P1.6
P15        BIT     P1.5
P14        BIT     P1.4
P13        BIT     P1.3
P12        BIT     P1.2
P11        BIT     P1.1
P10        BIT     P1.0

P1M0       DATA    091H

P1AIO      DATA    092H
; (bits in P1AIO)
P17AIO     EQU     080h
P16AIO     EQU     040h
P15AIO     EQU     020h
P14AIO     EQU     010h
P13AIO     EQU     008h
P12AIO     EQU     004h
P11AIO     EQU     002h
P10AIO     EQU     001h

P2M0       DATA    095H
; (bits in P2M0)
P2M07      EQU     080h
P2M06      EQU     040h
P2M05      EQU     020h
P2M04      EQU     010h
P2M03      EQU     008h
P2M02      EQU     004h
P2M01      EQU     002h
P2M00      EQU     001h

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
MCDF       EQU     020h
RTCF       EQU     010h
BOF1       EQU     004h
BOF0       EQU     002h
WDTF       EQU     001h

S0CON      DATA    098H
; (bits in S0CON)
SM00_FE    BIT     S0CON.7
SM10       BIT     S0CON.6
SM20       BIT     S0CON.5
REN0       BIT     S0CON.4
TB80       BIT     S0CON.3
RB80       BIT     S0CON.2
TI0        BIT     S0CON.1
RI0        BIT     S0CON.0

S1CON      DATA    098H
; (bits in S1CON)
SM01       BIT     S1CON.7
SM11       BIT     S1CON.6
SM21       BIT     S1CON.5
REN1       BIT     S1CON.4
TB81       BIT     S1CON.3
RB81       BIT     S1CON.2
TI1        BIT     S1CON.1
RI1        BIT     S1CON.0

S0BUF      DATA    099H
S1BUF      DATA    099H

S1BRT      DATA    09AH

S1BRC      DATA    09BH

S0CFG      DATA    09CH
; (bits in S0CFG)
URTS       EQU     080h
S0MOD2     EQU     040h
URM0X3     EQU     020h
SM30       EQU     010h
S0DOR      EQU     008h
BTI        EQU     004h
UTIE       EQU     002h

S1CFG      DATA    09CH
; (bits in S1CFG)
SM31       EQU     080h
S1EVPS     EQU     040h
S1DOR      EQU     020h
S1TR       EQU     010h
S1MOD1     EQU     008h
S1TX12     EQU     004h
S1CKOE     EQU     002h
S1TME      EQU     001h

S1CFG1     DATA    09DH
; (bits in S1CFG1)
S1SBF      EQU     080h
S1TXER     EQU     040h
S1SB16     EQU     020h
S1ATBR     EQU     010h
S1TXRX     EQU     008h
S1SYNC     EQU     004h

S1CFG2     DATA    09DH
; (bits in S1CFG2)
S1ESDE     EQU     080h
S1ESDF     EQU     040h
S1PEF      EQU     020h
S1ESOE     EQU     010h
S1BRS3     EQU     008h
S1BRS2     EQU     004h
S1BRS1     EQU     002h
S1BRS0     EQU     001h

P2         DATA    0A0H
; (bits in P2)
P27        BIT     P2.7
P26        BIT     P2.6
P25        BIT     P2.5
P24        BIT     P2.4
P23        BIT     P2.3
P22        BIT     P2.2
P21        BIT     P2.1
P20        BIT     P2.0

AUXR0      DATA    0A1H
; (bits in AUXR0)
P60OC1     EQU     080h
P60OC0     EQU     040h
P60FD      EQU     020h
T0XL       EQU     010h
P4FS1      EQU     008h
P4FS0      EQU     004h
INT1H      EQU     002h
INT0H      EQU     001h

AUXR1      DATA    0A2H
; (bits in AUXR1)
P1KBIH     EQU     080h
P3KBIL     EQU     040h
P4SPI      EQU     020h
P3S1       EQU     010h
P3S1MI     EQU     008h
P6TWI      EQU     004h
P3CEX      EQU     002h
DPS        EQU     001h

AUXR2      DATA    0A3H
; (bits in AUXR2)
INT3IS1    EQU     080h
INT3IS0    EQU     040h
INT2IS1    EQU     020h
INT2IS0    EQU     010h
T1X12      EQU     008h
T0X12      EQU     004h
T1CKOE     EQU     002h
T0CKOE     EQU     001h

AUXR3      DATA    0A4H
; (bits in AUXR3)
STAF       EQU     080h
STOF       EQU     040h
BPOC1      EQU     020h
BPOC0      EQU     010h
GF         EQU     008h
P1S0MI     EQU     004h
P3ECI      EQU     002h
P3TWI1     EQU     001h

IE         DATA    0A8H
; (bits in IE)
EA         BIT     IE.7
GF4        BIT     IE.6
ET2        BIT     IE.5
ES0        BIT     IE.4
ET1        BIT     IE.3
EX1        BIT     IE.2
ET0        BIT     IE.1
EX0        BIT     IE.0

SADDR      DATA    0A9H

SFRPI      DATA    0ACH
; (bits in SFRPI)
IDX3       EQU     008h
IDX2       EQU     004h
IDX1       EQU     002h
IDX0       EQU     001h

EIE1       DATA    0ADH
; (bits in EIE1)
ETWI1      EQU     080h
ETWSI      EQU     040h
EKB        EQU     020h
ES1        EQU     010h
ESF        EQU     008h
EPCA       EQU     004h
EADC       EQU     002h
ESPI       EQU     001h

EIP1L      DATA    0AEH
; (bits in EIP1L)
PTWI1L     EQU     080h
PTWIL      EQU     040h
PKBL       EQU     020h
PS1L       EQU     010h
PSFL       EQU     008h
PPCAL      EQU     004h
PADCL      EQU     002h
PSPIL      EQU     001h

EIP1H      DATA    0AFH
; (bits in EIP1H)
PTWI1H     EQU     080h
PTWIH      EQU     040h
PKBH       EQU     020h
PS1H       EQU     010h
PSFH       EQU     008h
PPCAH      EQU     004h
PADCH      EQU     002h
PSPIH      EQU     001h

P3         DATA    0B0H
; (bits in P3)
P37        BIT     P3.7
P36        BIT     P3.6
P35        BIT     P3.5
P34        BIT     P3.4
P33        BIT     P3.3
P32        BIT     P3.2
P31        BIT     P3.1
P30        BIT     P3.0

P3M0       DATA    0B1H

P3M1       DATA    0B2H

P4M0       DATA    0B3H

PUCON0     DATA    0B4H
; (bits in PUCON0)
P4PU1      EQU     080h
P4PU0      EQU     040h
P2PU1      EQU     020h
P2PU0      EQU     010h
P1PU1      EQU     008h
P1PU0      EQU     004h
P0PU1      EQU     002h
P0PU0      EQU     001h

PUCON1     DATA    0B4H
; (bits in PUCON1)
P6PU1      EQU     008h
P6PU0      EQU     004h
P5PU1      EQU     002h
P5PU0      EQU     001h

P5M0       DATA    0B5H

P6M0       DATA    0B5H

RTCTM      DATA    0B6H
; (bits in RTCTM)
RTCCS1     EQU     080h
RTCCS0     EQU     040h
RTCCT5     EQU     020h
RTCCT4     EQU     010h
RTCCT3     EQU     008h
RTCCT2     EQU     004h
RTCCT1     EQU     002h
RTCCT0     EQU     001h

IP0H       DATA    0B7H
; (bits in IP0H)
PX3H       EQU     080h
PX2H       EQU     040h
PT2H       EQU     020h
PSH        EQU     010h
PT1H       EQU     008h
PX1H       EQU     004h
PT0H       EQU     002h
PX0H       EQU     001h

IP0L       DATA    0B8H
; (bits in IP0L)
PX3L       BIT     IP0L.7
PX2L       BIT     IP0L.6
PT2L       BIT     IP0L.5
PSL        BIT     IP0L.4
PT1L       BIT     IP0L.3
PX1L       BIT     IP0L.2
PT0L       BIT     IP0L.1
PX0L       BIT     IP0L.0

SADEN      DATA    0B9H

ADCFG1     DATA    0BBH
; (bits in ADCFG1)
//GF         EQU     080h    // Replace by GF_7
VRS2       EQU     040h
VRS1       EQU     020h
SIGN       EQU     010h
AOS3       EQU     008h
AOS2       EQU     004h
AOS1       EQU     002h
AOS0       EQU     001h

PWMCR      DATA    0BCH
; (bits in PWMCR)
PCAE       EQU     080h
EXDT       EQU     040h
PFCF       EQU     010h
PFCM       EQU     008h
PFCS2      EQU     004h
PFCS1      EQU     002h
PFCS0      EQU     001h

PDTCR      DATA    0BDH
; (bits in PDTCR)
DTPS1      EQU     080h
DTPS0      EQU     040h
DT5        EQU     020h
DT4        EQU     010h
DT3        EQU     008h
DT2        EQU     004h
DT1        EQU     002h
DT0        EQU     001h

RTCCR      DATA    0BEH
; (bits in RTCCR)
RTCE       EQU     080h
RTCO       EQU     040h
RTCRL5     EQU     020h
RTCRL4     EQU     010h
RTCRL3     EQU     008h
RTCRL2     EQU     004h
RTCRL1     EQU     002h
RTCRL0     EQU     001h

CKCON1     DATA    0BFH
; (bits in CKCON1)
XTOR       EQU     080h
XCKS5      EQU     020h
XCKS4      EQU     010h
XCKS3      EQU     008h
XCKS2      EQU     004h
XCKS1      EQU     002h
XCKS0      EQU     001h

XICON      DATA    0C0H
; (bits in XICON)
INT3H      BIT     XICON.7
EX3        BIT     XICON.6
IE3        BIT     XICON.5
IT3        BIT     XICON.4
INT2H      BIT     XICON.3
EX2        BIT     XICON.2
IE2        BIT     XICON.1
IT2        BIT     XICON.0

XICFG      DATA    0C1H
; (bits in XICFG)
INT1IS1    EQU     080h
INT1IS0    EQU     040h
INT0IS1    EQU     020h
INT0IS0    EQU     010h
X3FLT      EQU     008h
X2FLT      EQU     004h
X1FLT      EQU     002h
X0FLT      EQU     001h

ADCFG0     DATA    0C3H
; (bits in ADCFG0)
ADCKS2     EQU     080h
ADCKS1     EQU     040h
ADCKS0     EQU     020h
ADRJ       EQU     010h
ADPS       EQU     008h
VRS0       EQU     004h
ADTM1      EQU     002h
ADTM0      EQU     001h

ADCON0     DATA    0C4H
; (bits in ADCON0)
ADCEN      EQU     080h
CH3        EQU     020h
ADCI       EQU     010h
ADCS       EQU     008h
CHS2       EQU     004h
CHS1       EQU     002h
CHS0       EQU     001h

ADCDL      DATA    0C5H
; (bits in ADCDL)
ADCV1      EQU     080h
ADCV0      EQU     040h

ADCDH      DATA    0C6H
; (bits in ADCDH)
ADCV9      EQU     080h
ADCV8      EQU     040h
ADCV7      EQU     020h
ADCV6      EQU     010h
ADCV5      EQU     008h
ADCV4      EQU     004h
ADCV3      EQU     002h
ADCV2      EQU     001h

CKCON0     DATA    0C7H
; (bits in CKCON0)
AFS        EQU     080h
ENCKM      EQU     040h
CKMIS1     EQU     020h
CKMIS0     EQU     010h
CCKS       EQU     008h
SCKS2      EQU     004h
SCKS1      EQU     002h
SCKS0      EQU     001h

T2CON      DATA    0C8H
; (bits in T2CON)
TF2        BIT     T2CON.7
EXF2       BIT     T2CON.6
RCLK       BIT     T2CON.5
TCLK       BIT     T2CON.4
EXEN2      BIT     T2CON.3
TR2        BIT     T2CON.2
C_T2       BIT     T2CON.1
CP_RL2     BIT     T2CON.0

T2MOD      DATA    0C9H
; (bits in T2MOD)
T2EXH      EQU     020h
T2X12      EQU     010h
T2OE       EQU     002h
DCEN2      EQU     001h

RCAP2L     DATA    0CAH

RCAP2H     DATA    0CBH

TL2        DATA    0CCH

TH2        DATA    0CDH

CLRL       DATA    0CEH

CHRL       DATA    0CFH

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

SIADR      DATA    0D1H
; (bits in SIADR)
GC         EQU     001h

SI1ADR     DATA    0D1H
; (bits in SI1ADR)
GC1        EQU     001h

SIDAT      DATA    0D2H

SI1DAT     DATA    0D2H

SISTA      DATA    0D3H

SI1STA     DATA    0D3H

SICON      DATA    0D4H
; (bits in SICON)
CR2        EQU     080h
ENSI       EQU     040h
STA        EQU     020h
STO        EQU     010h
SI         EQU     008h
AA         EQU     004h
CR1        EQU     002h
CR0        EQU     001h

SI1CON     DATA    0D4H
; (bits in SI1CON)
CR21       EQU     080h
ENSI1      EQU     040h
STA1       EQU     020h
STO1       EQU     010h
SI1        EQU     008h
AA1        EQU     004h
CR11       EQU     002h
CR01       EQU     001h

KBPATN     DATA    0D5H

KBCON      DATA    0D6H
; (bits in KBCON)
PATNS      EQU     002h
KBIF       EQU     001h

KBMASK     DATA    0D7H

CCON       DATA    0D8H
; (bits in CCON)
CF         BIT     CCON.7
CR         BIT     CCON.6
CCF5       BIT     CCON.5
CCF4       BIT     CCON.4
CCF3       BIT     CCON.3
CCF2       BIT     CCON.2
CCF1       BIT     CCON.1
CCF0       BIT     CCON.0

CMOD       DATA    0D9H
; (bits in CMOD)
CIDL       EQU     080h
BME4       EQU     040h
BME2       EQU     020h
BME0       EQU     010h
CPS2       EQU     008h
CPS1       EQU     004h
CPS0       EQU     002h
ECF        EQU     001h

CCAPM0     DATA    0DAH
; (bits in CCAPM0)
DTE0       EQU     080h
ECOM0      EQU     040h
CAPP0      EQU     020h
CAPN0      EQU     010h
MAT0       EQU     008h
TOG0       EQU     004h
PWM0       EQU     002h
ECCF0      EQU     001h

CCAPM6     DATA    0DAH
; (bits in CCAPM6)
BME6       EQU     080h
PWM6       EQU     002h

CCAPM1     DATA    0DBH
; (bits in CCAPM1)
ECOM1      EQU     040h
CAPP1      EQU     020h
CAPN1      EQU     010h
MAT1       EQU     008h
TOG1       EQU     004h
PWM1       EQU     002h
ECCF1      EQU     001h

CCAPM7     DATA    0DBH
; (bits in CCAPM7)
PWM7       EQU     002h

CCAPM2     DATA    0DCH
; (bits in CCAPM2)
DTE2       EQU     080h
ECOM2      EQU     040h
CAPP2      EQU     020h
CAPN2      EQU     010h
MAT2       EQU     008h
TOG2       EQU     004h
PWM2       EQU     002h
ECCF2      EQU     001h

CCAPM3     DATA    0DDH
; (bits in CCAPM3)
ECOM3      EQU     040h
CAPP3      EQU     020h
CAPN3      EQU     010h
MAT3       EQU     008h
TOG3       EQU     004h
PWM3       EQU     002h
ECCF3      EQU     001h

CCAPM4     DATA    0DEH
; (bits in CCAPM4)
DTE4       EQU     080h
ECOM4      EQU     040h
CAPP4      EQU     020h
CAPN4      EQU     010h
MAT4       EQU     008h
TOG4       EQU     004h
PWM4       EQU     002h
ECCF4      EQU     001h

CCAPM5     DATA    0DFH
; (bits in CCAPM5)
ECOM5      EQU     040h
CAPP5      EQU     020h
CAPN5      EQU     010h
MAT5       EQU     008h
TOG5       EQU     004h
PWM5       EQU     002h
ECCF5      EQU     001h

ACC        DATA    0E0H

WDTCR      DATA    0E1H
; (bits in WDTCR)
WREN       EQU     080h
NSW        EQU     040h
ENW        EQU     020h
CLW        EQU     010h
WIDL       EQU     008h
PS2        EQU     004h
PS1        EQU     002h
PS0        EQU     001h

IFD        DATA    0E2H

IFADRH     DATA    0E3H

IFADRL     DATA    0E4H

IFMT       DATA    0E5H
; (bits in IFMT)
//GF         EQU     080h    // Replace by GF_7
//GF         EQU     040h	   // Replace by GF_6
//GF         EQU     020h    // Replace by GF_5
//GF         EQU     010h    // Replace by GF_4
//GF         EQU     008h    // Replace by GF_3
MS2        EQU     004h
MS1        EQU     002h
MS0        EQU     001h

SCMD       DATA    0E6H

ISPCR      DATA    0E7H
; (bits in ISPCR)
ISPEN      EQU     080h
BS         EQU     040h
SRST       EQU     020h
CFAIL      EQU     010h
//GF         EQU     008h    // Replace by GF_3
DATM2      EQU     004h
DATM1      EQU     002h
DATM0      EQU     001h

P4         DATA    0E8H
; (bits in P4)
P47        BIT     P4.7
P46        BIT     P4.6
P45        BIT     P4.5
P44        BIT     P4.4
P43        BIT     P4.3
P42        BIT     P4.2
P41        BIT     P4.1
P40        BIT     P4.0

CL         DATA    0E9H

CCAP0L     DATA    0EAH

CCAP6L     DATA    0EAH

CCAP1L     DATA    0EBH

CCAP7L     DATA    0EBH

CCAP2L     DATA    0ECH

CCAP3L     DATA    0EDH

CCAP4L     DATA    0EEH

CCAP5L     DATA    0EFH

B          DATA    0F0H

PAOE       DATA    0F1H
; (bits in PAOE)
P47OP4     EQU     080h
P41OP2     EQU     040h
P40OP2     EQU     020h
P24OP2     EQU     010h
P26OP4     EQU     008h
P21OP0     EQU     004h
P20OP0     EQU     002h
P22OP0     EQU     001h

PCAPWM0    DATA    0F2H
; (bits in PCAPWM0)
P0RS1      EQU     080h
P0RS0      EQU     040h
P0PS2      EQU     020h
P0PS1      EQU     010h
P0PS0      EQU     008h
P0INV      EQU     004h
EPC0H      EQU     002h
EPC0L      EQU     001h

PCAPWM6    DATA    0F2H
; (bits in PCAPWM6)
P6RS1      EQU     080h
P6RS0      EQU     040h
P6PS2      EQU     020h
P6PS1      EQU     010h
P6PS0      EQU     008h
P6INV      EQU     004h
EPC6H      EQU     002h
EPC6L      EQU     001h

PCAPWM1    DATA    0F3H
; (bits in PCAPWM1)
P1RS1      EQU     080h
P1RS0      EQU     040h
P1PS2      EQU     020h
P1PS1      EQU     010h
P1PS0      EQU     008h
P1INV      EQU     004h
EPC1H      EQU     002h
EPC1L      EQU     001h

PCAPWM7    DATA    0F3H
; (bits in PCAPWM7)
P7RS1      EQU     080h
P7RS0      EQU     040h
P7PS2      EQU     020h
P7PS1      EQU     010h
P7PS0      EQU     008h
P7INV      EQU     004h
EPC7H      EQU     002h
EPC7L      EQU     001h

PCAPWM2    DATA    0F4H
; (bits in PCAPWM2)
P2RS1      EQU     080h
P2RS0      EQU     040h
P2PS2      EQU     020h
P2PS1      EQU     010h
P2PS0      EQU     008h
P2INV      EQU     004h
EPC2H      EQU     002h
EPC2L      EQU     001h

PCAPWM3    DATA    0F5H
; (bits in PCAPWM3)
P3RS1      EQU     080h
P3RS0      EQU     040h
P3PS2      EQU     020h
P3PS1      EQU     010h
P3PS0      EQU     008h
P3INV      EQU     004h
EPC3H      EQU     002h
EPC3L      EQU     001h

PCAPWM4    DATA    0F6H
; (bits in PCAPWM4)
P4RS1      EQU     080h
P4RS0      EQU     040h
P4PS2      EQU     020h
P4PS1      EQU     010h
P4PS0      EQU     008h
P4INV      EQU     004h
EPC4H      EQU     002h
EPC4L      EQU     001h

PCAPWM5    DATA    0F7H
; (bits in PCAPWM5)
P5RS1      EQU     080h
P5RS0      EQU     040h
P5PS2      EQU     020h
P5PS1      EQU     010h
P5PS0      EQU     008h
P5INV      EQU     004h
EPC5H      EQU     002h
EPC5L      EQU     001h

P5         DATA    0F8H
; (bits in P5)
P57        BIT     P5.7
P56        BIT     P5.6
P55        BIT     P5.5
P54        BIT     P5.4
P53        BIT     P5.3
P52        BIT     P5.2
P51        BIT     P5.1
P50        BIT     P5.0

P6         DATA    0F8H
; (bits in P6)
P67        BIT     P6.7
P66        BIT     P6.6
P65        BIT     P6.5
P64        BIT     P6.4
P63        BIT     P6.3
P62        BIT     P6.2
P61        BIT     P6.1
P60        BIT     P6.0

CH         DATA    0F9H

CCAP0H     DATA    0FAH

CCAP6H     DATA    0FAH

CCAP1H     DATA    0FBH

CCAP7H     DATA    0FBH

CCAP2H     DATA    0FCH

CCAP3H     DATA    0FDH

CCAP4H     DATA    0FEH

CCAP5H     DATA    0FFH

// Page P

IAPLB_P    EQU     003h
; (bits in IAPLB)
IAPLB6     EQU     080h
IAPLB5     EQU     040h
IAPLB4     EQU     020h
IAPLB3     EQU     010h
IAPLB2     EQU     008h
IAPLB1     EQU     004h
IAPLB0     EQU     002h

CKCON2_P   EQU     040h
; (bits in CKCON2)
XTGS1      EQU     080h
XTGS0      EQU     040h
XTALE      EQU     020h
IHRCOE     EQU     010h
MCKS1      EQU     008h
MCKS0      EQU     004h
OSCS1      EQU     002h
OSCS0      EQU     001h

CKCON3_P   EQU     041h
; (bits in CKCON3)
FWKP       EQU     020h
MCKD1      EQU     008h
MCKD0      EQU     004h
MCDS1      EQU     002h
MCDS0      EQU     001h

PCON2_P    EQU     044h
; (bits in PCON2)
AWBOD1     EQU     080h
BO1S1      EQU     020h
BO1S0      EQU     010h
BO1RE      EQU     008h
EBOD1      EQU     004h
BO0RE      EQU     002h

SPCON0_P   EQU     048h
; (bits in SPCON0)
RTCCTL     EQU     080h
P6CTL      EQU     040h
P4CTL      EQU     020h
WRCTL      EQU     010h
CKCTL1     EQU     008h
CKCTL0     EQU     004h
PWCTL1     EQU     002h
PWCTL0     EQU     001h

DCON0_P    EQU     04Ch
; (bits in DCON0)
IAPO       EQU     040h
IORCTL     EQU     004h
RSTIO      EQU     002h
OCDE       EQU     001h

PCON0_P    EQU     087h

PCON1_P    EQU     097h

TRCCR_P    EQU     0BEh

CKCON1_P   EQU     0BFh

CKCON0_P   EQU     0C7h

WDTCR_P    EQU     0E1h

P4_P       EQU     0E8h

P6_P       EQU     0F8h

#endif
