#include<stdio.h>
int stdlen(char a[]){
    int i=0,count=0;
    char c=a[i];
    while(c!='\0'){
        c=a[i];
        i++;
    }
    count=i-1;
    return count;
}

int main(){
    int n;
    printf("enter the size of string:");
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    printf("string lenght is: %d",stdlen(c));
return 0;
}