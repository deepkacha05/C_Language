#include<stdio.h>

int main(){
FILE *fptr;
fptr=fopen("f.txt","r");
int n,m,o;
 //fprintf(fptr,"%d %d %d",n,m,o);       //for write statement
fscanf(fptr,"%d %d %d",&n,&m,&o);
 printf("the value is:%d %d %d",n,m,o);
fclose(fptr);
return 0;
}