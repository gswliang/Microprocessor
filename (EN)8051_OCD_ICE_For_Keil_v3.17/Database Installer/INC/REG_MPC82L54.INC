#ifndef __REG_MPC82L54_INC
#define __REG_MPC82L54_INC

;for Megawin MPC82L(E)54

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
T1       BIT    P3.5
T0       BIT    P3.4
INT1     BIT    P3.3
INT0     BIT    P3.2
TXD      BIT    P3.1
RXD      BIT    P3.0

;------------------------------------------------------------------------------
;New-defined SFRs
;------------------------------------------------------------------------------

;MPC82L(E)54 Extensions

AUXR     DATA   8Eh
SADDR    DATA   0A9h
SADEN    DATA   0B9h
IPH      DATA   0B7h
WDTCR    DATA   0E1h
P0M0     DATA   93h
P0M1     DATA   94h
P1M0     DATA   91h
P1M1     DATA   92h
P2M0     DATA   95h
P2M1     DATA   96h
P3M0     DATA   0B1h
P3M1     DATA   0B2h
PCON2    DATA   0C7h

;for ISP
IFD      DATA   0E2h
IFADRH   DATA   0E3h
IFADRL   DATA   0E4h
IFMT     DATA   0E5h
SCMD     DATA   0E6h
ISPCR    DATA   0E7h

;for ADC
ADCTL    DATA   0C5h
ADCH     DATA   0C6h
ADCL     DATA   0BEh
ADC      DATA   0C6h ;the same as ADCH: ADC result, higher 8 bits

;for PCA
CCON     DATA   0D8h
CMOD     DATA   0D9h
CCAPM0   DATA   0DAh
CCAPM1   DATA   0DBh
CCAPM2   DATA   0DCh
CCAPM3   DATA   0DDh
CL       DATA   0E9h
CH       DATA   0F9h
CCAP0L   DATA   0EAh
CCAP0H   DATA   0FAh
CCAP1L   DATA   0EBh
CCAP1H   DATA   0FBh
CCAP2L   DATA   0ECh
CCAP2H   DATA   0FCh
CCAP3L   DATA   0EDh
CCAP3H   DATA   0FDh
PCAPWM0  DATA   0F2h
PCAPWM1  DATA   0F3h
PCAPWM2  DATA   0F4h
PCAPWM3  DATA   0F5h

;for SPI
SPISTAT  DATA   84h
SPICTL   DATA   85h
SPIDAT   DATA   86h

;(CCON)
CF       BIT    CCON.7
CR       BIT    CCON.6
CCF3     BIT    CCON.3
CCF2     BIT    CCON.2
CCF1     BIT    CCON.1
CCF0     BIT    CCON.0

;(IE)
EPCALVD  BIT    IE.6
ESPIADC  BIT    IE.5

;(IP)
PPCALVD  BIT    IP.6
PSPIADC  BIT    IP.5

;(SCON)
FE       BIT    SCON.7

;(P3 alternate)
CEX0     BIT    P3.7
CEX1     BIT    P3.5
ECI      BIT    P3.4

;(P2 alternate)
CEX2     BIT    P2.0
CEX3     BIT    P2.4

;(P1 alternate)
SPI_CLK  BIT    P1.7
SPI_MISO BIT    P1.6
SPI_MOSI BIT    P1.5
SPI_SS   BIT    P1.4

#endif