//arrays used in function as arguments.



#include<stdio.h>

void printnumbers(int arr[], int n);

int main(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    printnumbers(arr,10);

    return 0;
}

void printnumbers(int arr[], int n){

    for(int i = 0; i<=n; i++){
        printf("%d\t",arr[i]);
    }
}