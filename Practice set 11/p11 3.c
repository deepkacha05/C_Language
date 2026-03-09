#include<stdio.h>

int main(){
int n=6;
int* ptr;
ptr=(int*) calloc(n,sizeof(int));
ptr[0]=19;
printf("%d",ptr[0]);
return 0;
}