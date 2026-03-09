#include<stdio.h>
int fibbo(int);

int fibbo(int n){
    int t1=0,t2=1,t;
    printf("%d\n",t1);
    printf("%d\n",t2);

    for(int i=2;i<=n;i++)
    {t=t1+t2;
        t1=t2;
        t2=t;
        // printf("%d",t2);
        printf("%d\n",t);
        
    }
}
int main(){
int n;
printf("enter the no.:");
scanf("%d",&n);
fibbo(n);
return 0;
}