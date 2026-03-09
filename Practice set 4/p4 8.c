#include<stdio.h>

int main(){
int i,n,fact=1;
printf("enter the no.");
scanf("%d",&n);
for(i=n;i>=1;i--) {
fact*=i;
}

printf("the factorial is %d",fact);
return 0;
}