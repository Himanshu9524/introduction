#include<stdio.h>
#include<conio.h>

void main ()
{
   int pri = 16840000;
   float roi = 7.65 ;
   int year = 17 ;
   float intrest ;
   
   intrest = pri*roi*year/100 ;
   float totalamount = pri+intrest;
   printf("\n your intrest amount is %f",intrest) ;
   printf("\n your total amount is %f", totalamount);
   
    getch();
}