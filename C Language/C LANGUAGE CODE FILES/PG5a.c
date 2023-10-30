//Program to find greater from 3 numbers::::
//
//
#include<stdio.h>
void main()
{
    int a ; int b ; int c;

    printf("Enter 3 numbers\n");
    
    scanf("%d",& a);
    scanf("%d",& b);
    scanf("%d",& c);

    if ((a>b)&&(a>c))
    {printf("A is greater");}
    if ((b>a)&&(b>c))
    {printf("b is greater");}
    if ((c>a)&&(c>b))
    {printf("c is greater");}
    
}


