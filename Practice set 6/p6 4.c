#include<stdio.h>
int m(int *);
int m(int *a){
    return (*a)*30;
}

int main(){
int n,x;
printf("enter the no.:");
scanf("%d",&n);
int *p=&n;
x=m(p);
printf("value is : %d",x);
return 0;
}