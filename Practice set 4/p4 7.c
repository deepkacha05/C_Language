#include<stdio.h>

int main(){
int i,sum=0,n=8;
for(i=1;i<=10;i++) {
sum+=(i*n);
}

printf("the sum is %d",sum);
return 0;
}