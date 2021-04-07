#define F_CPU 8000000UL
#include"avr/io.h"
#include"avr/delay.h"
void main (void)
{
	DDRA=255;

	while(1)
	{
		PORTA=0b00000001;
		_delay_ms(1000);
		PORTA=0b00000010;
		_delay_ms(1000);

		PORTA=0b00000100;
		_delay_ms(1000);
		PORTA=0b00000000;
		PORTA=0b00001000;
		_delay_ms(1000);
		PORTA=0b00000000;
		PORTA=0b00010000;
		_delay_ms(1000);
		PORTA=0b00000000;
		PORTA=0b00100000;
		_delay_ms(1000);
		PORTA=0b00000000;
		PORTA=0b01000000;
		_delay_ms(1000);
		PORTA=0b00000000;
		PORTA=0b10000000;
		_delay_ms(1000);

	}
}

