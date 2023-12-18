# include<stdio.h>
int main(){
    float length, breadth, radius, aor, perimeter, aoc, circumference;

    printf("Enter the length and breadth for rectangle and radius for circle :\n");
    scanf("%f%f%f", &length, &breadth, &radius);

    aoc = (3.14*radius*radius);
    circumference = 2*3.14*radius;
    aor = length*breadth;
    perimeter = 2*(length+breadth);

    printf(" this is the area of circle :%f\n", aoc);
    printf(" this is the circumference of circle :%f\n", circumference);

    printf(" this is the area of rectangle :%f\n", aor);
    printf(" this is the perimeter of rectangle :%f\n", perimeter);



}