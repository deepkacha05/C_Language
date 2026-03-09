#include<stdio.h>

char* slice( char str[],int m,int n){
char *ptr1;
char *ptr2;
ptr1=&str[m];
ptr2=&str[n];
str=ptr1;
str[n]='\0';
return str;

}
int main(){
char str[]="Deep bhai";
printf("%s",slice(str,1,7));

return 0;
}