;for Megawin MG86FL(E)508
;------------------------------------------------------------------------------
;Standard SFRs
;------------------------------------------------------------------------------
;8051 Registers
;(Core)
#ifndef REG_MG86FL508_INC
#define REG_MG86FL508_INC

ACC        DATA   0E0H
B          DATA   0F0H
SP         DATA   81H
DPL        DATA   82H
DPH        DATA   83H

PSW        DATA   0D0H
;  (PSW)
CY         BIT    PSW.7
AC         BIT    PSW.6
F0         BIT    PSW.5
RS1        BIT    PSW.4
RS0        BIT    PSW.3
OV         BIT    PSW.2
F1         BIT    PSW.1
P          BIT    PSW.0

P1         DATA   90H
;  (P1)
P17        BIT    P1.7
P16        BIT    P1.6
P15        BIT    P1.5
P14        BIT    P1.4
P13        BIT    P1.3
P12        BIT    P1.2
P11        BIT    P1.1
P10        BIT    P1.0
;  (P1 alternate)
AIN7       BIT    P1.7
AIN6       BIT    P1.6
BEEP       BIT    P1.6
AIN5       BIT    P1.5
RTCKO      BIT    P1.5
AIN4       BIT    P1.4
AIN3       BIT    P1.3
AIN2       BIT    P1.2
AIN1       BIT    P1.1
AIN0       BIT    P1.0

P2         DATA   0A0H
;  (P2)
P27        BIT    P2.7
P26        BIT    P2.6
P25        BIT    P2.5
P24        BIT    P2.4
P23        BIT    P2.3
P22        BIT    P2.2
P21        BIT    P2.1
P20        BIT    P2.0
;  (P2 alternate)
;PWM3       BIT    P2.4
;PWM2       BIT    P2.0

P3         DATA   0B0H
;  (P3)
P37        BIT    P3.7
P36        BIT    P3.6
P35        BIT    P3.5
P34        BIT    P3.4
P33        BIT    P3.3
P32        BIT    P3.2
P31        BIT    P3.1
P30        BIT    P3.0
;  (P3 alternate)
S0MI       BIT    P3.7
CEX0       BIT    P3.7
RST        BIT    P3.6
T1         BIT    P3.5
T1CKO      BIT    P3.5
CEX1       BIT    P3.5
T0         BIT    P3.4
T0CKO      BIT    P3.4
ECI        BIT    P3.4
TWI_SDA    BIT    P3.4
nINT1      BIT    P3.3
TWI_SCL    BIT    P3.3
nINT0      BIT    P3.2
TXD0       BIT    P3.1
RXD0       BIT    P3.0

P4         DATA   0E8H
;  (P4)
P41        BIT    P4.1
P40        BIT    P4.0
;  (P4 alternate)
XTAL2      BIT    P4.0
ICKO       BIT    P4.0
ECKI       BIT    P4.0
XTAL1      BIT    P4.1

PCON0      DATA   087H
PCON0_P    EQU    087H
SMOD1      EQU    080h
SMOD0      EQU    040h
GF         EQU    020h
POF        EQU    010h
GF1        EQU    008h
GF0        EQU    004h
PD         EQU    002h
IDL        EQU    001h

TCON       DATA   088H
;  (TCON)
TF1        BIT    TCON.7
TR1        BIT    TCON.6
TF0        BIT    TCON.5
TR0        BIT    TCON.4
IE1        BIT    TCON.3
IT1        BIT    TCON.2
IE0        BIT    TCON.1
IT0        BIT    TCON.0

TMOD       DATA   089H
T1GATE     EQU    080h
T1CT       EQU    040h
T1M1       EQU    020h
T1M0       EQU    010h
T0GATE     EQU    008h
T0CT       EQU    004h
T0M1       EQU    002h
T0M0       EQU    001h

TL0        DATA   08AH
TL1        DATA   08BH
TH0        DATA   08CH
TH1        DATA   08DH

SCON       DATA   098H
;  (SCON)
FE         BIT    SCON.7
SM0        BIT    SCON.7
SM1        BIT    SCON.6
SM2        BIT    SCON.5
REN        BIT    SCON.4
TB8        BIT    SCON.3
RB8        BIT    SCON.2
TI         BIT    SCON.1
RI         BIT    SCON.0

SBUF       DATA   099H

IE         DATA   0A8H
;  (IE)
EA         BIT    IE.7
GF4        BIT    IE.6
ES         BIT    IE.4
ET1        BIT    IE.3
EX1        BIT    IE.2
ET0        BIT    IE.1
EX0        BIT    IE.0

IP0H       DATA   0B7H
PSH        EQU    010h
PT1H       EQU    008h
PX1H       EQU    004h
PT0H       EQU    002h
PX0H       EQU    001h

IP0L       DATA   0B8H
;  (IP0L)
PSL        BIT    IP0L.4
PT1L       BIT    IP0L.3
PX1L       BIT    IP0L.2
PT0L       BIT    IP0L.1
PX0L       BIT    IP0L.0



; -----------------------------------------------------------------------------
; New-defined SFRs
; -----------------------------------------------------------------------------*/

; MG86FL(E)508 Extensions 

SFIE       DATA   08EH
UTIE       EQU    080h
SDIFIE     EQU    040h
RTCFIE     EQU    010h
KBIFIE     EQU    008h
BOF0IE     EQU    002h
WDTFIE     EQU    001h

P1M0       DATA   091H
P1M07      EQU    080h
P1M06      EQU    040h
P1M05      EQU    020h
P1M04      EQU    010h
P1M03      EQU    008h
P1M02      EQU    004h
P1M01      EQU    002h
P1M00      EQU    001h

P1AIO      DATA   092H
P17AIO     EQU    080h
P16AIO     EQU    040h
P15AIO     EQU    020h
P14AIO     EQU    010h
P13AIO     EQU    008h
P12AIO     EQU    004h
P11AIO     EQU    002h
P10AIO     EQU    001h

P2M0       DATA   095H
P2M07      EQU    080h
P2M06      EQU    040h
P2M05      EQU    020h
P2M04      EQU    010h
P2M03      EQU    008h
P2M02      EQU    004h
P2M01      EQU    002h
P2M00      EQU    001h

BOREV      DATA   096H
BOREV7     EQU    080h
BOREV6     EQU    040h
BOREV5     EQU    020h
BOREV4     EQU    010h
BOREV3     EQU    008h
BOREV2     EQU    004h
BOREV1     EQU    002h
BOREV0     EQU    001h

PCON1      DATA   097H
PCON1_P    EQU    097H
SWRF       EQU    080h
EXRF       EQU    040h
RTCF       EQU    010h
KBIF       EQU    008h
BOF0       EQU    002h
WDTF       EQU    001h

AUXR0      DATA   0A1H
P40OC1     EQU    080h
P40OC0     EQU    040h
P40FD      EQU    020h
T0XL       EQU    010h
P1FS1      EQU    008h
P1FS0      EQU    004h
INT1H      EQU    002h
INT0H      EQU    001h

AUXR1      DATA   0A2H
P3TWI      EQU    080h
P4S0MI     EQU    040h
P2PCA      EQU    020h
XTOR       EQU    010h
STAF       EQU    008h
STOF       EQU    004h
BPOC1      EQU    002h
BPOC0      EQU    001h

AUXR2      DATA   0A3H
BTI        EQU    040h
URM0X3     EQU    020h
SM3        EQU    010h
T1X12      EQU    008h
T0X12      EQU    004h
T1CKOE     EQU    002h
T0CKOE     EQU    001h

SADDR      DATA   0A9H

EIE1       DATA   0ADH
ESF        EQU    008h
EPCA       EQU    004h
EADC       EQU    002h

EIP1L      DATA   0AEH
PSFL       EQU    008h
PPCAL      EQU    004h
PADCL      EQU    002h

EIP1H      DATA   0AFH
PSFH       EQU    008h
PPCAH      EQU    004h
PADCH      EQU    002h

P3M0       DATA   0B1H
P3M07      EQU    080h
P3M06      EQU    040h
P3M05      EQU    020h
P3M04      EQU    010h
P3M03      EQU    008h
P3M02      EQU    004h
P3M01      EQU    002h
P3M00      EQU    001h

P3M1       DATA   0B2H
P3M17      EQU    080h
P3M16      EQU    040h
P3M15      EQU    020h
P3M14      EQU    010h
P3M13      EQU    008h
P3M12      EQU    004h
P3M11      EQU    002h
P3M10      EQU    001h

P4M0       DATA   0B3H
P4M01      EQU    002h
P4M00      EQU    001h

PUCON0     DATA   0B4H
PU40       EQU    040h
PU21       EQU    020h
PU20       EQU    010h
PU11       EQU    008h
PU10       EQU    004h

RTCTM      DATA   0B6H
RTCCS1     EQU    080h
RTCCS0     EQU    040h
RTCCT5     EQU    020h
RTCCT4     EQU    010h
RTCCT3     EQU    008h
RTCCT2     EQU    004h
RTCCT1     EQU    002h
RTCCT0     EQU    001h

SADEN      DATA   0B9H

RTCCR      DATA   0BEH
RTCCR_P    EQU    0BEH
RTCE       EQU    080h
RTCOE      EQU    040h
RTCRL5     EQU    020h
RTCRL4     EQU    010h
RTCRL3     EQU    008h
RTCRL2     EQU    004h
RTCRL1     EQU    002h
RTCRL0     EQU    001h

ADCON0     DATA   0C4H
ADCEN      EQU    080h
SPEED1     EQU    040h
SPEED0     EQU    020h
ADCI       EQU    010h
ADCS       EQU    008h
CHS2       EQU    004h
CHS1       EQU    002h
CHS0       EQU    001h

ADCDH      DATA   0C6H
ADCV7      EQU    080h
ADCV6      EQU    040h
ADCV5      EQU    020h
ADCV4      EQU    010h
ADCV3      EQU    008h
ADCV2      EQU    004h
ADCV1      EQU    002h
ADCV0      EQU    001h

CKCON0     DATA   0C7H
CKCON0_P   EQU    0C7H
AFS        EQU    080h
SCKS2      EQU    004h
SCKS1      EQU    002h
SCKS0      EQU    001h

CLRL       DATA   0CEH
CLRL7      EQU    080h
CLRL6      EQU    040h
CLRL5      EQU    020h
CLRL4      EQU    010h
CLRL3      EQU    008h
CLRL2      EQU    004h
CLRL1      EQU    002h
CLRL0      EQU    001h

CHRL       DATA   0CFH
CHRL7      EQU    080h
CHRL6      EQU    040h
CHRL5      EQU    020h
CHRL4      EQU    010h
CHRL3      EQU    008h
CHRL2      EQU    004h
CHRL1      EQU    002h
CHRL0      EQU    001h

P3KBIE     DATA   0D6H
P37KBIE    EQU    080h
P36KBIE    EQU    040h
P35KBIE    EQU    020h
P34KBIE    EQU    010h
P33KBIE    EQU    008h
P32KBIE    EQU    004h
P31KBIE    EQU    002h
P30KBIE    EQU    001h

P1KBIE     DATA   0D7H
P17KBIE    EQU    080h
P16KBIE    EQU    040h
P15KBIE    EQU    020h
P14KBIE    EQU    010h
P13KBIE    EQU    008h
P12KBIE    EQU    004h
P11KBIE    EQU    002h
P10KBIE    EQU    001h

CCON       DATA   0D8H
CF         BIT    CCON.7
CR         BIT    CCON.6
CCF1       BIT    CCON.1
CCF0       BIT    CCON.0


CMOD       DATA   0D9H
CIDL       EQU    080h
CPS1       EQU    004h
CPS0       EQU    002h
ECF        EQU    001h

CCAPM0     DATA   0DAH
ECOM0      EQU    040h
CAPP0      EQU    020h
CAPN0      EQU    010h
MAT0       EQU    008h
TOG0       EQU    004h
PWM0       EQU    002h
ECCF0      EQU    001h

CCAPM1     DATA   0DBH
ECOM1      EQU    040h
CAPP1      EQU    020h
CAPN1      EQU    010h
MAT1       EQU    008h
TOG1       EQU    004h
PWM1       EQU    002h
ECCF1      EQU    001h

WDTCR      DATA   0E1H
WDTCR_P    EQU    0E1H
WREN       EQU    080h
NSW        EQU    040h
ENW        EQU    020h
CLW        EQU    010h
WIDL       EQU    008h
PS2        EQU    004h
PS1        EQU    002h
PS0        EQU    001h

IFD        DATA   0E2H
IFADRH     DATA   0E3H
IFADRL     DATA   0E4H

IFMT       DATA   0E5H
MS2        EQU    004h
MS1        EQU    002h
MS0        EQU    001h

SCMD       DATA   0E6H

ISPCR      DATA   0E7H
ISPEN      EQU    080h
BS         EQU    040h
SRST       EQU    020h
CFAIL      EQU    010h

CL         DATA   0E9H
CCAP0L     DATA   0EAH
CCAP1L     DATA   0EBH
CCAP2L     DATA   0ECH
CCAP3L     DATA   0EDH
PAOE       DATA   0F1H

PCAPWM0    DATA   0F2H
P0INV      EQU    004h
EPC0H      EQU    002h
EPC0L      EQU    001h

PCAPWM1    DATA   0F3H
P1INV      EQU    004h
EPC1H      EQU    002h
EPC1L      EQU    001h

PCAPWM2    DATA   0F4H
PWM2       EQU    080h
P2INV      EQU    004h
EPC2H      EQU    002h
EPC2L      EQU    001h

PCAPWM3    DATA   0F5H
PWM3       EQU    080h
P3INV      EQU    004h
EPC3H      EQU    002h
EPC3L      EQU    001h

CH         DATA   0F9H
CCAP0H     DATA   0FAH
CCAP1H     DATA   0FBH
CCAP2H     DATA   0FCH
CCAP3H     DATA   0FDH

; Auxiliary SFR
IAPLB      EQU    003H

CKCON2     EQU    040H
XTGS1      EQU    080h
XTGS0      EQU    040h
XTALE      EQU    020h
IHRCOE     EQU    010h
OSCS1      EQU    002h
OSCS0      EQU    001h

PCON2      EQU    044H
AWBOD0     EQU    040h
BO0RE      EQU    002h

SPCON0     EQU    048H
RTCCTL     EQU    080h
WRCTL      EQU    010h
CKCTL0     EQU    004h
PWCTL1     EQU    002h
PWCTL0     EQU    001h

DCON0      EQU    04CH
HSE        EQU    080h
IAPO       EQU    040h
RSTIO      EQU    002h

#endif