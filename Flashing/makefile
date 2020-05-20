Flashing.hex: Flashing.ihx
	packihx Flashing.ihx > Flashing.hex

Flashing.ihx: Flashing.c
	sdcc Flashing.c


#Windows 10 (Powershell) using "erase" instead of "rm"
clean:
	erase *.ihx *.lk *.lst *.mem *.rel *.rst *.sym *.map *.asm *.bin