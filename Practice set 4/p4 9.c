#include<stdio.h>

int main(){
int n,fact=1,i;
printf("enter the no.");
scanf("%d",&n);
i=n;
while(i>=1){
    fact*=i;
    i--;
}
printf("the factorial is %d",fact);
return 0;
}