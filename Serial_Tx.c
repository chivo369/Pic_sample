#include<pic.h>
void main()
{TRISC=0;
 SPBRG=6;
// BRGH=1;
 SYNC=0;
 SPEN=1;
 TXEN=1;
 TXREG=13;
while(1);
}