#include<stdio.h>
#include<string.h>
typedef struct account{
    int accno;
    char name[50];
    char ifsc[12];
    float balance;
}acc;

int main(){
acc a;
strcpy(a.name,"deep");
a.accno=1233445;
strcpy(a.ifsc,"sbin0060162");
a.balance=54556.23;
printf("Account no.:%d\nAccount Holder name:%s\nIFSC:%s\nAccount Balance=%.2f",a.accno,a.name,a.ifsc,a.balance);
return 0;
}