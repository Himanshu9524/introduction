//nested if
#include<stdio.h>
#include<conio.h>

void main()
{
    int marks ;
    
    printf("enter your marks");
    scanf("%d",&marks);//65
    
    if (marks>=75)
    {
        printf("\n A grade");
    }
    else if (marks>=65)
    {
        printf("\n B grade");
    }
    else if (marks>=55)
    {
        printf("\n C grade");
    }
    else if (marks>=40)
    {
        printf("\n  d grade");
    }
    else
    {
        printf("fail");
    }
    getch();
}