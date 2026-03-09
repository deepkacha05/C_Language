#include<stdio.h>

int main(){
int n;
printf("(how many tables) enter the no.:");
scanf("%d",&n);
int a[n][10];
int mul[n];
for (int i=0;i<n;i++){
    scanf("%d",&mul[i]);
}
for(int i=0;i<n;i++){
    for(int j=0;j<10;j++){
        a[i][j]=mul[i]*(j+1);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<10;j++){
        printf("the array is :%d\n",a[i][j]);
    }
    printf("\n");
}
return 0;
}