#include<stdio.h>

int main(){
int a=5;
int *b=&a;
printf("the address of a is:%u",&a);
printf("\nthe address of a is:%p",b);
printf("\nthe value is :%d",*b);
return 0;
}