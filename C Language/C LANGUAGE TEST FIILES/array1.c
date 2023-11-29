//array program to scan the three prices and print it.

#include<stdio.h>

int main(){
    float price[3];

    printf("enter 3 prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("1st price : %.1f\n", price[0]+(0.18*price[0]));
    printf("2nt price : %.1f\n", price[1]+(0.18*price[1]));
    printf("3rt price : %.1f\n", price[2]+(0.18*price[2]));

    return 0;
}