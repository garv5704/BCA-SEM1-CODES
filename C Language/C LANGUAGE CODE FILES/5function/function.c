#include<stdio.h>

int add(int a ,int b);
int subt(int a,int b);
int mult(int a,int b);
int div(int a, int b);
int perc(int a,int b);

int main(){
    int a=10; int b=20; int c;
    printf ("%d\n",add(a,b));
    printf ("%d\n",subt(a,b));
    printf ("%d\n",mult(a,b));
    printf ("%d\n",div(a,b));
    printf ("%d",perc(a,b));
    return 0;
}

int add(int a , int b){ 
    return a+b;
}   
int subt(int a , int b){ 
    return a-b;
}   
int mult(int a , int b){ 
    return a*b;
}   
int div(int a , int b){ 
    return a/b;
}   
int perc(int a , int b){ 
    return a%b;
}   