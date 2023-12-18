/*this is program to get DAYS Name*/

#include<stdio.h>
int main(){
    int number;
    printf("Enter the number of day to get it's name:\n");
    scanf("%d",&number);

    switch (number)
    {
    case 1: printf("Monday");        
        break;
    case 2: printf("Tuesday");        
        break;
    case 3: printf("Wednesday");        
        break;
    case 4: printf("Thursday");        
        break;
    case 5: printf("Friday");        
        break;
    case 6: printf("Saturday");        
        break;
    case 7: printf("Sunday");        
        break;
    
    default:printf("enter a correct number to display the name of the days.");
        break;
    }
}