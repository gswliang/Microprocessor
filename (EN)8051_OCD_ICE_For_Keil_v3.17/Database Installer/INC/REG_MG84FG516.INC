#ifndef __REG_MG84FG516_INC
#define __REG_MG84FG516_INC

;(System)
ACC      DATA   0E0H
B        DATA   0F0H
SP       DATA   81H
DPL      DATA   82H
DPH      DATA   83H
PSW      DATA   0D0H

;(Interrupt)
IE       DATA   0A8H
EIE1     DATA   0ADh
AUXIE    DATA   0ADh
EIE2     DATA   0A5h
XICON    DATA   0C0h
IP0L     DATA   0B8H
IP       DATA   0B8H
IP0H     DATA   0B7H
IPH      DATA   0B7H
EIP1L    DATA   0AEH
AUXIP    DATA   0AEH
EIP2L    DATA   0A6H
EIP1H    DATA   0AFH
AUXIPH   DATA   0AFH
EIP2H    DATA   0A7H

;(I/O Port)
P0       DATA   80H
P1       DATA   90H
P2       DATA   0A0H
P3       DATA   0B0H
P4       DATA   0E8h
P5       DATA   0F8H
P6       DATA   0F8H                            // Page P
P0M0     DATA   93h
P1M0     DATA   91h
P1AIO    DATA   92h
P2M0     DATA   95h
P3M0     DATA   0B1h
P3M1     DATA   0B2h
P4M0     DATA   0B3h
PUCON0   DATA   0B4H
PUCON1   DATA   0B4H                            // Page P
P5M0     DATA   0B5H
P6M0     DATA   0B5H                            // Page P

;(Timer)
TCON     DATA   88H
TMOD     DATA   89H
T2CON    DATA   0C8H
T3CON    DATA   0C8H                            // Page P
T2MOD    DATA   0C9H
T3MOD    DATA   0C9H                            // Page P
RCAP2L   DATA   0CAH
RCAP3L   DATA   0CAH                            // Page P
RCAP2H   DATA   0CBH
RCAP3H   DATA   0CBH                            // Page P
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH
TL2      DATA   0CCH
TL3      DATA   0CCH                            // Page P
TH2      DATA   0CDH
TH3      DATA   0CDH                            // Page P

;(Serial Port)
SCON     DATA   98H
S0CON    DATA   98H
S1CON    DATA   98H                            // Page P
SBUF     DATA   99H
S0BUF    DATA   99H
S1BUF    DATA   99H                            // Page P
SADDR    DATA   0A9H
SADEN    DATA   0B9H
SCFG     DATA   9AH
S0CFG    DATA   9AH
S1BRT    DATA   9AH                            // Page P

S1CFG    DATA   9BH
S2CFG    DATA   9BH
S1BRC    DATA   9BH                            // Page P

;(ADC)
ADCFG0   DATA   0C3H
ADCON0   DATA   0C4H
ADCDL    DATA   0C5H
ADCDH    DATA   0C6H

;(Keypad Interrupt)
KBCON    DATA   0D6h
KBPATN   DATA   0D5h
KBMASK   DATA   0D7h

;(SPI)
SPSTAT   DATA   84H
SPCON    DATA   85H
SPCTL    DATA   85H
SPDAT    DATA   86H
SPISTAT  DATA   84H
SPICON   DATA   85H
SPICTL   DATA   85H
SPIDAT   DATA   86H

;(PCA)
CCON     DATA   0D8H
CMOD     DATA   0D9H
CL       DATA   0E9H
CH       DATA   0F9H
CCAPM0   DATA   0DAH
CCAPM1   DATA   0DBH
CCAPM2   DATA   0DCH
CCAPM3   DATA   0DDH
CCAPM4   DATA   0DEH
CCAPM5   DATA   0DFH
CCAP0H   DATA   0FAH
CCAP0L   DATA   0EAH
CCAP1H   DATA   0FBH
CCAP1L   DATA   0EBH
CCAP2H   DATA   0FCH
CCAP2L   DATA   0ECH
CCAP3H   DATA   0FDH
CCAP3L   DATA   0EDH
CCAP4H   DATA   0FEH
CCAP4L   DATA   0EEH
CCAP5H   DATA   0FFH
CCAP5L   DATA   0EFH
PCAPWM0  DATA   0F2H
PCAPWM1  DATA   0F3H
PCAPWM2  DATA   0F4H
PCAPWM3  DATA   0F5H
PCAPWM4  DATA   0F6H
PCAPWM5  DATA   0F7H

;(TWSI)
SIADR    DATA   0D1h
SIDAT    DATA   0D2h
SISTA    DATA   0D3h
SICON    DATA   0D4h

;(CLOCK)
CKCON0   DATA   0C7H
CKCON1   DATA   0BFH

;(USB)
USBDAT   DATA   0AAH
USBADR   DATA   0ABH

;(Others)
PCON     DATA   87H
PCON0    DATA   87H
PCON1    DATA   97H
SFIE     DATA   8EH
STRETCH  DATA   8FH
AUXR0    DATA   0A1H
AUXR1    DATA   0A2H
AUXR2    DATA   0A3H
SFRPI    DATA   0ACH
WDTCR    DATA   0E1H

;(ISP)
IFD      DATA   0E2h
IFADRH   DATA   0E3h
IFADRL   DATA   0E4h
IFMT     DATA   0E5h
SCMD     DATA   0E6h
ISPCR    DATA   0E7h

;(bits in TCON)
TF1     BIT     TCON.7
TR1     BIT     TCON.6
TF0     BIT     TCON.5
TR0     BIT     TCON.4
IE1     BIT     TCON.3
IT1     BIT     TCON.2
IE0     BIT     TCON.1
IT0     BIT     TCON.0

;(bits in S0CON)
FE      BIT     S0CON.7
SM00    BIT     S0CON.7
SM10    BIT     S0CON.6
SM20    BIT     S0CON.5
REN0    BIT     S0CON.4
TB80    BIT     S0CON.3
RB80    BIT     S0CON.2
TI0     BIT     S0CON.1
RI0     BIT     S0CON.0

SM0     BIT     SCON.7
SM1     BIT     SCON.6
SM2     BIT     SCON.5
REN     BIT     SCON.4
TB8     BIT     SCON.3
RB8     BIT     SCON.2
TI      BIT     SCON.1
RI      BIT     SCON.0

;(bits in S1CON)
SM01    BIT     S1CON.7
SM11    BIT     S1CON.6
SM21    BIT     S1CON.5
REN1    BIT     S1CON.4
TB81    BIT     S1CON.3
RB81    BIT     S1CON.2
TI1     BIT     S1CON.1
RI1     BIT     S1CON.0

;(bits in IE)
EA      BIT     IE.7
GF4     BIT     IE.6
ET2     BIT     IE.5
ES0     BIT     IE.4
ET1     BIT     IE.3
EX1     BIT     IE.2
ET0     BIT     IE.1
EX0     BIT     IE.0

;(bits in IP0L)
PX3L    BIT     IP0L.7
PX2L    BIT     IP0L.6
PT2L    BIT     IP0L.5
PSL     BIT     IP0L.4
PT1L    BIT     IP0L.3
PX1L    BIT     IP0L.2
PT0L    BIT     IP0L.1
PX0L    BIT     IP0L.0

PT2     BIT     IP.5
PS      BIT     IP.4
PT1     BIT     IP.3
PX1     BIT     IP.2
PT0     BIT     IP.1
PX0     BIT     IP.0

;(bits in XICON)
PX3     BIT     XICON.7
IT3H    BIT     XICON.7
EX3     BIT     XICON.6
IE3     BIT     XICON.5
IT3     BIT     XICON.4
PX2     BIT     XICON.3
IT2H    BIT     XICON.3
EX2     BIT     XICON.2
IE2     BIT     XICON.1
IT2     BIT     XICON.0

;(bits in T2CON)
TF2     BIT     T2CON.7
EXF2    BIT     T2CON.6
RCLK    BIT     T2CON.5
TCLK    BIT     T2CON.4
EXEN2   BIT     T2CON.3
TR2     BIT     T2CON.2
C_T2    BIT     T2CON.1
CP_RL2  BIT     T2CON.0

;(bits in T3CON)
TF3     BIT     T3CON.7
EXF3    BIT     T3CON.6
T3M1    BIT     T3CON.5
T3M0    BIT     T3CON.4
EXEN3   BIT     T3CON.3
TR3     BIT     T3CON.2
C_T3    BIT     T3CON.1
CP_RL3  BIT     T3CON.0

;(bits in PSW)
CY      BIT     PSW.7
AC      BIT     PSW.6
F0      BIT     PSW.5
RS1     BIT     PSW.4
RS0     BIT     PSW.3
OV      BIT     PSW.2
F1      BIT     PSW.1
P       BIT     PSW.0

;(bits in CCON)
CF      BIT     CCON.7
CR      BIT     CCON.6
CCF5    BIT     CCON.5
CCF4    BIT     CCON.4
CCF3    BIT     CCON.3
CCF2    BIT     CCON.2
CCF1    BIT     CCON.1
CCF0    BIT     CCON.0

;(bits in P0)
P07     BIT     P0.7
P06     BIT     P0.6
P05     BIT     P0.5
P04     BIT     P0.4
P03     BIT     P0.3
P02     BIT     P0.2
P01     BIT     P0.1
P00     BIT     P0.0

;(bits in P1)
P17     BIT     P1.7
P16     BIT     P1.6
P15     BIT     P1.5
P14     BIT     P1.4
P13     BIT     P1.3
P12     BIT     P1.2
P11     BIT     P1.1
P10     BIT     P1.0

;(bits in P2)
P27     BIT     P2.7
P26     BIT     P2.6
P25     BIT     P2.5
P24     BIT     P2.4
P23     BIT     P2.3
P22     BIT     P2.2
P21     BIT     P2.1
P20     BIT     P2.0

;(bits in P3)
P37     BIT     P3.7
P36     BIT     P3.6
P35     BIT     P3.5
P34     BIT     P3.4
P33     BIT     P3.3
P32     BIT     P3.2
P31     BIT     P3.1
P30     BIT     P3.0

;(bits in P4)
P46     BIT     P4.6
P45     BIT     P4.5
P44     BIT     P4.4
P43     BIT     P4.3
P42     BIT     P4.2
P41     BIT     P4.1
P40     BIT     P4.0

;(bits in P5)
P57     BIT     P5.7
P56     BIT     P5.6
P55     BIT     P5.5
P54     BIT     P5.4
P53     BIT     P5.3
P52     BIT     P5.2
P51     BIT     P5.1
P50     BIT     P5.0

;(bits in P6)
P67     BIT     P6.7
P66     BIT     P6.6
P65     BIT     P6.5
P64     BIT     P6.4
P63     BIT     P6.3
P62     BIT     P6.2
P61     BIT     P6.1
P60     BIT     P6.0

;(bits in P0, alternate)
KBI7    BIT     P0.7
KBI6    BIT     P0.6
KBI5    BIT     P0.5
KBI4    BIT     P0.4
KBI3    BIT     P0.3
KBI2    BIT     P0.2
KBI1    BIT     P0.1
KBI0    BIT     P0.0
             
T3      BIT     P0.1
T3EX    BIT     P0.0

;(bits in P1, alternate)
TXD1    BIT     P1.3
RXD1    BIT     P1.2
T2EX    BIT     P1.1
T2      BIT     P1.0
             
SPI_CLK  BIT     P1.7
SPI_MISO BIT     P1.6
SPI_MOSI BIT     P1.5
SPI_SS   BIT     P1.4
             
T2CKO   BIT     P1.0
             
AIN7    BIT     P1.7
AIN6    BIT     P1.6
AIN5    BIT     P1.5
AIN4    BIT     P1.4
AIN3    BIT     P1.3
AIN2    BIT     P1.2
AIN1    BIT     P1.1
AIN0    BIT     P1.0

;(bits in P2, alternate)
CEX5    BIT     P2.7
CEX4    BIT     P2.6
CEX3    BIT     P2.5
CEX2    BIT     P2.4
CEX1    BIT     P2.3
CEX0    BIT     P2.2
ECI     BIT     P2.1
SICKO   BIT     P2.0

;(bits in P3, alternate)
RD      BIT     P3.7
WR      BIT     P3.6
T1      BIT     P3.5
T0      BIT     P3.4
INT1    BIT     P3.3
INT0    BIT     P3.2
TXD     BIT     P3.1
RXD     BIT     P3.0
T1CKO   BIT     P3.5
T0CKO   BIT     P3.4

;(bits in P4, alternate)
INT2    BIT     P4.3
INT3    BIT     P4.2
TWI_SDA BIT     P4.1
TWI_SCL BIT     P4.0
             
ALE     BIT     P4.6

;(bits in P6, alternate)
CKO     BIT     P6.0
XOUT    BIT     P6.0
XIN     BIT     P6.1

#endif