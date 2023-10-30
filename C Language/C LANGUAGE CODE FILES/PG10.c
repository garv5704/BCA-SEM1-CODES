#include <stdio.h>

int main() {
    int a, b, c, d, e, sum;
    int total = 500;
    int p; 

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;

    p = (sum * 100) / total;

    printf("p: %d%%\n", p);

}
