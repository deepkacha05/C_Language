#include<stdio.h>

int main(){
int n=10;
int* ptr;
// printf("enter the size of array:");
// scanf("%d",&n);
ptr=(int*) malloc (n*sizeof(int));
n=15;
ptr=(int*) realloc(ptr,n*sizeof(int));
for(int i=0;i<n;i++){
    ptr[i]=7*(i+1);
}
for(int i=0;i<n;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}