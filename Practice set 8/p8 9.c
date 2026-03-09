#include<stdio.h>
#include<string.h>

int main(){
char a[100];
char c='d';
int present=0;
scanf("%s",&a);
for(int i=0;i<strlen(a);i++){
    if(a[i]==c){
present=1;
    }
}
if(present==1)
printf("%c is present in string",c);
else
printf("%c is not present in string",c);
return 0;
}