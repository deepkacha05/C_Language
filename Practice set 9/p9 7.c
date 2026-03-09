#include<stdio.h>
typedef struct complexno{
    int i,j;
}cmp;
int main(){
cmp c={1,3};
printf("The complex no. is : %d + %di",c.i,c.j);
return 0;
}