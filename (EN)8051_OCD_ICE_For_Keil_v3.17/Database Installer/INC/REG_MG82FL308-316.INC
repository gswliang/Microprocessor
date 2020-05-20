#ifndef __REG_MG82FL308_316_INC
#define __REG_MG82FL308_316_INC

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
XIFLG    DATA   0C0h
IP0L     DATA   0B8H
IP0H     DATA   0B7h
EIP1L    DATA   0AEh
EIP1H    DATA   0AFh

;(I/O Port)
P0       DATA   80H
P1       DATA   90H
P2       DATA   0A0H
P3       DATA   0B0H
P4       DATA   0E8h
P5       DATA   0F8h
P6       DATA   0C8h                             ;; Page F
P7       DATA   0D8h                             ;; Page F
P0M0     DATA   93h
P0M1     DATA   94h
P1M0     DATA   91h
P1M1     DATA   92h
P2M0     DATA   95h
P2M1     DATA   96h
P3M0     DATA   0B1h
P3M1     DATA   0B2h
P4M0     DATA   0B3h
P4M1     DATA   0B4h
P5M0     DATA   0B5h
P5M1     DATA   0B6h

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
SBUF     DATA   99H
SADDR    DATA   0A9h
SADEN    DATA   0B9h

;(Keypad Interrupt)
GPWKPE   DATA   0D6h
P1WKPE   DATA   0D7h

;(PCA)
CCON     DATA   0D8h
CMOD     DATA   0D9h
CCAP0H   DATA   0FAh
CCAP0L   DATA   0EAh

;(Others)
PCON     DATA   87H
PCON1    DATA   97h
CKCON0   DATA   0C7h
CKCON1   DATA   0BFh
AUXR0    DATA   8Eh
AUXR1    DATA   0A2h
AUXR2    DATA   0A3h
SFRPI    DATA   0ACh
WDTCR    DATA   0E1h
XICON0   DATA   0C1h
XICON1   DATA   0C2h
ACCON    DATA   9Eh
ACMOD    DATA   9Fh

;(ISP)
ISPCR    DATA   0E7h
SCMD     DATA   0E6h
IFMT     DATA   0E5h
IFADRL   DATA   0E4h
IFADRH   DATA   0E3h
IFD      DATA   0E2h

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
PT2      BIT    IP0L.5
PS       BIT    IP0L.4
PT1      BIT    IP0L.3
PX1      BIT    IP0L.2
PT0      BIT    IP0L.1
PX0      BIT    IP0L.0

;(bits in SCON)
FE       BIT    SCON.7
SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0

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
PWMEN    BIT    CCON.3

;(bits in XIFLG)
IE5      BIT    XIFLG.3
IE4      BIT    XIFLG.2
IE3      BIT    XIFLG.1
IE2      BIT    XIFLG.0

;(bits in P1, alternate)
T2       BIT    P1.0
T2CKO    BIT    P1.0
T2EX     BIT    P1.1
AC_P13   BIT    P1.1
AC_P12   BIT    P1.2
AC_P11   BIT    P1.3
AC_P10   BIT    P1.4
AC_MI    BIT    P1.5
RXD1     BIT    P1.6
TXD1     BIT    P1.7

;(bits in P3, alternate)
RXD      BIT    P3.0
TXD      BIT    P3.1
INT0     BIT    P3.2
INT1     BIT    P3.3
T0       BIT    P3.4
T0CKO    BIT    P3.4
T1       BIT    P3.5
T1CKO    BIT    P3.5
WR       BIT    P3.6
RD       BIT    P3.7

;(bits in P4, alternate)
INT3     BIT    P4.2
INT2     BIT    P4.3

;(bits in P5, alternate)
INT4     BIT    P5.0
INT5     BIT    P5.1

;(bits in P6, alternate)
CKO      BIT    P6.0

#endif