#include<stdio.h>
struct complexno{
    int i,j;
};
int main(){
struct complexno c={1,3};
printf("The complex no. is : %d + %di",c.i,c.j);
return 0;
}