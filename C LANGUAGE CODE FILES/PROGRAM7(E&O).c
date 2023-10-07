#include<stdio.h>
int main (){

    int number;

    printf("Enter any number :");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("This is Even number");
    }
    
    else
    {
        printf("This is odd number");
    }
}