#include<stdio.h>
int main(){
    char operator;
    int a,b,sum;

    printf("Enter an operator : ");
    scanf("%c",&operator);

    printf("Enter the two values : ");
    scanf("%d%d",&a,&b);

    switch (operator)
    {
    case '+':
        sum = a+b;
        break;
    case '-':
        sum = a-b;
        break;
    case '*':
        sum = a*b;
        break;
    case '/':
        sum = a/b;
        break;
    
    default: 
    printf("Not an operator");
        break;
    }

    printf("%d %c %d = %d", a, operator, b, sum);
    return 0;
}

//CUSTOMIZED PROGRAM TO PERFORM MATHEMATICAL CALCULATIONS ON GIVEN OPERATOR AND OPERAND BY USER.
//CUSTOMIZED PROGRAM TO PERFORM MATHEMATICAL CALCULATIONS ON GIVEN OPERATOR AND OPERAND BY USER.