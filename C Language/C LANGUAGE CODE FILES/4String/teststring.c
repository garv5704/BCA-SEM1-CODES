#include<stdio.h>
#include<string.h>

int main(){
char name[100]="garvkhatri";
char name_2[100]="guddubhaiya";

printf("\nstring length is %d\n\n", strlen(name));//prints the string's length.
printf("lowercase is %s\n\n", strlwr(name));//prints the string in lowercase.
printf("Uppercase is %s\n\n", strupr(name));//prints the string in uppercase.

strcat(name,name_2);
printf("concatenates string is %s\n\n", name);//prints the mix of two strings.

strcpy(name,name_2);
printf("copied second string to the first is %s\n\n", name);//prints the copied string.

strncpy(name, name_2, 4);
printf("nth copied string is %s\n\n", name);

strrev(name);
printf("reversed string is %s\n\n", name);

return 0;
}