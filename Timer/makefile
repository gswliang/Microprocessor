timer.hex: timer.ihx
	packihx timer.ihx > timer.hex

timer.ihx: timer.c
	sdcc timer.c

#Windows 10 (Powershell) using "erase" instead of "rm"
clean:
	erase *.ihx *.lk *.lst *.mem *.rel *.rst *.sym *.map *.asm *.bin *.hex