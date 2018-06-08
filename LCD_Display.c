#include<pic.h>
#define _XTAL_FREQ 16000000
#define RS RB1 
#define EN RB2
#define DATA1 PORTD

void cmd(char val)
{RS=0;
DATA1=val;
EN=0;
__delay_ms(5);
EN=1;
}
void data(char val)
{RS=1;
DATA1=val;
EN=0;
__delay_ms(2);
EN=1;
}
void string(char x[])
{for(int i=0;x[i]!=0;i++)
	data(x[i]);
}
 
void main()
{int a[10]={1,2,3,4,5,6,7,8,9,0};
 int x=a[0],y=a[0];
 for(int i=0;i<10;i++)
	{if (a[i]<x)
		x=a[i];
	 if (a[i]>y)
		y=a[i];
	}
TRISB=0x00;
TRISD=0x00;

cmd(0x38);
cmd(0x01);
cmd(0x0c);
cmd(0x80);

while(1)
{cmd(0x01);
cmd(0x80);
string("LARGEST : ");
data(y+0x30);
cmd(0xC0);
string("SMALLEST: ");
data(x+0x30);
__delay_ms(40);
}
}