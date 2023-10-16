/*this is program to get MONTHS Name*/

# include<stdio.h>
int main(){
    int number;
    printf("Enter any number to get month name:\n");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("Jan.");
        break;
    case 2:
        printf("Feb.");
        break;
    case 3:
        printf("march");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("Aug.");
        break;
    case 9:
        printf("Sept.");
        break;
    case 10:
        printf("Oct.");
        break;
    case 11:
        printf("Nov.");
        break;
    case 12:
        printf("Dec.");
        break;
    
    default:printf("Enter a correct number to get its month");
        break;
    }
}