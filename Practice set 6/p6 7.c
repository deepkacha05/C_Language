#include<stdio.h>
int m(int );
int m(int a){
    return (a)*10;
}

int main(){
int n,x;
printf("enter the no.:");
scanf("%d",&n);
x=m(n);
printf("value is : %d",x);
return 0;
}