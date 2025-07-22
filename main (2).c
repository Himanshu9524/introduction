#include<stdio.h>
#include<conio.h>
void main()

{
    int a = 10 ;
    int b = 2 ;
    
    int add,sub,mul,di,mod;
    
    add = a+b;
    sub = a-b;
    mul = a*b;
    di = a/b;
    mod = a%b;
    
    printf("\n addition of %d + %d value is : %d",a,b,add);
    printf("\n substraction of %d - %d value is : %d" , a,b,sub);
    printf("\n multiplication of %d * %d value is : %d" ,a,b,mul);
    printf("\n division of two %d / %d value is : %d",a,b,di);
    printf("\n modulus of two %d / %d value is : %d",a,b,mod);
    
    
    getch();
}