#include<stdio.h>

int main(){
float p,r,t;
printf("enter the amount");
scanf("%f",&p);
printf("enter the rate");
scanf("%f",&r);
printf("enter the time");
scanf("%f",&t);
printf("Simple interest is %.2f",(p*r*t)/100);

return 0;
}