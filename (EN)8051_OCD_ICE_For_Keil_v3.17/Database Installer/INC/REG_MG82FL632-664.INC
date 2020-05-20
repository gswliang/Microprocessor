#ifndef __REG_MG82FL632_664_INC
#define __REG_MG82FL632_664_INC

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
XICON    DATA   0C0h
IP       DATA   0B8H
IP0L     DATA   0B8H
IPH      DATA   0B7h
IP0H     DATA   0B7h
EIP1L    DATA   0AEh
EIP1H    DATA   0AFh

;(I/O Port)
P0       DATA   80H
P1       DATA   90H
P2       DATA   0A0H
P3       DATA   0B0H
P0M0     DATA   93h
P1M0     DATA   91h
P2M0     DATA   95h
P3M0     DATA   0B1h
P3M1     DATA   0B2h

;(Timer)
TCON     DATA   88H
TMOD     DATA   89H
T2CON    DATA   0C8H
T2MOD    DATA   0C9h
RCAP2L   DATA   0CAH
RCAP2H   DATA   0CBH
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH
TL2      DATA   0CCH
TH2      DATA   0CDH

;(Serial Port)
SCON     DATA   98H
S0CON    DATA   98H
S1CON    DATA   98H
SBUF     DATA   99H
S0BUF    DATA   99H
S1BUF    DATA   99H
SADDR    DATA   0A9h
SADEN    DATA   0B9h
SCFG     DATA   9Ah
S1BRT    DATA   9Ah


;(Keypad Interrupt)
P3WKPE   DATA   0D6h
P1WKPE   DATA   0D7h


;(Timer P)
TPFLG     DATA   0F1h
TPCON     DATA   0D9h
TPMOD0    DATA   0DAh
TPMOD1    DATA   0DBh
TPMOD2    DATA   0DCh
TPMOD3    DATA   0DDh
TPMOD4    DATA   0DEh
TPL0      DATA   0EAh
TPL1      DATA   0EBh
TPL2      DATA   0ECh
TPL3      DATA   0EDh
TPL4      DATA   0EEh
TPH0      DATA   0FAh
TPH1      DATA   0FBh
TPH2      DATA   0FCh
TPH3      DATA   0FDh
TPH4      DATA   0FEh


;(Others)
PCON     DATA   87H
PCON0    DATA   87H
PCON1    DATA   97h
AUXR1    DATA   0A2h
AUXR2    DATA   0A3h
CKCON0   DATA   0C7h
CKCON1   DATA   0BFh
WDTCR    DATA   0E1h
PUCON0   DATA   0B4h
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
ET2      BIT    IE.5
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

;(bits in IP)
PX3L     BIT    IP.7 
PX2L     BIT    IP.6 
PT2L     BIT    IP.5
PSL      BIT    IP.4
PT1L     BIT    IP.3
PX1L     BIT    IP.2
PT0L     BIT    IP.1
PX0L     BIT    IP.0

;(bits in SCON)
FE       BIT    SCON.7
SM0      BIT    SCON.7
SM00     BIT    SCON.7
SM01     BIT    SCON.7
SM1      BIT    SCON.6
SM10     BIT    SCON.6
SM11     BIT    SCON.6
SM2      BIT    SCON.5
SM20     BIT    SCON.5
SM21     BIT    SCON.5
REN      BIT    SCON.4
REN0     BIT    SCON.4
REN1     BIT    SCON.4
TB8      BIT    SCON.3
TB80     BIT    SCON.3
TB81     BIT    SCON.3
RB8      BIT    SCON.2
RB80     BIT    SCON.2
RB81     BIT    SCON.2
TI       BIT    SCON.1
TI0      BIT    SCON.1
TI1      BIT    SCON.1
RI       BIT    SCON.0
RI0      BIT    SCON.0
RI0      BIT    SCON.0

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


;(bits in XICON)
IT3H     BIT    XICON.7
EX3      BIT    XICON.6
IE3      BIT    XICON.5
IT3      BIT    XICON.4
IT2H     BIT    XICON.3
EX2      BIT    XICON.2
IE2      BIT    XICON.1
IT2      BIT    XICON.0

;(bits in P0)
P07      BIT    P0.7 
P06      BIT    P0.6 
P05      BIT    P0.5 
P04      BIT    P0.4 
P03      BIT    P0.3 
P02      BIT    P0.2 
P01      BIT    P0.1 
P00      BIT    P0.0 

;(bits in P1)
P17      BIT    P1.7
P16      BIT    P1.6
P15      BIT    P1.5
P14      BIT    P1.4
P13      BIT    P1.3
P12      BIT    P1.2
P11      BIT    P1.1
P10      BIT    P1.0

;(bits in P2)
P27      BIT    P2.7
P26      BIT    P2.6
P25      BIT    P2.5
P24      BIT    P2.4
P23      BIT    P2.3
P22      BIT    P2.2
P21      BIT    P2.1
P20      BIT    P2.0

;(bits in P3)
P37      BIT    P3.7
P36      BIT    P3.6
P35      BIT    P3.5
P34      BIT    P3.4
P33      BIT    P3.3
P32      BIT    P3.2
P31      BIT    P3.1
P30      BIT    P3.0

;(bits in P0, alternate)
INT2     BIT    P0.2
INT3     BIT    P0.3

;(bits in P1, alternate)
T2EX     BIT    P1.1
T2       BIT    P1.0
TPO0     BIT    P1.2   
TPO1     BIT    P1.3   
TPO2     BIT    P1.4   
TPO3     BIT    P1.5   
TPO4     BIT    P1.6   
TPO5     BIT    P1.7   

;(bits in P2, alternate)
TXD1     BIT    P2.1
RXD1     BIT    P2.0

;(bits in P3, alternate)
RD       BIT    P3.7
WR       BIT    P3.6
T1       BIT    P3.5
T0       BIT    P3.4
INT1     BIT    P3.3
INT0     BIT    P3.2
TXD      BIT    P3.1
TXD0     BIT    P3.1
RXD      BIT    P3.0
RXD0     BIT    P3.0
T1CKO    BIT    P3.5
T0CKO    BIT    P3.4

#endif