#include<stdio.h>
int main(){
    int number;

    printf("enter any number");
    scanf("%d",&number);

    (number%2==0)? printf("It is Even") : printf("It is odd");
    
}