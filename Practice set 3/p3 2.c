#include<stdio.h>

int main(){
int a,b,c,t;
printf("enter the marks of subject 1\n");
scanf("%d",&a);
printf("enter the marks of subject 2\n");
scanf("%d",&b);
printf("enter the marks of subject 3\n");
scanf("%d",&c);
t=a+b+c;
if(a<33 || b<33 || c<33)
printf("student is fail");
else if (t/3<40) printf("student is fail");
else printf("student is pass");
return 0;
}