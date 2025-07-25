//nested if
#include<stdio.h>
#include<conio.h>

void main()
{
    int age ;
    
    printf("enter your age");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("\n eligible to vote");
    
        if (age>=60)
        {
            printf("\n senior citizen category");
        }
        else
        {
            printf("\n young age category");
        }
    }
    else
    {
        printf("\n not eligible to vote");
    }
    getch();
}