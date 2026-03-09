#include<stdio.h>
typedef struct complexno{
    int i,j;
}cmp;
void display(cmp c){
  printf("the complex no is:%d+ %di\n",c.i,c.j);
}
int main(){
    cmp c[5];
     for(int i=0;i<5;i++){
        printf("enter the real part:");
        scanf("%d",&c[i].i);
        printf("enter the imaginary part:");
        scanf("%d",&c[i].j);
    }
    for(int i=0;i<5;i++)display(c[i]);
return 0;
}