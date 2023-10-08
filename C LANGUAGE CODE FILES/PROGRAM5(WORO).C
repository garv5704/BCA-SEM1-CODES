# include<stdio.h>
int main (){
    int a,b;

    printf("Enter the a and b values :\n");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("a is greater value.");
    }

    else if (a==b)
    {
        printf("a is equals to b");
    }

    else 
    {
        printf("b is greater value.");
    }
    
    return 0;

    
}