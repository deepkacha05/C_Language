#include<stdio.h>

int main(){
int n;
int* ptr;
printf("enter the size of array:");
scanf("%d",&n);
ptr=(int*) malloc(n*sizeof(int));
ptr[0]=19;
printf("%d",ptr[0]);
return 0;
}