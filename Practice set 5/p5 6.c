#include<stdio.h>
int s(int);
int s(int n){
    if(n==1)return 1;
    return s(n-1)+n;
}

int main(){
int n;
printf("enter the no.:");
scanf("%d",&n);
printf("the sum of first %d is %d",n,s(n));
return 0;
}