#include<stdio.h>

int main(){
    FILE* ptr;
int s1,s2;
char n1[30],n2[30];
ptr=fopen("f3.txt","w");
printf("enter the name of emp:");
scanf("%s",n1);
printf("enter the salary:");
scanf("%d",&s1);
printf("enter the name of emp:");
scanf("%s",n2);
printf("enter the salary:");
scanf("%d",&s2); 
fprintf(ptr,"i.%s . %d",n1,s1);
fprintf(ptr,"%c",'\n');
fprintf(ptr,"ii.%s . %d",n2,s2);
return 0;
}