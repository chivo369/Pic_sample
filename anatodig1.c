//polling
#include<pic.h>
void main()
{
	ADCON0=0X80;
	ADCON1=0XC0;
	TRISC=0;
	TRISD=0;
	while(1)
	{
		ADON=1;
		GODONE=1;
		while(GODONE);
		ADON=0;
		PORTD=ADRESH;
		PORTC=ADRESL;
		}
		}
		