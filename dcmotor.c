#include<pic.h>
void delay()
{
	int i,j;
	for(i=0;i<j;i++)
	for(j=200;j>0;j--)
	}
	void main()
{
TRISB=0XFF;
TRISC=0X00;
PORTC=0X00;
while(1)
{
if(RB0==0)
{
RC1=1;
delay(100);
RC1=0;
delay(100);
}
else
RC1=0;
delay(100);
RC1=1;
delay(100);
}
}
