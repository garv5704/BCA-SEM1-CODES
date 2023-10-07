#include<stdio.h>
int main(){
    float percentage;

    printf("Enter your percentage:");
    scanf("%f",&percentage);

    if (percentage>=90)
    {
        printf("Your grade is A+");
    }
    
    else if (percentage>=80)
    {
        printf("Your grade is A");
    }

    else if (percentage>=70)
    {
        printf("Your grade is B");
    }

    else if (percentage>=60)
    {
        printf("Your grade is C");
    }

    else if (percentage>=33)
    {
        printf("Your grade is D");
    }

    else printf("you are fail");

}