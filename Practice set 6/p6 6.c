#include<stdio.h>

int main(){
int i;
int* p;
int** ptr;
printf("enter the no.:");
scanf("%d",&i);
p=&i;
ptr=&p;
printf("the value is:%d",**ptr);
return 0;
}