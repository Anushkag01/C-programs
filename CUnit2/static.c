#include<stdio.h>
void f1(){
    static int a=10;
    a++;
}
int  main(){
    f1();
    printf("%d",a);
}