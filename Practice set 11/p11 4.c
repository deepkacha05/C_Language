#include<stdio.h>

int main(){
int n;
int* ptr;
printf("enter the size of array:");
scanf("%d",&n);
ptr=(int*) malloc(n*sizeof(int));
ptr=(int*) realloc(ptr,(2*n)*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}