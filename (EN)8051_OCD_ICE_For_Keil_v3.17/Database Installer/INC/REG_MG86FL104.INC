#ifndef __REG_MG86FL104_INC
#define __REG_MG86FL104_INC

P1       DATA   90H
P3       DATA   0B0H
P4       DATA   0E8H
PSW      DATA   0D0H
ACC      DATA   0E0H
B        DATA   0F0H
SP       DATA   81H
DPL      DATA   82H
DPH      DATA   83H
PCON0    DATA   87H
//PCON     DATA   87H
TCON     DATA   88H
TMOD     DATA   89H
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH
IE       DATA   0A8H
IP0L     DATA   0B8H
//IP       DATA   0B8H
SCON     DATA   98H
SBUF     DATA   99H

// (PSW)
CY       BIT    PSW.7
AC       BIT    PSW.6
F0       BIT    PSW.5
RS1      BIT    PSW.4
RS0      BIT    PSW.3
OV       BIT    PSW.2
F1       BIT    PSW.1
P        BIT    PSW.0

// (TCON)
TF1      BIT    TCON.7
TR1      BIT    TCON.6
TF0      BIT    TCON.5
TR0      BIT    TCON.4
IE1      BIT    TCON.3
IT1      BIT    TCON.2
IE0      BIT    TCON.1
IT0      BIT    TCON.0

// (IE)
EA       BIT    IE.7
GF4      BIT    IE.6
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

// (IP0L)
PSL      BIT    IP0L.4
PT1L     BIT    IP0L.3
PX1L     BIT    IP0L.2
PT0L     BIT    IP0L.1
PX0L     BIT    IP0L.0

// (SCON)
FE       BIT    SCON.7
SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0

// (P1)
P17      BIT    P1.7
P16      BIT    P1.6
P15      BIT    P1.5
P14      BIT    P1.4
P13      BIT    P1.3
P12      BIT    P1.2
P11      BIT    P1.1
P10      BIT    P1.0

// (P3)
P37      BIT    P3.7
P36      BIT    P3.6
P35      BIT    P3.5
P34      BIT    P3.4
P33      BIT    P3.3
P32      BIT    P3.2
P31      BIT    P3.1
P30      BIT    P3.0

// (P4)
P41      BIT    P4.1
P40      BIT    P4.0


// (P1 alternate)
TXD3     BIT    P1.5
RXD3     BIT    P1.4
TXD2     BIT    P1.3
TXD1     BIT    P1.2


// (P3 alternate)
T1       BIT    P3.5
T1CKO    BIT    P3.5
T0       BIT    P3.4
T0CKO    BIT    P3.4
INT1     BIT    P3.3
RXD2     BIT    P3.3
INT0     BIT    P3.2
RXD1     BIT    P3.2
TXD0     BIT    P3.1
//TXD      BIT    P3.1
RXD0     BIT    P3.0
//RXD      BIT    P3.0

/*-----------------------------------------------------------------------------
New-defined SFRs
-----------------------------------------------------------------------------*/

/* MG86FL(E)104 Extensions */

SFIE     DATA   8EH
//AUXR     DATA   8EH
SADDR    DATA   0A9H
SADEN    DATA   0B9H
IP0H     DATA   0B7H
//IPH      DATA   0B7H
WDTCR    DATA   0E1H
P1M0     DATA   91H
P3M0     DATA   0B1H
P3M1     DATA   0B2H
P4M0     DATA   0B3H
PCON1    DATA   97H
AUXR0    DATA   0A1H
AUXR1    DATA   0A2H
AUXR2    DATA   0A3H
EIE1     DATA   0ADH
EIP1L    DATA   0AEH
EIP1H    DATA   0AFH
PUCON0   DATA   0B4H
CKCON0   DATA   0C7H
//PCON2    DATA   0C7H
P3KBIE   DATA   0D6H
P1KBIE   DATA   0D7H

// for ISP
IFD      DATA   0E2H
IFADRH   DATA   0E3H
IFADRL   DATA   0E4H
IFMT     DATA   0E5H
SCMD     DATA   0E6H
ISPCR    DATA   0E7H

#endif