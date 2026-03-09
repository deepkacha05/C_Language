#include<stdio.h>

int main(){
int n=5;
int* ptr;
ptr=(int*) calloc(n,sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
printf("the array is :");
for(int i=0;i<n;i++){
    printf("%d\t",ptr[i]);
}
n=10;
ptr=(int*)realloc(ptr,n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
printf("the array is:");
for(int i=0;i<n;i++){
    printf("%d\t",ptr[i]);
}
return 0;
}