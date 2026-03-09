#include<stdio.h>

int main(){
char c;
printf("enter the character");
scanf("%c",&c);
printf("entered character's ASCII value is %d\n",c);
if (c>=65 && c<=65+25)
printf("entered character in uppercase");
else if (c>=97 && c<=97+25)
printf("entered character in lower case");
else printf("entered character is special character");
return 0;
}