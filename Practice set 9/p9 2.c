#include<stdio.h>
typedef struct vector{
    int i,j;
}vector;
int sumvector(vector a1,vector a2){
    printf("the sum of two vector is :%di + %dj ",(a1.i+a2.i),(a1.j+a2.j));
return 0;
}
int main(){
vector v1={1,2};
vector v2={4,6};
sumvector(v1,v2);
return 0;
}