#include<stdio.h>
#include<conio.h>

void main ()
{
    int num ;
    
    printf("enter your choice : ");
    scanf("%d",&num);//1
    
    switch(num)
    {
        case 1:printf("\n your selected number is english");
        break;
        
        case 2:printf("\n your selected number is hindi");
        break;
        
        case 3:printf("\n your selected number is gujrati");
        break;
        
        default:printf("\n your number is not valid");
        break;
    }
    
    getch();
}