#include<stdio.h>
typedef struct emp{
    int salary;
    float score;
}emp;

int main(){
    emp e1;
emp* ptr=&e1;
ptr->salary=5;
ptr->score=9.8;
printf("the salary is :%d(lakh) and score is :%.2f",ptr->salary,ptr->score);
return 0;
}