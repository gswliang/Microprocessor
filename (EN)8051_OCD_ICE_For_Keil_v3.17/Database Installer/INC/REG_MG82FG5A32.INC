#ifndef __REG_MG82FG5A32_INC
#define __REG_MG82FG5A32_INC
;(System)
ACC        DATA    0E0H
B          DATA    0F0H
SP         DATA    81H
DPL        DATA    82H
DPH        DATA    83H

PSW        DATA    0D0H
;  (PSW)
CY         BIT     PSW.7
AC         BIT     PSW.6
F0         BIT     PSW.5
RS1        BIT     PSW.4
RS0        BIT     PSW.3
OV         BIT     PSW.2
F1         BIT     PSW.1
P          BIT     PSW.0

; (I/O Port)
P0         DATA    80H
; (P0)
P07        BIT     P0.7
P06        BIT     P0.6
P05        BIT     P0.5
P04        BIT     P0.4
P03        BIT     P0.3
P02        BIT     P0.2
P01        BIT     P0.1
P00        BIT     P0.0
; (P0 alternate)
AD7        BIT     P0.7
AD6        BIT     P0.6
AD5        BIT     P0.5
AD4        BIT     P0.4
AD3        BIT     P0.3
AD2        BIT     P0.2
AD1        BIT     P0.1
AD0        BIT     P0.0

KBI7       BIT     P0.7
KBI6       BIT     P0.6
KBI5       BIT     P0.5
KBI4       BIT     P0.4
KBI3       BIT     P0.3
KBI2       BIT     P0.2
KBI1       BIT     P0.1
KBI0       BIT     P0.0

T3         BIT     P0.1
T3CKO      BIT     P0.1
T3EX       BIT     P0.0

P1         DATA    90H
; (P1)
P17        BIT     P1.7
P16        BIT     P1.6
P15        BIT     P1.5
P14        BIT     P1.4
P13        BIT     P1.3
P12        BIT     P1.2
P11        BIT     P1.1
P10        BIT     P1.0
; (P1 alternate)
AIN7       BIT     P1.7
AIN6       BIT     P1.6
AIN5       BIT     P1.5
AIN4       BIT     P1.4
AIN3       BIT     P1.3
AIN2       BIT     P1.2
AIN1       BIT     P1.1
AIN0       BIT     P1.0 

SPICLK     BIT     P1.7
MISO       BIT     P1.6
MOSI       BIT     P1.5
nSS        BIT     P1.4
TXD1       BIT     P1.3
RXD1       BIT     P1.2
T2EX       BIT     P1.1
T2         BIT     P1.0
T2CKO      BIT     P1.0

P2         DATA    0A0H
; (P2)
P27        BIT     P2.7
P26        BIT     P2.6
P25        BIT     P2.5
P24        BIT     P2.4
P23        BIT     P2.3
P22        BIT     P2.2
P21        BIT     P2.1
P20        BIT     P2.0
; (P2 alternate)
CEX5       BIT     P2.7
CEX4       BIT     P2.6
CEX3       BIT     P2.5
CEX2       BIT     P2.4
CEX1       BIT     P2.3
CEX0       BIT     P2.2
ECI        BIT     P2.1
SICKO      BIT     P2.0

P3         DATA    0B0H
; (P3)
P37        BIT     P3.7
P36        BIT     P3.6
P35        BIT     P3.5
P34        BIT     P3.4
P33        BIT     P3.3
P32        BIT     P3.2
P31        BIT     P3.1
P30        BIT     P3.0
; (P3 alternate)
nRD        BIT     P3.7
nWR        BIT     P3.6
T1         BIT     P3.5
T1CKO      BIT     P3.5
T0         BIT     P3.4
T0CKO      BIT     P3.4
nINT1      BIT     P3.3
nINT0      BIT     P3.2
TXD0       BIT     P3.1
RXD0       BIT     P3.0

P4         DATA    0E8H
P4_P       EQU     0E8H     // for used in page P
; (P4)
P46        BIT     P4.6
P45        BIT     P4.5
P44        BIT     P4.4
P43        BIT     P4.3
P42        BIT     P4.2
P41        BIT     P4.1
P40        BIT     P4.0
; (P4 alternate)  
ALE        BIT     P4.6
OCD_SDA    BIT     P4.5
OCD_SCL    BIT     P4.4
nINT2      BIT     P4.3
nINT3      BIT     P4.2
TWI_SDA    BIT     P4.1
TWI_SCL    BIT     P4.0

P5         DATA    0F8H
; (P5)
P57        BIT     P5.7
P56        BIT     P5.6
P55        BIT     P5.5
P54        BIT     P5.4
P53        BIT     P5.3
P52        BIT     P5.2
P51        BIT     P5.1
P50        BIT     P5.0

P6         DATA    0F8H                     
P6_P       EQU     0F8H     // for used in page P
; (P6)
P67        BIT     P6.7
P66        BIT     P6.6
P65        BIT     P6.5
P64        BIT     P6.4
P63        BIT     P6.3
P62        BIT     P6.2
P61        BIT     P6.1
P60        BIT     P6.0
; (P6 alternate)
XTAL1      BIT     P6.1
ICKO       BIT     P6.0
ECKI       BIT     P6.0
XTAL2      BIT     P6.0

; (Interrupt)
IE         DATA    0A8H
; (IE)
EA         BIT     IE.7
GF4        BIT     IE.6
ET2        BIT     IE.5
ES0        BIT     IE.4
ET1        BIT     IE.3
EX1        BIT     IE.2
ET0        BIT     IE.1
EX0        BIT     IE.0
 
IP0L       DATA    0B8H
IP         DATA    0B8H      // for compatible
; (IPOL)
PX3L       BIT     IP0L.7
PX2L       BIT     IP0L.6
PT2L       BIT     IP0L.5
PSL        BIT     IP0L.4
PT1L       BIT     IP0L.3
PX1L       BIT     IP0L.2
PT0L       BIT     IP0L.1
PX0L       BIT     IP0L.0

IP0H       DATA    0B7H
IPH        DATA    0B7H      // for compatible
; (IPOH)
PX3H       EQU     080h
PX2H       EQU     040h
PT2H       EQU     020h
PSH        EQU     010h
PT1H       EQU     008h
PX1H       EQU     004h
PT0H       EQU     002h
PX0H       EQU     001h

EIE1       DATA    0ADh
AUXIE      DATA    0ADh      // for compatible
; (EIE1)
ETWSI      EQU     040h
EKB        EQU     020h
ES1        EQU     010h
ESF        EQU     008h
EPCA       EQU     004h
EADC       EQU     002h
ESPI       EQU     001h

EIE2       DATA    0A5H
; (EIE2)
ET3        EQU     001h

XICON      DATA    0C0H
; (XICON)
INT3H      BIT     XICON.7
EX3        BIT     XICON.6
IE3        BIT     XICON.5
IT3        BIT     XICON.4
INT2H      BIT     XICON.3
EX2        BIT     XICON.2
IE2        BIT     XICON.1
IT2        BIT     XICON.0

EIP1L      DATA    0AEH
AUXIP      DATA    0AEH      // for compatible
; (EIP1L)
PTWIL      EQU     040h
PKBL       EQU     020h
PS1L       EQU     010h
PSFL       EQU     008h
PPCAL      EQU     004h
PADCL      EQU     002h
PSPIL      EQU     001h

EIP2L      DATA    0A6H
; (EIP2L)
PT3L       EQU     001h

EIP1H      DATA    0AFH
AUXIPH     DATA    0AFH      // for compatible
; (EIP1H)
PTWIH      EQU     040h
PKBH       EQU     020h
PS1H       EQU     010h
PSFH       EQU     008h
PPCAH      EQU     004h
PADCH      EQU     002h
PSPIH      EQU     001h

EIP2H      DATA    0A7H
; (EIP2H)
PT3H       EQU     001h

P0M0       DATA    093H
; (P0M0)
P0M07      EQU     080h
P0M06      EQU     040h
P0M05      EQU     020h
P0M04      EQU     010h
P0M03      EQU     008h
P0M02      EQU     004h
P0M01      EQU     002h
P0M00      EQU     001h

P1M0       DATA    091H
; (P1M0)
P1M07      EQU     080h
P1M06      EQU     040h
P1M05      EQU     020h
P1M04      EQU     010h
P1M03      EQU     008h
P1M02      EQU     004h
P1M01      EQU     002h
P1M00      EQU     001h

P1AIO      DATA    092H
; (P1AIO)
P17AIO     EQU     080h
P16AIO     EQU     040h
P15AIO     EQU     020h
P14AIO     EQU     010h
P13AIO     EQU     008h
P12AIO     EQU     004h
P11AIO     EQU     002h
P10AIO     EQU     001h

P2M0       DATA    095H
; (P2M0)
P2M07      EQU     080h
P2M06      EQU     040h
P2M05      EQU     020h
P2M04      EQU     010h
P2M03      EQU     008h
P2M02      EQU     004h
P2M01      EQU     002h
P2M00      EQU     001h

P3M0       DATA    0B1H
; (P3M0)
P3M07      EQU     080h
P3M06      EQU     040h
P3M05      EQU     020h
P3M04      EQU     010h
P3M03      EQU     008h
P3M02      EQU     004h
P3M01      EQU     002h
P3M00      EQU     001h

P3M1       DATA    0B2H
; (P3M1)
P3M17      EQU     080h
P3M16      EQU     040h
P3M15      EQU     020h
P3M14      EQU     010h
P3M13      EQU     008h
P3M12      EQU     004h
P3M11      EQU     002h
P3M10      EQU     001h

P4M0       DATA    0B3H
; (P4M0)
P4M06      EQU     040h
P4M05      EQU     020h
P4M04      EQU     010h
P4M03      EQU     008h
P4M02      EQU     004h
P4M01      EQU     002h
P4M00      EQU     001h

PUCON0     DATA    0B4H
; (PUCON0)
P4PU1      EQU     080h
P4PU0      EQU     040h
P2PU1      EQU     020h
P2PU0      EQU     010h
P1PU1      EQU     008h
P1PU0      EQU     004h
P0PU1      EQU     002h
P0PU0      EQU     001h

PUCON1     DATA    0B4H                          
; (PUCON1)
P6PU1      EQU     008h
P6PU0      EQU     004h
P5PU1      EQU     002h
P5PU0      EQU     001h

P5M0       DATA    0B5H
; (P5M0)
P5M07      EQU     080h
P5M06      EQU     040h
P5M05      EQU     020h
P5M04      EQU     010h
P5M03      EQU     008h
P5M02      EQU     004h
P5M01      EQU     002h
P5M00      EQU     001h

P6M0       DATA    0B5H            
; (P6M0)
P6M07      EQU     080h
P6M06      EQU     040h
P6M05      EQU     020h
P6M04      EQU     010h
P6M03      EQU     008h
P6M02      EQU     004h
P6M01      EQU     002h
P6M00      EQU     001h

; (Timer)
TCON       DATA    088H
; (TCON)
TF1        BIT     TCON.7
TR1        BIT     TCON.6
TF0        BIT     TCON.5
TR0        BIT     TCON.4
IE1        BIT     TCON.3
IT1        BIT     TCON.2
IE0        BIT     TCON.1
IT0        BIT     TCON.0

TMOD       DATA    089H
; (TMOD)
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

T2CON      DATA    0C8H
; (T2CON)
TF2        BIT     T2CON.7
EXF2       BIT     T2CON.6
RCLK       BIT     T2CON.5
TCLK       BIT     T2CON.4
EXEN2      BIT     T2CON.3
TR2        BIT     T2CON.2
C_T2       BIT     T2CON.1
CP_RL2     BIT     T2CON.0

T3CON      DATA    0C8H                  
; (T3CON)
TF3        BIT     T3CON.7
EXF3       BIT     T3CON.6
EXEN3      BIT     T3CON.3
TR3        BIT     T3CON.2
C_T3       BIT     T3CON.1

T2MOD      DATA    0C9H
; (T2MOD)
T2EXH      EQU     020h
T2X12      EQU     010h
T2OE       EQU     002h
DCEN2      EQU     001h

T3MOD      DATA    0C9H            
; (T3MOD)
T3SPL      EQU     080h
TL3X12     EQU     040h
T3EXH      EQU     020h
T3X12      EQU     010h
T3OE       EQU     002h

RCAP2L     DATA    0CAH
RCAP3L     DATA    0CAH                   
RCAP2H     DATA    0CBH
RCAP3H     DATA    0CBH         
TL2        DATA    0CCH
TL3        DATA    0CCH  
TH2        DATA    0CDH
TH3        DATA    0CDH  

; (Serial Port)
S0CON      DATA    098H
SCON       DATA    098H     // for compatible
; (S0CON)
SM00_FE    BIT     S0CON.7
SM10       BIT     S0CON.6
SM20       BIT     S0CON.5
REN0       BIT     S0CON.4
TB80       BIT     S0CON.3
RB80       BIT     S0CON.2
TI0        BIT     S0CON.1
RI0        BIT     S0CON.0

S1CON      DATA    098H   
; (S1CON)
SM01       BIT     S1CON.7
SM11       BIT     S1CON.6
SM21       BIT     S1CON.5
REN1       BIT     S1CON.4
TB81       BIT     S1CON.3
RB81       BIT     S1CON.2
TI1        BIT     S1CON.1
RI1        BIT     S1CON.0

S0BUF      DATA    099H
SBUF       DATA    099H     // for compatible
S1BUF      DATA    099H                       

S0CFG      DATA    09AH
SCFG       DATA    09AH     // for compatible
// (S0CFG)
URTS       EQU     080h
SMOD2      EQU     040h
URM0X6     EQU     020h

S1BRT      DATA    09AH                       

S1CFG      DATA    09BH
; (S1CFG)
S1TR       EQU     010h
S1MOD1     EQU     008h
S1TX12     EQU     004h
S1CKOE     EQU     002h
S1TME      EQU     001h

S1BRC      DATA    09BH         
SADDR      DATA    0A9H
SADEN      DATA    0B9H

; (ADC)
ADCFG0     DATA    0C3H
; (ADCFG0)
ADCKS2     EQU     080h
ADCKS1     EQU     040h
ADCKS0     EQU     020h
ADRJ       EQU     010h
ADTM1      EQU     002h
ADTM0      EQU     001h

ADCON0     DATA    0C4H
; (ADCON0)
ADCEN      EQU     080h
ADCMS      EQU     040h
AZEN       EQU     020h
ADCI       EQU     010h
ADCS       EQU     008h
CHS2       EQU     004h
CHS1       EQU     002h
CHS0       EQU     001h

ADCDL      DATA    0C5H
; (ADCDL)
ADCV3      EQU     080h
ADCV2      EQU     040h
ADCV1      EQU     020h
ADCV0      EQU     010h

ADCDH      DATA    0C6H
; (ADCDH)
ADCV11     EQU     080h
ADCV10     EQU     040h
ADCV9      EQU     020h
ADCV8      EQU     010h
ADCV7      EQU     008h
ADCV6      EQU     004h
ADCV5      EQU     002h
ADCV4      EQU     001h

;(Keypad Interrupt)
KBPATN     DATA    0D5H

KBCON      DATA    0D6H
; (KBCON)
PATNS      EQU     002h
KBIF       EQU     001h

KBMASK     DATA    0D7H

;(SPI)
SPSTAT     DATA    084H
SPISTAT    DATA    084H     // for compatible
; (SPSTAT)
SPIF       EQU     080h
WCOL       EQU     040h
THRF       EQU     020h
SPIBSY     EQU     010h
SPR2       EQU     001h

SPCON      DATA    085H
SPCTL      DATA    085H     // for compatible
SPICON     DATA    085H     // for compatible
SPICTL     DATA    085H     // for compatible
; (SPCON)
SSIG       EQU     080h
SPEN       EQU     040h
DORD       EQU     020h
MSTR       EQU     010h
CPOL       EQU     008h
CPHA       EQU     004h
SPR1       EQU     002h
SPR0       EQU     001h

SPDAT      DATA    086H
SPIDAT     DATA    086H     // for compatible

; (PCA)
CCON       DATA    0D8H
; (CCON)
CF         BIT     CCON.7
CR         BIT     CCON.6
CCF5       BIT     CCON.5
CCF4       BIT     CCON.4
CCF3       BIT     CCON.3
CCF2       BIT     CCON.2
CCF1       BIT     CCON.1
CCF0       BIT     CCON.0

CMOD       DATA    0D9H
; (CMOD)
CIDL       EQU     080h
CPS1       EQU     004h
CPS0       EQU     002h
ECF        EQU     001h

CCAPM0     DATA    0DAH
; (CCAPM0)
ECOM0      EQU     040h
CAPP0      EQU     020h
CAPN0      EQU     010h
MAT0       EQU     008h
TOG0       EQU     004h
PWM0       EQU     002h
ECCF0      EQU     001h

CCAPM1     DATA    0DBH
; (CCAPM1)
ECOM1      EQU     040h
CAPP1      EQU     020h
CAPN1      EQU     010h
MAT1       EQU     008h
TOG1       EQU     004h
PWM1       EQU     002h
ECCF1      EQU     001h

CCAPM2     DATA    0DCH
; (CCAPM2)
ECOM2      EQU     040h
CAPP2      EQU     020h
CAPN2      EQU     010h
MAT2       EQU     008h
TOG2       EQU     004h
PWM2       EQU     002h
ECCF2      EQU     001h

CCAPM3     DATA    0DDH
; (CCAPM3)
ECOM3      EQU     040h
CAPP3      EQU     020h
CAPN3      EQU     010h
MAT3       EQU     008h
TOG3       EQU     004h
PWM3       EQU     002h
ECCF3      EQU     001h

CCAPM4     DATA    0DEH
; (CCAPM4)
ECOM4      EQU     040h
CAPP4      EQU     020h
CAPN4      EQU     010h
MAT4       EQU     008h
TOG4       EQU     004h
PWM4       EQU     002h
ECCF4      EQU     001h

CCAPM5     DATA    0DFH
; (CCAPM5)
ECOM5      EQU     040h
CAPP5      EQU     020h
CAPN5      EQU     010h
MAT5       EQU     008h
TOG5       EQU     004h
PWM5       EQU     002h
ECCF5      EQU     001h

CL         DATA    0E9H
CCAP0L     DATA    0EAH
CCAP1L     DATA    0EBH
CCAP2L     DATA    0ECH
CCAP3L     DATA    0EDH
CCAP4L     DATA    0EEH
CCAP5L     DATA    0EFH
CH         DATA    0F9H
CCAP1H     DATA    0FBH
CCAP0H     DATA    0FAH
CCAP2H     DATA    0FCH
CCAP3H     DATA    0FDH
CCAP4H     DATA    0FEH
CCAP5H     DATA    0FFH

PCAPWM0    DATA    0F2H
; (PCAPWM0)
P0RS1      EQU     080h
P0RS0      EQU     040h
P0PS2      EQU     020h
P0PS1      EQU     010h
P0PS0      EQU     008h
P0INV      EQU     004h
EPC0H      EQU     002h
EPC0L      EQU     001h

PCAPWM1    DATA    0F3H
; (PCAPWM1)
P1RS1      EQU     080h
P1RS0      EQU     040h
P1PS2      EQU     020h
P1PS1      EQU     010h
P1PS0      EQU     008h
P1INV      EQU     004h
EPC1H      EQU     002h
EPC1L      EQU     001h

PCAPWM2    DATA    0F4H
; (PCAPWM2)
P2RS1      EQU     080h
P2RS0      EQU     040h
P2PS2      EQU     020h
P2PS1      EQU     010h
P2PS0      EQU     008h
P2INV      EQU     004h
EPC2H      EQU     002h
EPC2L      EQU     001h

PCAPWM3    DATA    0F5H
; (PCAPWM3)
P3RS1      EQU     080h
P3RS0      EQU     040h
P3PS2      EQU     020h
P3PS1      EQU     010h
P3PS0      EQU     008h
P3INV      EQU     004h
EPC3H      EQU     002h
EPC3L      EQU     001h

PCAPWM4    DATA    0F6H
; (PCAPWM4)
P4RS1      EQU     080h
P4RS0      EQU     040h
P4PS2      EQU     020h
P4PS1      EQU     010h
P4PS0      EQU     008h
P4INV      EQU     004h
EPC4H      EQU     002h
EPC4L      EQU     001h

PCAPWM5    DATA    0F7H
; (PCAPWM5)
P5RS1      EQU     080h
P5RS0      EQU     040h
P5PS2      EQU     020h
P5PS1      EQU     010h
P5PS0      EQU     008h
P5INV      EQU     004h
EPC5H      EQU     002h
EPC5L      EQU     001h
 
;(TWSI)
SIADR      DATA    0D1h
; (SIADR)
GC         EQU     001h

SIDAT      DATA    0D2h
SISTA      DATA    0D3h

SICON      DATA    0D4h
; (SICON)
CR2        EQU     080h
ENSI       EQU     040h
STA        EQU     020h
STO        EQU     010h
SI         EQU     008h
AA         EQU     004h
CR1        EQU     002h
CR0        EQU     001h

;(CLOCK)
CKCON0     DATA    0C7H
CKCON0_P   EQU     0C7H     // for used in page P
; (CKCON0)
ENCKM      EQU     040h
CKMIS1     EQU     020h
CKMIS0     EQU     010h
SCKS2      EQU     004h
SCKS1      EQU     002h
SCKS0      EQU     001h

CKCON1     DATA    0BFH
CKCON1_P   EQU     0BFH     // for used in page P
; (CKCON1)
XCKS5      EQU     020h
XCKS4      EQU     010h
XCKS3      EQU     008h
XCKS2      EQU     004h
XCKS1      EQU     002h
XCKS0      EQU     001h

;(Others)
PCON0      DATA    087H
PCON0_P    EQU     087H     // for used in page P
PCON       DATA    087H     // for compatible
; (PCON0)
SMOD1      EQU     080h  
SMOD0      EQU     040h
POF0       EQU     010h
GF1        EQU     008h
GF0        EQU     004h
PD         EQU     002h
IDL        EQU     001h

PCON1      DATA    097H
PCON1_P    EQU     097H     // for used in page P
; (PCON1)
SWRF       EQU     080h
EXRF       EQU     040h
BOF1       EQU     020h
BOF0       EQU     010h
WDTF       EQU     001h

SFIE       DATA    08EH
; (SFIE)
BOF1IE     EQU     004h
B0F0IE     EQU     002h
WDTFIE     EQU     001h

STRETCH    DATA    08FH
; (STRETCH)
EMAI1      EQU     080h
ALES1      EQU     020h
ALES0      EQU     010h
RWSH       EQU     008h
RWS2       EQU     004h
RWS1       EQU     002h
RWS0       EQU     001h

AUXR0      DATA    0A1H
; (AUXR0)
P60OC1     EQU     080h
P60OC0     EQU     040h
P60FD      EQU     020h
P4FS1      EQU     008h
P4FS0      EQU     004h
INT1H      EQU     002h
INT0H      EQU     001h

AUXR1      DATA    0A2H
; (AUXR1)
KBIPS1     EQU     080h
KBIPS0     EQU     040h
P5SPI      EQU     020h
P5S1       EQU     010h
P5T2       EQU     008h
P6PCA      EQU     004h
EXTRAM     EQU     002h
DPS        EQU     001h

AUXR2      DATA    0A3H
; (AUXR2)
INT3IS1    EQU     080h
INT3IS0    EQU     040h
INT2IS1    EQU     020h
INT2IS0    EQU     010h
T1X12      EQU     008h
T0X12      EQU     004h
T1CKOE     EQU     002h
T0CKOE     EQU     001h

SFRPI      DATA    0ACH
; (SFRPI)
IDX3       EQU     008h
IDX2       EQU     004h
IDX1       EQU     002h
IDX0       EQU     001h

WDTCR      DATA    0E1H
WDTCR_P    EQU     0E1H     // for used in page P
; (WDTCR)
WREN       EQU     080h
NSW        EQU     040h
ENW        EQU     020h
CLRW       EQU     010h
WIDL       EQU     008h
PS2        EQU     004h
PS1        EQU     002h
PS0        EQU     001h

;(ISP)
IFD        DATA    0E2h
IFADRH     DATA    0E3h
IFADRL     DATA    0E4h

IFMT       DATA    0E5h
; (IFMT)
MS2        EQU     004h
MS1        EQU     002h
MS0        EQU     001h

SCMD       DATA    0E6h

ISPCR      DATA    0E7h
; (ISPCR)
ISPEN      EQU     080h
BS         EQU     040h
SRST       EQU     020h
CFAIL      EQU     010h
MISPF      EQU     008h

; Page P
CKCON2     EQU     040H
PCON2      EQU     044H
PCON3      EQU     045H
SPCON0     EQU     048H

#endif