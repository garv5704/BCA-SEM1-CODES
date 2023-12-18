# include<stdio.h>
int main(){
    float f, c;

    printf("ENTER A TEMPERATURE IN FARHENHEIT\n");
    scanf("%f",&f);

    c = (f-32)*5/9;
     printf("this is the temperture in celsius :%f", c);

return(0);
}