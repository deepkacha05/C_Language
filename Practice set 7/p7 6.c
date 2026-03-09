#include<stdio.h>
int fc(int a[],int);
int fc(int a[],int n){
int count=0;
for(int i=0;i<n;i++)
{
if(a[i]>0)
    count++;
}
return count;
}


int main(){
int n;
printf("enter the size of array :");
scanf("%d",&n);
int a[n],c;
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
c=fc(a,n);
printf("positive integer in array is :%d",c);
return 0;

}