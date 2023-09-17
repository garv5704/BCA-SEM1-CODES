# include <stdio.h>
int main(){
    int dist, m, feet, inch, cm;

    printf("Enter any distance in km\n");

    scanf("%d",&dist);

    m = dist*1000;
    feet = dist*3280;
    inch = dist*39370;
    cm = dist*100000;

    printf("this is your distance in metres :%d\n", m);
    printf("this is your distance in feets :%d\n",feet);
    printf("this is your distance in inches :%d\n",inch);
    printf("this is your distance in cm :%d\n", cm);
}