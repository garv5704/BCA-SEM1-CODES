# include<stdio.h>
int main(){
    int f; int c;

    printf("ENTER A TEMPERATURE IN FARHENHEIT\n");
    scanf("%d",&f);

    c = (f-32)*5/9;
     printf("this is the temperture in celsius :%d", c);


}