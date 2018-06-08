#include<pic.h>
#define _XTAL_FREQ 16000000
void main()
{
TRISB=0;
TRISD=1;
while(1)
{
if(RD3==1)
{
PORTB=(PORTB+1)&0x0F;
__delay_ms(40);
}
else
{
PORTB=(PORTB-1)&0x0F;
__delay_ms(40);
}
}
}