keypad.hex: keypad.ihx
	packihx keypad.ihx > keypad.hex

keypad.ihx: keypad.c
	sdcc keypad.c

#Windows 10 (Powershell) using "erase" instead of "rm"
clean:
	erase *.ihx *.lk *.lst *.mem *.rel *.rst *.sym *.map *.asm *.bin *.hex