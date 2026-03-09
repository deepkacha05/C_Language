#include<stdio.h>
int ptr(int *);
int ptr(int *b){
printf("the address is : %p\n",b);
printf("the value is : %d\n",*b);
return 0;
}

int main(){
int a=3;
int *p=&a;
printf("The address is : %p\n",&a);
ptr(p);
return 0;
}