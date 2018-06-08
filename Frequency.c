#include<pic.h.
#define _XTAL_FREQ 1000000
void main()
{TRISB=0;
 T2CON=0x04;
 while(1)
 {while(TMR2IF==0);
 TMR2IF=0;
 RB0=~RB0;
 if(RD3==0)
  TMR2=12;
 else
  TMR2=100;
 }
}