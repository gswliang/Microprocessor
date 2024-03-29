;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.0.0 #11528 (MINGW64)
;--------------------------------------------------------
	.module timer
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _init
	.globl _seg
	.globl _timer0_ISR
	.globl _delay
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _bInc
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
	.area REG_BANK_1	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_seg_s_65536_10:
	.ds 3
_seg_seg_65536_11:
	.ds 20
_main_four_65536_15:
	.ds 8
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
_bInc::
	.ds 1
_bEven:
	.ds 1
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
	reti
	.ds	7
	ljmp	_timer0_ISR
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
;	timer.c:4: __bit bInc = 0; //記錄起來，等離開就刪除（設為0)
;	assignBit
	clr	_bInc
;	timer.c:5: static __bit bEven =1;
;	assignBit
	setb	_bEven
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'delay'
;------------------------------------------------------------
;i                         Allocated to registers r6 r7 
;j                         Allocated to registers r4 r5 
;------------------------------------------------------------
;	timer.c:7: void delay(){
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	timer.c:8: for (int i=0; i<90;i++){
	mov	r6,#0x00
	mov	r7,#0x00
00107$:
	clr	c
	mov	a,r6
	subb	a,#0x5a
	mov	a,r7
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00109$
;	timer.c:9: for (int j=0; j<40; j++){
	mov	r4,#0x00
	mov	r5,#0x00
00104$:
	clr	c
	mov	a,r4
	subb	a,#0x28
	mov	a,r5
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00108$
	inc	r4
	cjne	r4,#0x00,00104$
	inc	r5
	sjmp	00104$
00108$:
;	timer.c:8: for (int i=0; i<90;i++){
	inc	r6
	cjne	r6,#0x00,00107$
	inc	r7
	sjmp	00107$
00109$:
;	timer.c:12: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'timer0_ISR'
;------------------------------------------------------------
;	timer.c:14: void timer0_ISR(void) __interrupt(1) __using(1){
;	-----------------------------------------
;	 function timer0_ISR
;	-----------------------------------------
_timer0_ISR:
	ar7 = 0x0f
	ar6 = 0x0e
	ar5 = 0x0d
	ar4 = 0x0c
	ar3 = 0x0b
	ar2 = 0x0a
	ar1 = 0x09
	ar0 = 0x08
;	timer.c:16: TH0 = period >> 8;    
	mov	_TH0,#0x3c
;	timer.c:17: TL0 = period & 0xff; 
	mov	_TL0,#0xb0
;	timer.c:19: if(bEven){
;	timer.c:20: bEven =0;
;	assignBit
	jbc	_bEven,00110$
	sjmp	00102$
00110$:
;	timer.c:21: bInc =1;
;	assignBit
	setb	_bInc
	sjmp	00104$
00102$:
;	timer.c:23: bEven =1;
;	assignBit
	setb	_bEven
00104$:
;	timer.c:25: }
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop psw
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;	eliminated unneeded push/pop acc
;------------------------------------------------------------
;Allocation info for local variables in function 'seg'
;------------------------------------------------------------
;s                         Allocated with name '_seg_s_65536_10'
;seg                       Allocated with name '_seg_seg_65536_11'
;i                         Allocated to registers r3 r4 
;------------------------------------------------------------
;	timer.c:27: void seg(unsigned *s){
;	-----------------------------------------
;	 function seg
;	-----------------------------------------
_seg:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	_seg_s_65536_10,dpl
	mov	(_seg_s_65536_10 + 1),dph
	mov	(_seg_s_65536_10 + 2),b
;	timer.c:28: unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6};
	mov	(_seg_seg_65536_11 + 0),#0xfc
	mov	(_seg_seg_65536_11 + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0002) + 0),#0x60
	mov	((_seg_seg_65536_11 + 0x0002) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0004) + 0),#0xda
	mov	((_seg_seg_65536_11 + 0x0004) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0006) + 0),#0xf2
	mov	((_seg_seg_65536_11 + 0x0006) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0008) + 0),#0x66
	mov	((_seg_seg_65536_11 + 0x0008) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x000a) + 0),#0xb6
	mov	((_seg_seg_65536_11 + 0x000a) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x000c) + 0),#0x3e
	mov	((_seg_seg_65536_11 + 0x000c) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x000e) + 0),#0xe0
	mov	((_seg_seg_65536_11 + 0x000e) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0010) + 0),#0xfe
	mov	((_seg_seg_65536_11 + 0x0010) + 1),#0x00
	mov	((_seg_seg_65536_11 + 0x0012) + 0),#0xf6
	mov	((_seg_seg_65536_11 + 0x0012) + 1),#0x00
;	timer.c:30: for (int i=0; i<4; i++){ 
	mov	r3,#0x00
	mov	r4,#0x00
00103$:
	clr	c
	mov	a,r3
	subb	a,#0x04
	mov	a,r4
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00105$
;	timer.c:31: P0 = ~(1<<i);
	mov	ar2,r3
	mov	b,r2
	inc	b
	mov	a,#0x01
	sjmp	00119$
00117$:
	add	a,acc
00119$:
	djnz	b,00117$
	cpl	a
	mov	_P0,a
;	timer.c:32: P2 = ~(seg[s[i]]);   
	mov	a,r3
	add	a,r3
	mov	r2,a
	mov	a,r4
	rlc	a
	mov	r7,a
	mov	a,r2
	add	a,_seg_s_65536_10
	mov	r2,a
	mov	a,r7
	addc	a,(_seg_s_65536_10 + 1)
	mov	r7,a
	mov	r6,(_seg_s_65536_10 + 2)
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	lcall	__gptrget
	mov	r2,a
	inc	dptr
	lcall	__gptrget
	mov	r7,a
	mov	a,r2
	add	a,r2
	mov	r2,a
	mov	a,r7
	rlc	a
	mov	a,r2
	add	a,#_seg_seg_65536_11
	mov	r1,a
	mov	a,@r1
	cpl	a
	mov	_P2,a
;	timer.c:33: delay();
	push	ar4
	push	ar3
	lcall	_delay
	pop	ar3
	pop	ar4
;	timer.c:30: for (int i=0; i<4; i++){ 
	inc	r3
	cjne	r3,#0x00,00103$
	inc	r4
	sjmp	00103$
00105$:
;	timer.c:35: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'init'
;------------------------------------------------------------
;	timer.c:36: void init(){
;	-----------------------------------------
;	 function init
;	-----------------------------------------
_init:
;	timer.c:37: TMOD = 0x01; //mode 1 
	mov	_TMOD,#0x01
;	timer.c:38: TH0 =  period >> 8;
	mov	_TH0,#0x3c
;	timer.c:39: TL0 =  period & 0xff;
	mov	_TL0,#0xb0
;	timer.c:40: EA=1;  //interrupt enable
;	assignBit
	setb	_EA
;	timer.c:41:     ET0=1; //timer0 interrupt enable
;	assignBit
	setb	_ET0
;	timer.c:42:     TR0=1;  //timer0 start
;	assignBit
	setb	_TR0
;	timer.c:43: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;four                      Allocated with name '_main_four_65536_15'
;time                      Allocated to registers r6 r7 
;------------------------------------------------------------
;	timer.c:45: int main(){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	timer.c:47: int time=0;
	mov	r6,#0x00
	mov	r7,#0x00
;	timer.c:49: init();
	push	ar7
	push	ar6
	lcall	_init
	pop	ar6
	pop	ar7
;	timer.c:50: while(1){
00106$:
;	timer.c:51: if (bInc){
;	timer.c:52: bInc = 0;
;	assignBit
	jbc	_bInc,00122$
	sjmp	00102$
00122$:
;	timer.c:53: time++;
	inc	r6
	cjne	r6,#0x00,00123$
	inc	r7
00123$:
00102$:
;	timer.c:55: if(time > max){
	clr	c
	mov	a,#0x0f
	subb	a,r6
	mov	a,#(0x27 ^ 0x80)
	mov	b,r7
	xrl	b,#0x80
	subb	a,b
	jnc	00104$
;	timer.c:56: time=0;
	mov	r6,#0x00
	mov	r7,#0x00
00104$:
;	timer.c:58: four[0] = (time/1000)%10; 
	mov	__divsint_PARM_2,#0xe8
	mov	(__divsint_PARM_2 + 1),#0x03
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	lcall	__divsint
	mov	__modsint_PARM_2,#0x0a
	mov	(__modsint_PARM_2 + 1),#0x00
	lcall	__modsint
	mov	a,dpl
	mov	b,dph
	pop	ar6
	pop	ar7
	mov	(_main_four_65536_15 + 0),a
	mov	(_main_four_65536_15 + 1),b
;	timer.c:59: four[1] = (time/100)%10; 
	mov	__divsint_PARM_2,#0x64
	mov	(__divsint_PARM_2 + 1),#0x00
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	lcall	__divsint
	mov	__modsint_PARM_2,#0x0a
	mov	(__modsint_PARM_2 + 1),#0x00
	lcall	__modsint
	mov	a,dpl
	mov	b,dph
	pop	ar6
	pop	ar7
	mov	((_main_four_65536_15 + 0x0002) + 0),a
	mov	((_main_four_65536_15 + 0x0002) + 1),b
;	timer.c:60: four[2] = (time/10)%10; 
	mov	__divsint_PARM_2,#0x0a
	mov	(__divsint_PARM_2 + 1),#0x00
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	lcall	__divsint
	mov	__modsint_PARM_2,#0x0a
	mov	(__modsint_PARM_2 + 1),#0x00
	lcall	__modsint
	mov	a,dpl
	mov	b,dph
	pop	ar6
	pop	ar7
	mov	((_main_four_65536_15 + 0x0004) + 0),a
	mov	((_main_four_65536_15 + 0x0004) + 1),b
;	timer.c:61: four[3] = time%10;
	mov	__modsint_PARM_2,#0x0a
	mov	(__modsint_PARM_2 + 1),#0x00
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	lcall	__modsint
	mov	a,dpl
	mov	b,dph
	mov	((_main_four_65536_15 + 0x0006) + 0),a
	mov	((_main_four_65536_15 + 0x0006) + 1),b
;	timer.c:62: seg(four);
	mov	dptr,#_main_four_65536_15
	mov	b,#0x40
	lcall	_seg
	pop	ar6
	pop	ar7
;	timer.c:64: }
	ljmp	00106$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
