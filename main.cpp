#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRB=0X0f;
	PORTC=0X03;
	while(1)
	{
		if(((PINC&0x01)==0x01)&&((PINC&0x02)==0x02))
		{
			PORTB=0x05;
		}
		if(((PINC&0x01)==0x01)&&((PINC&0x02)==0x00))
		{
			PORTB=0x01;
		}
		if(((PINC&0x01)==0x00)&&((PINC&0x02)==0x02))
		{
			PORTB=0x04;
		}
		if(((PINC&0x01)==0x00)&&((PINC&0x02)==0x00))
		{
			PORTB=0x00;
		}
	}
}
