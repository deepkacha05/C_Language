#include<stdio.h>

int main(){
int a[10],n;
printf("enter the no. :");
scanf("%d",&n);
for(int i=0;i<10;i++){
a[i]=(i+1)*n;
}
for(int i=0;i<10;i++){
printf("%d\n",a[i]);
}
return 0;
}