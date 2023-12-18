#include<stdio.h>
int main(){

    int n,rem;

    printf("enter a number to reverse it:");
    scanf("%d",&n);

    while (n>0)
    {
        rem = n%10;
        printf("%d", rem);
        n/=10;
    }
    
}