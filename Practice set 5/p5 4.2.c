#include<stdio.h>
int fibbo(int);

int fibbo(int n){
    if(n==1 ||n==2)
    return n-1;
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
int n;
printf("enter the no.:");
scanf("%d",&n);
printf("the element of %d is %d",n,fibbo(n));
return 0;
}