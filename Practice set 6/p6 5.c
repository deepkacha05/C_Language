#include<stdio.h>
int* s(int,int);
float* avg(int,int );
int* s(int a,int b){
    int sum=(a+b);
     printf("the sum is :%d\n",sum);
    int *ptr=&sum;
    return ptr;
}
float* avg(int a,int b){
    float av=(a+b)/2.0;
     printf(" avg is :%f\n",av);
    float *ptr=&av;
    return ptr;
}

int main(){
    int a=5,b=7;
int *p=s(a,b);
float *p1=avg(a,b);
    printf("the address of sum is: %u and avg is : %u",p,p1);
    
return 0;
}