#include<stdio.h> 
int f1(void);
int i = 100;
int j;
int main() {
printf("%d\n",i); i=90;
printf("%d\n",i);
f1(); printf("%d\n",i); printf("%d\n",j); 
return 0;
}
int f1()
{
    i=200;
    return 0;
}
