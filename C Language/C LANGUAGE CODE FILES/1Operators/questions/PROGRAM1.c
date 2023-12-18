# include <stdio.h>
int main(){
    float dist, m, feet, inch, cm;

    printf("Enter any distance in km\n");

    scanf("%f",&dist);

    m = dist*1000;
    feet = dist*3280.84;
    inch = dist*39370.1;
    cm = dist*100000;

    printf("this is your distance in metres :%f\n", m);
    printf("this is your distance in feets :%f\n",feet);
    printf("this is your distance in inches :%f\n",inch);
    printf("this is your distance in cm :%f\n", cm);
}