#include<stdio.h>
float temp(float);
float temp (float c){
    printf("temperature in fahrenheit is :%.2f",1.8*c+32);
return 1.8*c+32;
}

int main(){
float c;
printf("enter the temperature :");
scanf("%f",&c);
temp(c);
return 0;
}