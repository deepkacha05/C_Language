#include<stdio.h>

int main(){
int a,b,c,d;
printf("enter no. 1\n");
scanf("%d",&a);
printf("enter no. 2\n");
scanf("%d",&b);
printf("enter no. 3\n");
scanf("%d",&c);
printf("enter no. 4\n");
scanf("%d",&d);
 
if (a>b && a>c && a>d)
printf("a is greatest no. %d",a);
else if (b>a && b>c && b>d)
printf("b is greatest no. %d",b);
else if (c>b && c>a && c>d)
printf("c is greatest no. %d",c);
else if (d>b && d>c && d>a)
printf("d is greatest no. %d",d);
else printf("given no. is same");
return 0;
}