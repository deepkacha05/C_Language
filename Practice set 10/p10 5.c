#include<stdio.h>

int main(){
    int n;
FILE* ptr;
ptr=fopen("f5.txt","r");
fscanf(ptr,"%d",&n);
fclose(ptr);
FILE* ptr1;
ptr1=fopen("f5.txt","a");
fprintf(ptr1,"%c %d",'\n',n*2);
fclose(ptr1);
return 0;
}