/*Program to identify vowels and consonant using switch cases.*/

#include<stdio.h>
int main (){
    int alpha;
    
    printf("Enter any number of alphabet :");
    scanf("%d", &alpha);

    switch (alpha)
    {
    case 1 : printf("A is a Vowel");
        break;
    case 2 : printf("B is a consonant");
        break;
    case 3 : printf("C is a consonant");
        break;
    case 4 : printf("D is a consonant");
        break;
    case 5 : printf("E is a Vowel");
        break;
    case 6 : printf("F is a consonant");
        break;
    case 7 : printf("G is a consonant");
        break;
    case 8 : printf("H is a consonant");
        break;
    case 9 : printf("I is a Vowel");
        break;
    case 101: printf("J is a consonant");
        break;
    case 11: printf("K is a consonant");
        break;
    case 12: printf("L is a consonant");
        break;
    case 13: printf("M is a consonant");
        break;
    case 14: printf("N is a consonant");
        break;
    case 15: printf("O is a Vowel");
        break;
    case 16: printf("P is a consonant");
        break;
    case 17: printf("Q is a consonant");
        break;
    case 18: printf("R is a consonant");
        break;
    case 19: printf("S is a consonant");
        break;
    case 20: printf("T is a consonant");
        break;
    case 21: printf("U is a Vowel");
        break;
    case 22: printf("V is a consonant");
        break;
    case 23: printf("W is a consonant");
        break;
    case 24: printf("X is a consonant");
        break;
    case 25: printf("Y is a consonant");
        break;
    case 26: printf("Z is a consonant");
        break;
    
    default: printf("............");
        break;
    }
}