/*this is program to switch operators to perform mathematical calculation on two values.*/

#include<stdio.h>
int main (){

    int a,b,choice;
    printf("enter the value of a and b:\n");
    scanf("%d%d", &a, &b);

printf("Number 1 for addition ---- Number 2 for subtraction \n Number 3 for multiplication ---- Number 4 for division\n");

    printf("NOW ENTER YOUR CHOICE : \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:printf("Sum is %d", a+b);
        break;
    case 2:printf("Subtraction is %d", a-b);
        break;
    case 3:printf("Multiplication is %d", a*b);
        break;
    case 4:printf("division is %d", a/b);
        break;
    
    default:printf("enter a currect number for calculation.");
        break;
    }
}