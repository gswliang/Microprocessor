                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.0.0 #11528 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module timer
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _init
                                     13 	.globl _seg
                                     14 	.globl _timer0_ISR
                                     15 	.globl _delay
                                     16 	.globl _CY
                                     17 	.globl _AC
                                     18 	.globl _F0
                                     19 	.globl _RS1
                                     20 	.globl _RS0
                                     21 	.globl _OV
                                     22 	.globl _F1
                                     23 	.globl _P
                                     24 	.globl _PS
                                     25 	.globl _PT1
                                     26 	.globl _PX1
                                     27 	.globl _PT0
                                     28 	.globl _PX0
                                     29 	.globl _RD
                                     30 	.globl _WR
                                     31 	.globl _T1
                                     32 	.globl _T0
                                     33 	.globl _INT1
                                     34 	.globl _INT0
                                     35 	.globl _TXD
                                     36 	.globl _RXD
                                     37 	.globl _P3_7
                                     38 	.globl _P3_6
                                     39 	.globl _P3_5
                                     40 	.globl _P3_4
                                     41 	.globl _P3_3
                                     42 	.globl _P3_2
                                     43 	.globl _P3_1
                                     44 	.globl _P3_0
                                     45 	.globl _EA
                                     46 	.globl _ES
                                     47 	.globl _ET1
                                     48 	.globl _EX1
                                     49 	.globl _ET0
                                     50 	.globl _EX0
                                     51 	.globl _P2_7
                                     52 	.globl _P2_6
                                     53 	.globl _P2_5
                                     54 	.globl _P2_4
                                     55 	.globl _P2_3
                                     56 	.globl _P2_2
                                     57 	.globl _P2_1
                                     58 	.globl _P2_0
                                     59 	.globl _SM0
                                     60 	.globl _SM1
                                     61 	.globl _SM2
                                     62 	.globl _REN
                                     63 	.globl _TB8
                                     64 	.globl _RB8
                                     65 	.globl _TI
                                     66 	.globl _RI
                                     67 	.globl _P1_7
                                     68 	.globl _P1_6
                                     69 	.globl _P1_5
                                     70 	.globl _P1_4
                                     71 	.globl _P1_3
                                     72 	.globl _P1_2
                                     73 	.globl _P1_1
                                     74 	.globl _P1_0
                                     75 	.globl _TF1
                                     76 	.globl _TR1
                                     77 	.globl _TF0
                                     78 	.globl _TR0
                                     79 	.globl _IE1
                                     80 	.globl _IT1
                                     81 	.globl _IE0
                                     82 	.globl _IT0
                                     83 	.globl _P0_7
                                     84 	.globl _P0_6
                                     85 	.globl _P0_5
                                     86 	.globl _P0_4
                                     87 	.globl _P0_3
                                     88 	.globl _P0_2
                                     89 	.globl _P0_1
                                     90 	.globl _P0_0
                                     91 	.globl _B
                                     92 	.globl _ACC
                                     93 	.globl _PSW
                                     94 	.globl _IP
                                     95 	.globl _P3
                                     96 	.globl _IE
                                     97 	.globl _P2
                                     98 	.globl _SBUF
                                     99 	.globl _SCON
                                    100 	.globl _P1
                                    101 	.globl _TH1
                                    102 	.globl _TH0
                                    103 	.globl _TL1
                                    104 	.globl _TL0
                                    105 	.globl _TMOD
                                    106 	.globl _TCON
                                    107 	.globl _PCON
                                    108 	.globl _DPH
                                    109 	.globl _DPL
                                    110 	.globl _SP
                                    111 	.globl _P0
                                    112 	.globl _bInc
                                    113 ;--------------------------------------------------------
                                    114 ; special function registers
                                    115 ;--------------------------------------------------------
                                    116 	.area RSEG    (ABS,DATA)
      000000                        117 	.org 0x0000
                           000080   118 _P0	=	0x0080
                           000081   119 _SP	=	0x0081
                           000082   120 _DPL	=	0x0082
                           000083   121 _DPH	=	0x0083
                           000087   122 _PCON	=	0x0087
                           000088   123 _TCON	=	0x0088
                           000089   124 _TMOD	=	0x0089
                           00008A   125 _TL0	=	0x008a
                           00008B   126 _TL1	=	0x008b
                           00008C   127 _TH0	=	0x008c
                           00008D   128 _TH1	=	0x008d
                           000090   129 _P1	=	0x0090
                           000098   130 _SCON	=	0x0098
                           000099   131 _SBUF	=	0x0099
                           0000A0   132 _P2	=	0x00a0
                           0000A8   133 _IE	=	0x00a8
                           0000B0   134 _P3	=	0x00b0
                           0000B8   135 _IP	=	0x00b8
                           0000D0   136 _PSW	=	0x00d0
                           0000E0   137 _ACC	=	0x00e0
                           0000F0   138 _B	=	0x00f0
                                    139 ;--------------------------------------------------------
                                    140 ; special function bits
                                    141 ;--------------------------------------------------------
                                    142 	.area RSEG    (ABS,DATA)
      000000                        143 	.org 0x0000
                           000080   144 _P0_0	=	0x0080
                           000081   145 _P0_1	=	0x0081
                           000082   146 _P0_2	=	0x0082
                           000083   147 _P0_3	=	0x0083
                           000084   148 _P0_4	=	0x0084
                           000085   149 _P0_5	=	0x0085
                           000086   150 _P0_6	=	0x0086
                           000087   151 _P0_7	=	0x0087
                           000088   152 _IT0	=	0x0088
                           000089   153 _IE0	=	0x0089
                           00008A   154 _IT1	=	0x008a
                           00008B   155 _IE1	=	0x008b
                           00008C   156 _TR0	=	0x008c
                           00008D   157 _TF0	=	0x008d
                           00008E   158 _TR1	=	0x008e
                           00008F   159 _TF1	=	0x008f
                           000090   160 _P1_0	=	0x0090
                           000091   161 _P1_1	=	0x0091
                           000092   162 _P1_2	=	0x0092
                           000093   163 _P1_3	=	0x0093
                           000094   164 _P1_4	=	0x0094
                           000095   165 _P1_5	=	0x0095
                           000096   166 _P1_6	=	0x0096
                           000097   167 _P1_7	=	0x0097
                           000098   168 _RI	=	0x0098
                           000099   169 _TI	=	0x0099
                           00009A   170 _RB8	=	0x009a
                           00009B   171 _TB8	=	0x009b
                           00009C   172 _REN	=	0x009c
                           00009D   173 _SM2	=	0x009d
                           00009E   174 _SM1	=	0x009e
                           00009F   175 _SM0	=	0x009f
                           0000A0   176 _P2_0	=	0x00a0
                           0000A1   177 _P2_1	=	0x00a1
                           0000A2   178 _P2_2	=	0x00a2
                           0000A3   179 _P2_3	=	0x00a3
                           0000A4   180 _P2_4	=	0x00a4
                           0000A5   181 _P2_5	=	0x00a5
                           0000A6   182 _P2_6	=	0x00a6
                           0000A7   183 _P2_7	=	0x00a7
                           0000A8   184 _EX0	=	0x00a8
                           0000A9   185 _ET0	=	0x00a9
                           0000AA   186 _EX1	=	0x00aa
                           0000AB   187 _ET1	=	0x00ab
                           0000AC   188 _ES	=	0x00ac
                           0000AF   189 _EA	=	0x00af
                           0000B0   190 _P3_0	=	0x00b0
                           0000B1   191 _P3_1	=	0x00b1
                           0000B2   192 _P3_2	=	0x00b2
                           0000B3   193 _P3_3	=	0x00b3
                           0000B4   194 _P3_4	=	0x00b4
                           0000B5   195 _P3_5	=	0x00b5
                           0000B6   196 _P3_6	=	0x00b6
                           0000B7   197 _P3_7	=	0x00b7
                           0000B0   198 _RXD	=	0x00b0
                           0000B1   199 _TXD	=	0x00b1
                           0000B2   200 _INT0	=	0x00b2
                           0000B3   201 _INT1	=	0x00b3
                           0000B4   202 _T0	=	0x00b4
                           0000B5   203 _T1	=	0x00b5
                           0000B6   204 _WR	=	0x00b6
                           0000B7   205 _RD	=	0x00b7
                           0000B8   206 _PX0	=	0x00b8
                           0000B9   207 _PT0	=	0x00b9
                           0000BA   208 _PX1	=	0x00ba
                           0000BB   209 _PT1	=	0x00bb
                           0000BC   210 _PS	=	0x00bc
                           0000D0   211 _P	=	0x00d0
                           0000D1   212 _F1	=	0x00d1
                           0000D2   213 _OV	=	0x00d2
                           0000D3   214 _RS0	=	0x00d3
                           0000D4   215 _RS1	=	0x00d4
                           0000D5   216 _F0	=	0x00d5
                           0000D6   217 _AC	=	0x00d6
                           0000D7   218 _CY	=	0x00d7
                                    219 ;--------------------------------------------------------
                                    220 ; overlayable register banks
                                    221 ;--------------------------------------------------------
                                    222 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        223 	.ds 8
                                    224 	.area REG_BANK_1	(REL,OVR,DATA)
      000008                        225 	.ds 8
                                    226 ;--------------------------------------------------------
                                    227 ; internal ram data
                                    228 ;--------------------------------------------------------
                                    229 	.area DSEG    (DATA)
      000021                        230 _seg_s_65536_10:
      000021                        231 	.ds 3
      000024                        232 _seg_seg_65536_11:
      000024                        233 	.ds 20
      000038                        234 _main_four_65536_15:
      000038                        235 	.ds 8
                                    236 ;--------------------------------------------------------
                                    237 ; overlayable items in internal ram 
                                    238 ;--------------------------------------------------------
                                    239 	.area	OSEG    (OVR,DATA)
                                    240 ;--------------------------------------------------------
                                    241 ; Stack segment in internal ram 
                                    242 ;--------------------------------------------------------
                                    243 	.area	SSEG
      000040                        244 __start__stack:
      000040                        245 	.ds	1
                                    246 
                                    247 ;--------------------------------------------------------
                                    248 ; indirectly addressable internal ram data
                                    249 ;--------------------------------------------------------
                                    250 	.area ISEG    (DATA)
                                    251 ;--------------------------------------------------------
                                    252 ; absolute internal ram data
                                    253 ;--------------------------------------------------------
                                    254 	.area IABS    (ABS,DATA)
                                    255 	.area IABS    (ABS,DATA)
                                    256 ;--------------------------------------------------------
                                    257 ; bit data
                                    258 ;--------------------------------------------------------
                                    259 	.area BSEG    (BIT)
      000000                        260 _bInc::
      000000                        261 	.ds 1
      000001                        262 _bEven:
      000001                        263 	.ds 1
                                    264 ;--------------------------------------------------------
                                    265 ; paged external ram data
                                    266 ;--------------------------------------------------------
                                    267 	.area PSEG    (PAG,XDATA)
                                    268 ;--------------------------------------------------------
                                    269 ; external ram data
                                    270 ;--------------------------------------------------------
                                    271 	.area XSEG    (XDATA)
                                    272 ;--------------------------------------------------------
                                    273 ; absolute external ram data
                                    274 ;--------------------------------------------------------
                                    275 	.area XABS    (ABS,XDATA)
                                    276 ;--------------------------------------------------------
                                    277 ; external initialized ram data
                                    278 ;--------------------------------------------------------
                                    279 	.area XISEG   (XDATA)
                                    280 	.area HOME    (CODE)
                                    281 	.area GSINIT0 (CODE)
                                    282 	.area GSINIT1 (CODE)
                                    283 	.area GSINIT2 (CODE)
                                    284 	.area GSINIT3 (CODE)
                                    285 	.area GSINIT4 (CODE)
                                    286 	.area GSINIT5 (CODE)
                                    287 	.area GSINIT  (CODE)
                                    288 	.area GSFINAL (CODE)
                                    289 	.area CSEG    (CODE)
                                    290 ;--------------------------------------------------------
                                    291 ; interrupt vector 
                                    292 ;--------------------------------------------------------
                                    293 	.area HOME    (CODE)
      000000                        294 __interrupt_vect:
      000000 02 00 11         [24]  295 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  296 	reti
      000004                        297 	.ds	7
      00000B 02 00 9E         [24]  298 	ljmp	_timer0_ISR
                                    299 ;--------------------------------------------------------
                                    300 ; global & static initialisations
                                    301 ;--------------------------------------------------------
                                    302 	.area HOME    (CODE)
                                    303 	.area GSINIT  (CODE)
                                    304 	.area GSFINAL (CODE)
                                    305 	.area GSINIT  (CODE)
                                    306 	.globl __sdcc_gsinit_startup
                                    307 	.globl __sdcc_program_startup
                                    308 	.globl __start__stack
                                    309 	.globl __mcs51_genXINIT
                                    310 	.globl __mcs51_genXRAMCLEAR
                                    311 	.globl __mcs51_genRAMCLEAR
                                    312 ;	timer.c:4: __bit bInc = 0; //記錄起來，等離開就刪除（設為0)
                                    313 ;	assignBit
      00006A C2 00            [12]  314 	clr	_bInc
                                    315 ;	timer.c:5: static __bit bEven =1;
                                    316 ;	assignBit
      00006C D2 01            [12]  317 	setb	_bEven
                                    318 	.area GSFINAL (CODE)
      00006E 02 00 0E         [24]  319 	ljmp	__sdcc_program_startup
                                    320 ;--------------------------------------------------------
                                    321 ; Home
                                    322 ;--------------------------------------------------------
                                    323 	.area HOME    (CODE)
                                    324 	.area HOME    (CODE)
      00000E                        325 __sdcc_program_startup:
      00000E 02 01 65         [24]  326 	ljmp	_main
                                    327 ;	return from main will return to caller
                                    328 ;--------------------------------------------------------
                                    329 ; code
                                    330 ;--------------------------------------------------------
                                    331 	.area CSEG    (CODE)
                                    332 ;------------------------------------------------------------
                                    333 ;Allocation info for local variables in function 'delay'
                                    334 ;------------------------------------------------------------
                                    335 ;i                         Allocated to registers r6 r7 
                                    336 ;j                         Allocated to registers r4 r5 
                                    337 ;------------------------------------------------------------
                                    338 ;	timer.c:7: void delay(){
                                    339 ;	-----------------------------------------
                                    340 ;	 function delay
                                    341 ;	-----------------------------------------
      000071                        342 _delay:
                           000007   343 	ar7 = 0x07
                           000006   344 	ar6 = 0x06
                           000005   345 	ar5 = 0x05
                           000004   346 	ar4 = 0x04
                           000003   347 	ar3 = 0x03
                           000002   348 	ar2 = 0x02
                           000001   349 	ar1 = 0x01
                           000000   350 	ar0 = 0x00
                                    351 ;	timer.c:8: for (int i=0; i<90;i++){
      000071 7E 00            [12]  352 	mov	r6,#0x00
      000073 7F 00            [12]  353 	mov	r7,#0x00
      000075                        354 00107$:
      000075 C3               [12]  355 	clr	c
      000076 EE               [12]  356 	mov	a,r6
      000077 94 5A            [12]  357 	subb	a,#0x5a
      000079 EF               [12]  358 	mov	a,r7
      00007A 64 80            [12]  359 	xrl	a,#0x80
      00007C 94 80            [12]  360 	subb	a,#0x80
      00007E 50 1D            [24]  361 	jnc	00109$
                                    362 ;	timer.c:9: for (int j=0; j<40; j++){
      000080 7C 00            [12]  363 	mov	r4,#0x00
      000082 7D 00            [12]  364 	mov	r5,#0x00
      000084                        365 00104$:
      000084 C3               [12]  366 	clr	c
      000085 EC               [12]  367 	mov	a,r4
      000086 94 28            [12]  368 	subb	a,#0x28
      000088 ED               [12]  369 	mov	a,r5
      000089 64 80            [12]  370 	xrl	a,#0x80
      00008B 94 80            [12]  371 	subb	a,#0x80
      00008D 50 07            [24]  372 	jnc	00108$
      00008F 0C               [12]  373 	inc	r4
      000090 BC 00 F1         [24]  374 	cjne	r4,#0x00,00104$
      000093 0D               [12]  375 	inc	r5
      000094 80 EE            [24]  376 	sjmp	00104$
      000096                        377 00108$:
                                    378 ;	timer.c:8: for (int i=0; i<90;i++){
      000096 0E               [12]  379 	inc	r6
      000097 BE 00 DB         [24]  380 	cjne	r6,#0x00,00107$
      00009A 0F               [12]  381 	inc	r7
      00009B 80 D8            [24]  382 	sjmp	00107$
      00009D                        383 00109$:
                                    384 ;	timer.c:12: }
      00009D 22               [24]  385 	ret
                                    386 ;------------------------------------------------------------
                                    387 ;Allocation info for local variables in function 'timer0_ISR'
                                    388 ;------------------------------------------------------------
                                    389 ;	timer.c:14: void timer0_ISR(void) __interrupt(1) __using(1){
                                    390 ;	-----------------------------------------
                                    391 ;	 function timer0_ISR
                                    392 ;	-----------------------------------------
      00009E                        393 _timer0_ISR:
                           00000F   394 	ar7 = 0x0f
                           00000E   395 	ar6 = 0x0e
                           00000D   396 	ar5 = 0x0d
                           00000C   397 	ar4 = 0x0c
                           00000B   398 	ar3 = 0x0b
                           00000A   399 	ar2 = 0x0a
                           000009   400 	ar1 = 0x09
                           000008   401 	ar0 = 0x08
                                    402 ;	timer.c:16: TH0 = period >> 8;    
      00009E 75 8C 3C         [24]  403 	mov	_TH0,#0x3c
                                    404 ;	timer.c:17: TL0 = period & 0xff; 
      0000A1 75 8A B0         [24]  405 	mov	_TL0,#0xb0
                                    406 ;	timer.c:19: if(bEven){
                                    407 ;	timer.c:20: bEven =0;
                                    408 ;	assignBit
      0000A4 10 01 02         [24]  409 	jbc	_bEven,00110$
      0000A7 80 04            [24]  410 	sjmp	00102$
      0000A9                        411 00110$:
                                    412 ;	timer.c:21: bInc =1;
                                    413 ;	assignBit
      0000A9 D2 00            [12]  414 	setb	_bInc
      0000AB 80 02            [24]  415 	sjmp	00104$
      0000AD                        416 00102$:
                                    417 ;	timer.c:23: bEven =1;
                                    418 ;	assignBit
      0000AD D2 01            [12]  419 	setb	_bEven
      0000AF                        420 00104$:
                                    421 ;	timer.c:25: }
      0000AF 32               [24]  422 	reti
                                    423 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    424 ;	eliminated unneeded push/pop psw
                                    425 ;	eliminated unneeded push/pop dpl
                                    426 ;	eliminated unneeded push/pop dph
                                    427 ;	eliminated unneeded push/pop b
                                    428 ;	eliminated unneeded push/pop acc
                                    429 ;------------------------------------------------------------
                                    430 ;Allocation info for local variables in function 'seg'
                                    431 ;------------------------------------------------------------
                                    432 ;s                         Allocated with name '_seg_s_65536_10'
                                    433 ;seg                       Allocated with name '_seg_seg_65536_11'
                                    434 ;i                         Allocated to registers r3 r4 
                                    435 ;------------------------------------------------------------
                                    436 ;	timer.c:27: void seg(unsigned *s){
                                    437 ;	-----------------------------------------
                                    438 ;	 function seg
                                    439 ;	-----------------------------------------
      0000B0                        440 _seg:
                           000007   441 	ar7 = 0x07
                           000006   442 	ar6 = 0x06
                           000005   443 	ar5 = 0x05
                           000004   444 	ar4 = 0x04
                           000003   445 	ar3 = 0x03
                           000002   446 	ar2 = 0x02
                           000001   447 	ar1 = 0x01
                           000000   448 	ar0 = 0x00
      0000B0 85 82 21         [24]  449 	mov	_seg_s_65536_10,dpl
      0000B3 85 83 22         [24]  450 	mov	(_seg_s_65536_10 + 1),dph
      0000B6 85 F0 23         [24]  451 	mov	(_seg_s_65536_10 + 2),b
                                    452 ;	timer.c:28: unsigned seg[]={0xfc,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xF6};
      0000B9 75 24 FC         [24]  453 	mov	(_seg_seg_65536_11 + 0),#0xfc
      0000BC 75 25 00         [24]  454 	mov	(_seg_seg_65536_11 + 1),#0x00
      0000BF 75 26 60         [24]  455 	mov	((_seg_seg_65536_11 + 0x0002) + 0),#0x60
      0000C2 75 27 00         [24]  456 	mov	((_seg_seg_65536_11 + 0x0002) + 1),#0x00
      0000C5 75 28 DA         [24]  457 	mov	((_seg_seg_65536_11 + 0x0004) + 0),#0xda
      0000C8 75 29 00         [24]  458 	mov	((_seg_seg_65536_11 + 0x0004) + 1),#0x00
      0000CB 75 2A F2         [24]  459 	mov	((_seg_seg_65536_11 + 0x0006) + 0),#0xf2
      0000CE 75 2B 00         [24]  460 	mov	((_seg_seg_65536_11 + 0x0006) + 1),#0x00
      0000D1 75 2C 66         [24]  461 	mov	((_seg_seg_65536_11 + 0x0008) + 0),#0x66
      0000D4 75 2D 00         [24]  462 	mov	((_seg_seg_65536_11 + 0x0008) + 1),#0x00
      0000D7 75 2E B6         [24]  463 	mov	((_seg_seg_65536_11 + 0x000a) + 0),#0xb6
      0000DA 75 2F 00         [24]  464 	mov	((_seg_seg_65536_11 + 0x000a) + 1),#0x00
      0000DD 75 30 3E         [24]  465 	mov	((_seg_seg_65536_11 + 0x000c) + 0),#0x3e
      0000E0 75 31 00         [24]  466 	mov	((_seg_seg_65536_11 + 0x000c) + 1),#0x00
      0000E3 75 32 E0         [24]  467 	mov	((_seg_seg_65536_11 + 0x000e) + 0),#0xe0
      0000E6 75 33 00         [24]  468 	mov	((_seg_seg_65536_11 + 0x000e) + 1),#0x00
      0000E9 75 34 FE         [24]  469 	mov	((_seg_seg_65536_11 + 0x0010) + 0),#0xfe
      0000EC 75 35 00         [24]  470 	mov	((_seg_seg_65536_11 + 0x0010) + 1),#0x00
      0000EF 75 36 F6         [24]  471 	mov	((_seg_seg_65536_11 + 0x0012) + 0),#0xf6
      0000F2 75 37 00         [24]  472 	mov	((_seg_seg_65536_11 + 0x0012) + 1),#0x00
                                    473 ;	timer.c:30: for (int i=0; i<4; i++){ 
      0000F5 7B 00            [12]  474 	mov	r3,#0x00
      0000F7 7C 00            [12]  475 	mov	r4,#0x00
      0000F9                        476 00103$:
      0000F9 C3               [12]  477 	clr	c
      0000FA EB               [12]  478 	mov	a,r3
      0000FB 94 04            [12]  479 	subb	a,#0x04
      0000FD EC               [12]  480 	mov	a,r4
      0000FE 64 80            [12]  481 	xrl	a,#0x80
      000100 94 80            [12]  482 	subb	a,#0x80
      000102 50 50            [24]  483 	jnc	00105$
                                    484 ;	timer.c:31: P0 = ~(1<<i);
      000104 8B 02            [24]  485 	mov	ar2,r3
      000106 8A F0            [24]  486 	mov	b,r2
      000108 05 F0            [12]  487 	inc	b
      00010A 74 01            [12]  488 	mov	a,#0x01
      00010C 80 02            [24]  489 	sjmp	00119$
      00010E                        490 00117$:
      00010E 25 E0            [12]  491 	add	a,acc
      000110                        492 00119$:
      000110 D5 F0 FB         [24]  493 	djnz	b,00117$
      000113 F4               [12]  494 	cpl	a
      000114 F5 80            [12]  495 	mov	_P0,a
                                    496 ;	timer.c:32: P2 = ~(seg[s[i]]);   
      000116 EB               [12]  497 	mov	a,r3
      000117 2B               [12]  498 	add	a,r3
      000118 FA               [12]  499 	mov	r2,a
      000119 EC               [12]  500 	mov	a,r4
      00011A 33               [12]  501 	rlc	a
      00011B FF               [12]  502 	mov	r7,a
      00011C EA               [12]  503 	mov	a,r2
      00011D 25 21            [12]  504 	add	a,_seg_s_65536_10
      00011F FA               [12]  505 	mov	r2,a
      000120 EF               [12]  506 	mov	a,r7
      000121 35 22            [12]  507 	addc	a,(_seg_s_65536_10 + 1)
      000123 FF               [12]  508 	mov	r7,a
      000124 AE 23            [24]  509 	mov	r6,(_seg_s_65536_10 + 2)
      000126 8A 82            [24]  510 	mov	dpl,r2
      000128 8F 83            [24]  511 	mov	dph,r7
      00012A 8E F0            [24]  512 	mov	b,r6
      00012C 12 02 AA         [24]  513 	lcall	__gptrget
      00012F FA               [12]  514 	mov	r2,a
      000130 A3               [24]  515 	inc	dptr
      000131 12 02 AA         [24]  516 	lcall	__gptrget
      000134 FF               [12]  517 	mov	r7,a
      000135 EA               [12]  518 	mov	a,r2
      000136 2A               [12]  519 	add	a,r2
      000137 FA               [12]  520 	mov	r2,a
      000138 EF               [12]  521 	mov	a,r7
      000139 33               [12]  522 	rlc	a
      00013A EA               [12]  523 	mov	a,r2
      00013B 24 24            [12]  524 	add	a,#_seg_seg_65536_11
      00013D F9               [12]  525 	mov	r1,a
      00013E E7               [12]  526 	mov	a,@r1
      00013F F4               [12]  527 	cpl	a
      000140 F5 A0            [12]  528 	mov	_P2,a
                                    529 ;	timer.c:33: delay();
      000142 C0 04            [24]  530 	push	ar4
      000144 C0 03            [24]  531 	push	ar3
      000146 12 00 71         [24]  532 	lcall	_delay
      000149 D0 03            [24]  533 	pop	ar3
      00014B D0 04            [24]  534 	pop	ar4
                                    535 ;	timer.c:30: for (int i=0; i<4; i++){ 
      00014D 0B               [12]  536 	inc	r3
      00014E BB 00 A8         [24]  537 	cjne	r3,#0x00,00103$
      000151 0C               [12]  538 	inc	r4
      000152 80 A5            [24]  539 	sjmp	00103$
      000154                        540 00105$:
                                    541 ;	timer.c:35: }
      000154 22               [24]  542 	ret
                                    543 ;------------------------------------------------------------
                                    544 ;Allocation info for local variables in function 'init'
                                    545 ;------------------------------------------------------------
                                    546 ;	timer.c:36: void init(){
                                    547 ;	-----------------------------------------
                                    548 ;	 function init
                                    549 ;	-----------------------------------------
      000155                        550 _init:
                                    551 ;	timer.c:37: TMOD = 0x01; //mode 1 
      000155 75 89 01         [24]  552 	mov	_TMOD,#0x01
                                    553 ;	timer.c:38: TH0 =  period >> 8;
      000158 75 8C 3C         [24]  554 	mov	_TH0,#0x3c
                                    555 ;	timer.c:39: TL0 =  period & 0xff;
      00015B 75 8A B0         [24]  556 	mov	_TL0,#0xb0
                                    557 ;	timer.c:40: EA=1;  //interrupt enable
                                    558 ;	assignBit
      00015E D2 AF            [12]  559 	setb	_EA
                                    560 ;	timer.c:41:     ET0=1; //timer0 interrupt enable
                                    561 ;	assignBit
      000160 D2 A9            [12]  562 	setb	_ET0
                                    563 ;	timer.c:42:     TR0=1;  //timer0 start
                                    564 ;	assignBit
      000162 D2 8C            [12]  565 	setb	_TR0
                                    566 ;	timer.c:43: }
      000164 22               [24]  567 	ret
                                    568 ;------------------------------------------------------------
                                    569 ;Allocation info for local variables in function 'main'
                                    570 ;------------------------------------------------------------
                                    571 ;four                      Allocated with name '_main_four_65536_15'
                                    572 ;time                      Allocated to registers r6 r7 
                                    573 ;------------------------------------------------------------
                                    574 ;	timer.c:45: int main(){
                                    575 ;	-----------------------------------------
                                    576 ;	 function main
                                    577 ;	-----------------------------------------
      000165                        578 _main:
                                    579 ;	timer.c:47: int time=0;
      000165 7E 00            [12]  580 	mov	r6,#0x00
      000167 7F 00            [12]  581 	mov	r7,#0x00
                                    582 ;	timer.c:49: init();
      000169 C0 07            [24]  583 	push	ar7
      00016B C0 06            [24]  584 	push	ar6
      00016D 12 01 55         [24]  585 	lcall	_init
      000170 D0 06            [24]  586 	pop	ar6
      000172 D0 07            [24]  587 	pop	ar7
                                    588 ;	timer.c:50: while(1){
      000174                        589 00106$:
                                    590 ;	timer.c:51: if (bInc){
                                    591 ;	timer.c:52: bInc = 0;
                                    592 ;	assignBit
      000174 10 00 02         [24]  593 	jbc	_bInc,00122$
      000177 80 05            [24]  594 	sjmp	00102$
      000179                        595 00122$:
                                    596 ;	timer.c:53: time++;
      000179 0E               [12]  597 	inc	r6
      00017A BE 00 01         [24]  598 	cjne	r6,#0x00,00123$
      00017D 0F               [12]  599 	inc	r7
      00017E                        600 00123$:
      00017E                        601 00102$:
                                    602 ;	timer.c:55: if(time > max){
      00017E C3               [12]  603 	clr	c
      00017F 74 0F            [12]  604 	mov	a,#0x0f
      000181 9E               [12]  605 	subb	a,r6
      000182 74 A7            [12]  606 	mov	a,#(0x27 ^ 0x80)
      000184 8F F0            [24]  607 	mov	b,r7
      000186 63 F0 80         [24]  608 	xrl	b,#0x80
      000189 95 F0            [12]  609 	subb	a,b
      00018B 50 04            [24]  610 	jnc	00104$
                                    611 ;	timer.c:56: time=0;
      00018D 7E 00            [12]  612 	mov	r6,#0x00
      00018F 7F 00            [12]  613 	mov	r7,#0x00
      000191                        614 00104$:
                                    615 ;	timer.c:58: four[0] = (time/1000)%10; 
      000191 75 10 E8         [24]  616 	mov	__divsint_PARM_2,#0xe8
      000194 75 11 03         [24]  617 	mov	(__divsint_PARM_2 + 1),#0x03
      000197 8E 82            [24]  618 	mov	dpl,r6
      000199 8F 83            [24]  619 	mov	dph,r7
      00019B C0 07            [24]  620 	push	ar7
      00019D C0 06            [24]  621 	push	ar6
      00019F 12 02 FC         [24]  622 	lcall	__divsint
      0001A2 75 10 0A         [24]  623 	mov	__modsint_PARM_2,#0x0a
      0001A5 75 11 00         [24]  624 	mov	(__modsint_PARM_2 + 1),#0x00
      0001A8 12 02 C6         [24]  625 	lcall	__modsint
      0001AB E5 82            [12]  626 	mov	a,dpl
      0001AD 85 83 F0         [24]  627 	mov	b,dph
      0001B0 D0 06            [24]  628 	pop	ar6
      0001B2 D0 07            [24]  629 	pop	ar7
      0001B4 F5 38            [12]  630 	mov	(_main_four_65536_15 + 0),a
      0001B6 85 F0 39         [24]  631 	mov	(_main_four_65536_15 + 1),b
                                    632 ;	timer.c:59: four[1] = (time/100)%10; 
      0001B9 75 10 64         [24]  633 	mov	__divsint_PARM_2,#0x64
      0001BC 75 11 00         [24]  634 	mov	(__divsint_PARM_2 + 1),#0x00
      0001BF 8E 82            [24]  635 	mov	dpl,r6
      0001C1 8F 83            [24]  636 	mov	dph,r7
      0001C3 C0 07            [24]  637 	push	ar7
      0001C5 C0 06            [24]  638 	push	ar6
      0001C7 12 02 FC         [24]  639 	lcall	__divsint
      0001CA 75 10 0A         [24]  640 	mov	__modsint_PARM_2,#0x0a
      0001CD 75 11 00         [24]  641 	mov	(__modsint_PARM_2 + 1),#0x00
      0001D0 12 02 C6         [24]  642 	lcall	__modsint
      0001D3 E5 82            [12]  643 	mov	a,dpl
      0001D5 85 83 F0         [24]  644 	mov	b,dph
      0001D8 D0 06            [24]  645 	pop	ar6
      0001DA D0 07            [24]  646 	pop	ar7
      0001DC F5 3A            [12]  647 	mov	((_main_four_65536_15 + 0x0002) + 0),a
      0001DE 85 F0 3B         [24]  648 	mov	((_main_four_65536_15 + 0x0002) + 1),b
                                    649 ;	timer.c:60: four[2] = (time/10)%10; 
      0001E1 75 10 0A         [24]  650 	mov	__divsint_PARM_2,#0x0a
      0001E4 75 11 00         [24]  651 	mov	(__divsint_PARM_2 + 1),#0x00
      0001E7 8E 82            [24]  652 	mov	dpl,r6
      0001E9 8F 83            [24]  653 	mov	dph,r7
      0001EB C0 07            [24]  654 	push	ar7
      0001ED C0 06            [24]  655 	push	ar6
      0001EF 12 02 FC         [24]  656 	lcall	__divsint
      0001F2 75 10 0A         [24]  657 	mov	__modsint_PARM_2,#0x0a
      0001F5 75 11 00         [24]  658 	mov	(__modsint_PARM_2 + 1),#0x00
      0001F8 12 02 C6         [24]  659 	lcall	__modsint
      0001FB E5 82            [12]  660 	mov	a,dpl
      0001FD 85 83 F0         [24]  661 	mov	b,dph
      000200 D0 06            [24]  662 	pop	ar6
      000202 D0 07            [24]  663 	pop	ar7
      000204 F5 3C            [12]  664 	mov	((_main_four_65536_15 + 0x0004) + 0),a
      000206 85 F0 3D         [24]  665 	mov	((_main_four_65536_15 + 0x0004) + 1),b
                                    666 ;	timer.c:61: four[3] = time%10;
      000209 75 10 0A         [24]  667 	mov	__modsint_PARM_2,#0x0a
      00020C 75 11 00         [24]  668 	mov	(__modsint_PARM_2 + 1),#0x00
      00020F 8E 82            [24]  669 	mov	dpl,r6
      000211 8F 83            [24]  670 	mov	dph,r7
      000213 C0 07            [24]  671 	push	ar7
      000215 C0 06            [24]  672 	push	ar6
      000217 12 02 C6         [24]  673 	lcall	__modsint
      00021A E5 82            [12]  674 	mov	a,dpl
      00021C 85 83 F0         [24]  675 	mov	b,dph
      00021F F5 3E            [12]  676 	mov	((_main_four_65536_15 + 0x0006) + 0),a
      000221 85 F0 3F         [24]  677 	mov	((_main_four_65536_15 + 0x0006) + 1),b
                                    678 ;	timer.c:62: seg(four);
      000224 90 00 38         [24]  679 	mov	dptr,#_main_four_65536_15
      000227 75 F0 40         [24]  680 	mov	b,#0x40
      00022A 12 00 B0         [24]  681 	lcall	_seg
      00022D D0 06            [24]  682 	pop	ar6
      00022F D0 07            [24]  683 	pop	ar7
                                    684 ;	timer.c:64: }
      000231 02 01 74         [24]  685 	ljmp	00106$
                                    686 	.area CSEG    (CODE)
                                    687 	.area CONST   (CODE)
                                    688 	.area XINIT   (CODE)
                                    689 	.area CABS    (ABS,CODE)
