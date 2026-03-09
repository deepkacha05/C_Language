#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("f1.txt","w");
int n;
printf("enter the no.:");
scanf("%d",&n);
    fprintf(ptr,"the multiplication table of %d\n",n);
for(int i=0;i<10;i++){
    fprintf(ptr,"%d x %d = %d\n",n,i+1,n*(i+1));
}

fclose(ptr);
return 0;
}