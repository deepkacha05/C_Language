#include<stdio.h>

int main(){
int n,i=2,prime=0;
printf("enter the no.");
scanf("%d",&n);
do{
    if(n%i==0)
    prime=1;
    i++;
}while(i<n);
if(prime)
printf("given no. is not prime");
else
printf("given no. is prime");
return 0;
}