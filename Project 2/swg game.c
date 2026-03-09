#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player,computer=rand()%3;
    // snake =0
    // water =1
    // gun   =2
    printf("enter the no.:0 for snake 1 for water 2 for gun\n");
    scanf("%d",&player);
    printf("Computer choose: %d\n",computer);
    if(player==0 && computer==0)
    printf("it's draw!");
    else if(player==0 && computer==1)
    printf("you won!");
    else if(player==0 && computer==2)
    printf("you loss!");
    else if(player==1 && computer==0)
    printf("you loss!");
    else if(player==1 && computer==1)
    printf("it's draw!");
    else if(player==1 && computer==2)
    printf("you won!");
    else if(player==2 && computer==0)
    printf("you won!");
    else if(player==2 && computer==1)
    printf("you loss!");
    else if(player==2 && computer==2)
    printf("it's draw!");
    else
    printf("something went wrong!");

return 0;
}