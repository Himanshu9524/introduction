#include<stdio.h>
#include<conio.h>
void main()
{
    int pri = 1684000;
    float roi = 7.65;
    int year = 17;
    float intrest;
    
    
    intrest = pri*roi*year/100;
    float totalamount = pri+intrest;
    printf("\n Your Intrest amount is %f",intrest);
    printf("\n Your Total amount is %f",totalamount);
    
    getch();
}