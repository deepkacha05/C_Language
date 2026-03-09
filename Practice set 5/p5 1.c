#include<stdio.h>
int avg (int a,int b,int c);
int avg (int a,int b,int c){
    return (a+b+c)/3;
}

int main(){
    int x,y,z;
   printf("enter the no.=");
   scanf("%d",&x);
   printf("enter the no.=");
   scanf("%d",&y);
printf("enter the no.=");
scanf("%d",&z);
int a=avg(x,y,z);
printf("the avg is %d",a);

return 0;
}