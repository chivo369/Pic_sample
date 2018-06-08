#include<pic.h.
void main()
{TRISB=0;
 TRISD=0;
 PORTD=0;
 TMR0=0;
 OPTION=0x28;
 while(1)
{PORTB=TMR0;
 if(TMR0==60)
	{TMR0=0;
	 PORTD+=1;
	}
 if(PORTD==60)
	PORTD=0;
}
}