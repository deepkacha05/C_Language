#include<stdio.h>
#include<string.h>

int main(){
char a[100];
char c='d';
int count=0;
scanf("%s",&a);
for(int i=0;i<strlen(a);i++){
    if(a[i]==c){
count++;
    }
}
printf("%cis: %d",c,count);
return 0;
}