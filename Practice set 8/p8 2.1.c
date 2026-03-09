// #include<stdio.h>

// int main(){
// char a[5];
// for (int i=0;i<4;i++){
//     scanf("%c",&a[i]);
//     fflush(stdin);
// }
// a[4]='\0';
// printf("%s",a);
// return 0;
// }
#include<stdio.h>

int main(){
    int n;
    printf("enter the size of string:");
    scanf("%d",&n);
char a[n],c;
getchar();
printf("enter the string:");
for(int i=0;i<n-1;i++){
scanf("%c",&c);
a[i]=c;
// fflush(stdin); it is undefined in C avoid using fflush 
}
a[n-1]='\0';
printf("Entered: %s",a);
return 0;
}