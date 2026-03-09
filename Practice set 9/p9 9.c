#include<stdio.h>
typedef struct date{
    int dd,mm,yyyy;
}D;
int compare(D d1,D d2){
if(d1.dd==d2.dd && d1.mm==d2.mm && d1.yyyy==d2.yyyy)
return 0;
else if (d1.yyyy>d2.yyyy)
return 1;
else if (d1.yyyy<d2.yyyy)
return -1;
else if (d1.mm>d2.mm)
return 1;
else if (d1.mm<d2.mm)
return -1;
else if (d1.dd>d2.dd)
return 1;
else if (d1.dd>d2.dd)
return -1;
}
int main(){
D d1={30,9,2000};
D d2={19,9,2005};
int result;
result=compare(d1,d2);
if (result==0)
printf("Dates are same !");
else if(result==-1)
printf("second Date is future");
else if(result==1)
printf("first Date is future");
return 0;
}