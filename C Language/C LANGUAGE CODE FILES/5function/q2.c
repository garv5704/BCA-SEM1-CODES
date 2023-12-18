#include<stdio.h>

void dowork(int a , int b , int *sum , int *prod , int *avg);

int main(){
    int a = 10; int b = 20;
    int sum, prod, avg;

    dowork(a,b,&sum, &prod, &avg);
    printf("sum is %d\n product is %d\n average is %d", sum , prod, avg);

    return 0;
}

void dowork(int a , int b , int *sum , int *prod , int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}
