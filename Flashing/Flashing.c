#include <8051.h>

void main()
{
	unsigned d1, d2, led;
	led = 0xff;
	while (1) {
		P0 = P1 = P2 = led;
		led ^= 0xff;
		for (d1 = 0; d1 < 1024; d1 ++) {
			for (d2 = 0; d2 < 100; d2 ++) {
			}
		}
	}
}