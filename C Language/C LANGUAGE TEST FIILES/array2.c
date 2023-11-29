#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u", ptr);

    return 0;

}

//ptr++ makes the memory address of ptr increased by 4 bytes.