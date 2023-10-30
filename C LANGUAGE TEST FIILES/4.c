#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int i;

    for(i=0;i<5;i++)
    {printf("arr[%d] is %d\n", i,array[i]);}

    array[2] = 13;

    printf("the updated one :\n");

    for(i=0;i<5;i++)
    {printf("arr[%d] is %d\n", i,array[i]);}

    return 0;
}