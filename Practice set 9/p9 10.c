#include<stdio.h>
typedef struct time{
    int mm,hh;
}T;
int compare(T t1,T t2){
if(t1.mm==t2.mm && t1.hh==t2.hh)
return 0;
else if (t1.mm<t2.mm)
return 1;
else if (t1.mm>t2.mm)
return -1;
else if (t1.hh<t2.hh)
return 1;
else if (t1.hh>t2.hh)
return -1;
}
int main(){
T t1={12,07};
T t2={12,41};
int result;
result=compare(t1,t2);
if (result==0)
printf("Time are same !");
else if(result==-1)
printf("first Time is future");
else if(result==1)
printf("second Time is future");
return 0;
}