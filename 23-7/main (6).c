#include<stdio.h>
#include<conio.h>

void main ()
{
    int pri ;
    float roi ;
    int year ;
    float intrest ;
    
    printf("enter pri amount :");
    scanf("%d",&pri);
    
    printf("enter roi :");
    scanf("%f",&roi);
    
    printf("enter year :");
    scanf("%d",&year);
    
    intrest = pri*roi*year/100;
    float totalamount = pri+intrest ;
    
    printf("\n your total intrest amount is %f",intrest);
    printf("\n your total amount is %f",totalamount);
    
    getch ();
}