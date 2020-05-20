#ifndef __REG_MPC89L51_515_INC
#define __REG_MPC89L51_515_INC

;for Megawin MPC89L(E)51/52/53/54/58/515

;------------------------------------------------------------------------------
;Standard SFRs
;------------------------------------------------------------------------------

;8051 Registers

P0       DATA   80H
P1       DATA   90H
P2       DATA   0A0H
P3       DATA   0B0H
PSW      DATA   0D0H
ACC      DATA   0E0H
B        DATA   0F0H
SP       DATA   81H
DPL      DATA   82H
DPH      DATA   83H
PCON     DATA   87H
TCON     DATA   88H
TMOD     DATA   89H
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH
IE       DATA   0A8H
IP       DATA   0B8H
SCON     DATA   98H
SBUF     DATA   99H

;(PSW)
CY       BIT    PSW.7
AC       BIT    PSW.6
F0       BIT    PSW.5
RS1      BIT    PSW.4
RS0      BIT    PSW.3
OV       BIT    PSW.2
P        BIT    PSW.0

;(TCON)
TF1      BIT    TCON.7
TR1      BIT    TCON.6
TF0      BIT    TCON.5
TR0      BIT    TCON.4
IE1      BIT    TCON.3
IT1      BIT    TCON.2
IE0      BIT    TCON.1
IT0      BIT    TCON.0

;(IE)
EA       BIT    IE.7
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

;(IP)
PS       BIT    IP.4
PT1      BIT    IP.3
PX1      BIT    IP.2
PT0      BIT    IP.1
PX0      BIT    IP.0

;(SCON)
SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0

;(P3 alternate)
RD       BIT    P3.7
WR       BIT    P3.6
T1       BIT    P3.5
T0       BIT    P3.4
INT1     BIT    P3.3
INT0     BIT    P3.2
TXD      BIT    P3.1
RXD      BIT    P3.0

;8052 Extensions

T2CON    DATA   0C8H
RCAP2L   DATA   0CAH
RCAP2H   DATA   0CBH
TL2      DATA   0CCH
TH2      DATA   0CDH

;(IE)
ET2      BIT    IE.5

;(IP)
PT2      BIT    IP.5

;(T2CON)
TF2      BIT    T2CON.7
EXF2     BIT    T2CON.6
RCLK     BIT    T2CON.5
TCLK     BIT    T2CON.4
EXEN2    BIT    T2CON.3
TR2      BIT    T2CON.2
C_T2     BIT    T2CON.1
CP_RL2   BIT    T2CON.0

;(P1 alternate)
T2EX     BIT    P1.1
T2       BIT    P1.0

;------------------------------------------------------------------------------
;New-defined SFRs
;------------------------------------------------------------------------------

;MPC89L(E)51/52/53/54/58/515 Extensions

AUXR     DATA   8Eh
SADDR    DATA   0A9h
SADEN    DATA   0B9h
IPH      DATA   0B7h
WDTCR    DATA   0E1h
T2MOD    DATA   0C9h
AUXR1    DATA   0A2h
XICON    DATA   0C0h
P4       DATA   0E8h

;for ISP
IFD      DATA   0E2h
IFADRH   DATA   0E3h
IFADRL   DATA   0E4h
IFMT     DATA   0E5h
SCMD     DATA   0E6h
ISPCR    DATA   0E7h

;(SCON)
FE       BIT    SCON.7

;(XICON)
PX3      BIT    XICON.7
EX3      BIT    XICON.6
IE3      BIT    XICON.5
IT3      BIT    XICON.4
PX2      BIT    XICON.3
EX2      BIT    XICON.2
IE2      BIT    XICON.1
IT2      BIT    XICON.0

;(P4 alternate)
INT2     BIT    P4.3
INT3     BIT    P4.2

#endif