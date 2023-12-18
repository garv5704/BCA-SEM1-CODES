#include<stdio.h>

//function prototype
void Namaste();
void Bonjour();


//function calling inside main program
int main(){

char n;
printf("write f for french and i for indian");
scanf("%c",&n);

if (n == 'i')
{
    Namaste();
}
else{
    Bonjour();
}
return 0;
}

//function defination
void Namaste(){
    printf("Namaste indian");
}
void Bonjour(){
    printf("Bonjour French guy");
}
