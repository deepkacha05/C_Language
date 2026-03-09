#include<stdio.h>
typedef struct vector{
    int i,j;
}vector;
int main(){
vector v={1,2};
printf("vector is %di + %dj",v.i,v.j);
return 0;
}