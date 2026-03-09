#include<stdio.h>
void p(int n);
void p(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

int main(){
int n;
printf("enter the no.:");
scanf("%d",&n);
p(n);
return 0;
}