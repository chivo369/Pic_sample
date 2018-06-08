
//interupt mtd
#include<pic.h>
void interrupt ADC_ISR(void)
{
	ADIF=0;
	PORTD=ADRESH;
	PORTC=ADRESL;
	GODONE=1;
	}
	void main()
	{
		TRISC=0;
		TRISD=0;
		ADIE=1;
		PEIE=1;
		GIE=1;
		ADCON1=0XC0;
		ADCON0=0X85;
		while(1);
		}