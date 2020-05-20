#ifndef __REG_MG82FL216_INC
#define __REG_MG82FL216_INC

;(System)
ACC      DATA   0E0h
B        DATA   0F0h
SP       DATA   081h
DPL      DATA   082h
DPH      DATA   083h
PSW      DATA   0D0h

;(Interrupt)
IE       DATA   0A8h
EIE1     DATA   0ADh
AUXIE    DATA   0ADh
XICON    DATA   0C0h
IP0L     DATA   0B8h
IP       DATA   0B8H
IP0H     DATA   0B7h
IPH      DATA   0B7h
EIP1L    DATA   0AEh
AUXIP    DATA   0AEh
EIP1H    DATA   0AFh
AUXIPH   DATA   0AFh

;(I/O Port)
P0       DATA   080h
P1       DATA   090h
P2       DATA   0A0h
P3       DATA   0B0h
P4       DATA   0E8h
P5       DATA   0F8h
P6       DATA   0C8h                             ;; Page F
P0M0     DATA   093h
P0M1     DATA   094h
P1M0     DATA   091h
P1M1     DATA   092h
P2M0     DATA   095h
P2M1     DATA   096h
P3M0     DATA   0B1h
P3M1     DATA   0B2h
P4M0     DATA   0B3h
P4M1     DATA   0B4h
P5M0     DATA   0B5h
P5M1     DATA   0B6h

;(Timer)
TCON     DATA   088h
TMOD     DATA   089h
T2CON    DATA   0C8h
T2MOD    DATA   0C9h
RCAP2L   DATA   0CAh
RCAP2H   DATA   0CBh
TL0      DATA   08Ah
TL1      DATA   08Bh
TH0      DATA   08Ch
TH1      DATA   08Dh
TL2      DATA   0CCh
TH2      DATA   0CDh

;(Serial Port)
SCON     DATA   098H
SCON0    DATA   098h
SCON1    DATA   098h                             ;; Page 1
SBUF     DATA   099H
SBUF0    DATA   099h
SBUF1    DATA   099h                             ;; Page 1
SADDR    DATA   0A9h
SADEN    DATA   0B9h
SCFG     DATA   09Ah
S1BRT    DATA   09Ah
S2BUF    DATA   09Ah                             ;; Page 1

;(ADC)
ADCTL    DATA   0C5h
ADCON    DATA   0C5h
ADCH     DATA   0C6h
ADCV     DATA   0C6h
ADCVL    DATA   0BEh
ADCL     DATA   0BEh

;(Keypad Interrupt)
KBCON    DATA   0D6h
KBPATN   DATA   0D5h
KBMASK   DATA   0D7h

;(SPI)
SPSTAT   DATA   84h
SPCON    DATA   85h
SPDAT    DATA   86h

SPISTAT  DATA   84h
SPICON   DATA   85h
SPIDAT   DATA   86h

SPCTL    DATA   85h
SPICTL   DATA   85h

;(PCA)
CCON     DATA   0D8h
CMOD     DATA   0D9h
CL       DATA   0E9h
CH       DATA   0F9h
CCAPM0   DATA   0DAh
CCAPM1   DATA   0DBh
CCAPM2   DATA   0DCh
CCAPM3   DATA   0DDh
CCAPM4   DATA   0DEh
CCAPM5   DATA   0DFh
CCAP0H   DATA   0FAh
CCAP0L   DATA   0EAh
CCAP1H   DATA   0FBh
CCAP1L   DATA   0EBh
CCAP2H   DATA   0FCh
CCAP2L   DATA   0ECh
CCAP3H   DATA   0FDh
CCAP3L   DATA   0EDh
CCAP4H   DATA   0FEh
CCAP4L   DATA   0EEh
CCAP5H   DATA   0FFh
CCAP5L   DATA   0EFh
PCAPWM0  DATA   0F2h
PCAPWM1  DATA   0F3h
PCAPWM2  DATA   0F4h
PCAPWM3  DATA   0F5h
PCAPWM4  DATA   0F6h
PCAPWM5  DATA   0F7h

;(Others)
PCON     DATA   087H
PCON0    DATA   087H
PCON1    DATA   097h
PCON2    DATA   0C7h
AUXR0    DATA   08Eh
AUXR     DATA   08Eh
AUXR1    DATA   0A2h
AUXR2    DATA   0A6h
STRETCH  DATA   08Fh
WDTCR    DATA   0E1h
TSTWD    DATA   097h
EVRCR    DATA   097h
SFRPI    DATA   0ACh

;(ISP)
ISPCR    DATA   0E7h
IFMT     DATA   0E5h
IFD      DATA   0E2h
IFADRH   DATA   0E3h
IFADRL   DATA   0E4h
SCMD     DATA   0E6h

;(bits in PSW)
CY       BIT    PSW.7
AC       BIT    PSW.6
F0       BIT    PSW.5
RS1      BIT    PSW.4
RS0      BIT    PSW.3
OV       BIT    PSW.2
F1       BIT    PSW.1
P        BIT    PSW.0

;(bits in IE)
EA       BIT    IE.7
GF4      BIT    IE.6
ET2      BIT    IE.5
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

;(bits in IP0L)
PX3L     BIT    IP0L.7
PX2L     BIT    IP0L.6
PT2L     BIT    IP0L.5
PSL      BIT    IP0L.4
PT1L     BIT    IP0L.3
PX1L     BIT    IP0L.2
PT0L     BIT    IP0L.1
PX0L     BIT    IP0L.0

PT2      BIT    IP.5
PS       BIT    IP.4
PT1      BIT    IP.3
PX1      BIT    IP.2
PT0      BIT    IP.1
PX0      BIT    IP.0

;(bits in SCON0)
FE       BIT    SCON0.7
SM00     BIT    SCON0.7
SM10     BIT    SCON0.6
SM20     BIT    SCON0.5
REN0     BIT    SCON0.4
TB80     BIT    SCON0.3
RB80     BIT    SCON0.2
TI0      BIT    SCON0.1
RI0      BIT    SCON0.0

SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0

;(bits in SCON1)
SM01     BIT    SCON1.7
SM11     BIT    SCON1.6
SM21     BIT    SCON1.5
REN1     BIT    SCON1.4
TB81     BIT    SCON1.3
RB81     BIT    SCON1.2
TI1      BIT    SCON1.1
RI1      BIT    SCON1.0

;(bits in TCON)
TF1      BIT    TCON.7
TR1      BIT    TCON.6
TF0      BIT    TCON.5
TR0      BIT    TCON.4
IE1      BIT    TCON.3
IT1      BIT    TCON.2
IE0      BIT    TCON.1
IT0      BIT    TCON.0

;(bits in T2CON)
TF2      BIT    T2CON.7
EXF2     BIT    T2CON.6
RCLK     BIT    T2CON.5
TCLK     BIT    T2CON.4
EXEN2    BIT    T2CON.3
TR2      BIT    T2CON.2
C_T2     BIT    T2CON.1
CP_RL2   BIT    T2CON.0

;(bits in CCON)
CF       BIT    CCON.7
CR       BIT    CCON.6
CCF5     BIT    CCON.5
CCF4     BIT    CCON.4
CCF3     BIT    CCON.3
CCF2     BIT    CCON.2
CCF1     BIT    CCON.1
CCF0     BIT    CCON.0

;(bits in XICON)
IT3H     BIT    XICON.7
PX3      BIT    XICON.7
EX3      BIT    XICON.6
IE3      BIT    XICON.5
IT3      BIT    XICON.4
IT2H     BIT    XICON.3
PX2      BIT    XICON.3
EX2      BIT    XICON.2
IE2      BIT    XICON.1
IT2      BIT    XICON.0

;(bits in P1, alternate)
T2EX     BIT    P1.1
T2       BIT    P1.0
S1TXD    BIT    P1.3
S1RXD    BIT    P1.2

SPI_CLK  BIT    P1.7
SPI_MISO BIT    P1.6
SPI_MOSI BIT    P1.5
SPI_SS   BIT    P1.4

CEX5     BIT    P1.7
CEX4     BIT    P1.6
CEX3     BIT    P1.5
CEX2     BIT    P1.4
CEX1     BIT    P1.3
CEX0     BIT    P1.2
ECI      BIT    P1.1

AIN7     BIT    P1.7
AIN6     BIT    P1.6
AIN5     BIT    P1.5
AIN4     BIT    P1.4
AIN3     BIT    P1.3
AIN2     BIT    P1.2
AIN1     BIT    P1.1
AIN0     BIT    P1.0

;(bits in P2, alternate)
KBI7     BIT    P2.7
KBI6     BIT    P2.6
KBI5     BIT    P2.5
KBI4     BIT    P2.4
KBI3     BIT    P2.3
KBI2     BIT    P2.2
KBI1     BIT    P2.1
KBI0     BIT    P2.0

;(bits in P3, alternate)
RD       BIT    P3.7
WR       BIT    P3.6
T1       BIT    P3.5
T0       BIT    P3.4
INT1     BIT    P3.3
INT0     BIT    P3.2
TXD      BIT    P3.1
RXD      BIT    P3.0
T1CKO    BIT    P3.5
T0CKO    BIT    P3.4

;(bits in P4, alternate)
INT2     BIT    P4.3
INT3     BIT    P4.2

ALE      BIT    P4.6

;(bits in P6, alternate)
CKO      BIT    P6.0
XOUT     BIT    P6.0
XIN      BIT    P6.1

#endif