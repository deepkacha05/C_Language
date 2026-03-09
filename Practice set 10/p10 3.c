#include<stdio.h>

int main(){char c;
FILE* ptr;
FILE* fptr;
ptr=fopen("fextra.txt","r");
fptr=fopen("f2.txt","w");
if(ptr==NULL)printf("error opening file");
while(1){
c=fgetc(ptr);
if(c==EOF)break;
else{
fprintf(fptr,"%c%c",c,c);
printf("%c",c);
}
}
fclose(ptr);
return 0;
}