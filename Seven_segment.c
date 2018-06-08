#include<pic.h>
void main()
{int x,y;
 while(1)
{
 TRISB=0x00;
 TRISD=0xFF;
 TRISC=0x00;
 x=PORTD;
 PORTB=(x%10);
 x/=10;
 PORTC=((x/10)<<4)+(x%10);
}
}