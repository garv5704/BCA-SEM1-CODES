#include<stdio.h>
int main (){
    
    int number;

    printf("Enter any number :");
    scanf("%d", &number);

    if (number%3==0)
    {
        printf("The number is divisible by 3\n");
    }

    else
    {
        printf("Not divisible by 3\n");
    }

    if (number%7==0)
    {
        printf("The number is divisible by 7\n");
    }
    
    else
    {
        printf("Not divisible by 7\n");
    }
}