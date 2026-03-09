#include<stdio.h>
int reverse(int a[],int);
int reverse(int a[],int n){
for(int i=0;i<n/2;i++){
int temp;
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}
for(int i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
return 0;
}


int main(){
int n;
printf("enter the size of array :");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
reverse(a,n);

return 0;

}