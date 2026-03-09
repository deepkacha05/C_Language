#include<stdio.h>
int mystrlen(char s[]){
 int i=0,count=0;
    char c=s[i];
    while(c!='\0')
    {
        c=s[i];
        i++;
    }
    count=i-1;
   return count;
}
char mystrcpy(char a[],char b[]){
    for (int i=0;i<mystrlen(b);i++){
        a[i]=b[i];
    }
    a[mystrlen(b)]='\0';
    return 0;
}

int main(){
    char a[]="deep kacha";
    char b[30];
    mystrcpy(b,a);
    printf("%s  %s",a,b);
 
return 0;
}