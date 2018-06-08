#include<pic.h>
#include<math.h>
void main()
{TRISB=0;
 TRISC=0x80;
 SPBRG=6;
// BRGH=1;
 SYNC=0;
 SPEN=1;
 CREN=1;
 while(RCIF==0);
 int x=RCREG;
if(x%2==0)
  x=sqrt(x);
else
 x*=x;


PORTB=((x/10)%10)<<4|(x%10);
PORTC=(x/100)%10;
while(1);
}