#include<stdio.h>

int fibo(int n);

int main(){
printf("fibonacci is %d", fibo(5));
return 0;
}

int fibo(int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int fiboN = fibo(n-1) + fibo(n-2);
    return fiboN;
}