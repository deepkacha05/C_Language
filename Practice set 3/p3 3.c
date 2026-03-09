#include<stdio.h>

int main(){
float income,tax=0;
printf("enter the income in lakhs");
scanf("%f",&income);
if(income<=2.5)
tax=0;
else if (income>2.5 && income<=5)
tax=(income-2.5)*0.05;
else if (income>5 && income<=10)
tax=((income-2.5)*0.05)+(income-5)*0.2;
else if (income>10)
tax=((income-2.5)*0.05)+((income-5)*0.2)+(income-10)*0.3;

printf("tax is %.2f lakhs",tax);
return 0;
}