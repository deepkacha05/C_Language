#include<stdio.h>

int main(){
int n,i,prime=0;
printf("enter the no.");
scanf("%d",&n);
for (i=2;i<n;i++){
    if(n%i==0)
    prime=1;
}
if(prime)
printf("given no. is not prime");
else
printf("given no. is prime");
return 0;
}