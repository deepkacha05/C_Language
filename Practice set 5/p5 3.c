#include<stdio.h>
int force(int);
int force(int m){
    printf("the  force is :%.2fN",m*9.8);
    return m*9.8;
}

int main(){
int m;
printf("enter the mass :");
scanf("%d",&m);
force(m);
return 0;
}