# include<stdio.h>
int main(){
    int length, breadth, radius, aor, perimeter, aoc, circumference;

    printf("Enter the length and breadth for rectangle and radius for circle :\n");
    scanf("%d%d%d", &length, &breadth, &radius);

    aoc = (3.14*radius*radius);
    circumference = 2*3.14*radius;
    aor = length*breadth;
    perimeter = 2*(length+breadth);

    printf(" this is the area of circle :%d\n", aoc);
    printf(" this is the circumference of circle :%d\n", circumference);

    printf(" this is the area of rectangle :%d\n", aor);
    printf(" this is the perimeter of rectangle :%d\n", perimeter);



}