#include<stdio.h>
/*
int main(){
    int a=3;
    printf("orignal value of a=%d",a);
    printf("the compliment value is =%d",~a);
    return 0;
}
*/
int main(){
    int a=3,c;
    int b=5;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    c=b;
    b=a;
    a=c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}