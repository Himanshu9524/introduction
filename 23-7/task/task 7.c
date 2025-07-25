#include<stdio.h>
#include<conio.h>

void main()
{
    int s, m, g, e, h, total;
    float percentage;

    printf("Enter marks for s: ");
    scanf("%d", &s);
    
    printf("Enter marks for m :");
    scanf("%d", &m);
    
    printf("Enter marks for m :");
    scanf("%d", &e);
    
    printf("Enter marks for g:");
    scanf("%d",&g);
    
    printf("Enter marks for e :");
    scanf("%d",&h);
    
    total = s+m+g+e+h ;
    percentage = total/5 ;
    
    printf("\n total marks : %d ",total);\
    printf("\n total percentage :%f",percentage);
    
    
    getch();
}