#include<stdio.h>

int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int *ptr=a;
ptr+=2;
printf("the element of array is :%d",*ptr);
return 0;
}