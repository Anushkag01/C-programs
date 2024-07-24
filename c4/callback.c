#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int multiply(int a,int b)
{
    return a*b;
}

int calc(int (*fnp)(int ,int),int x,int y)
{
    return fnp(x,y);
}

int main(){
    printf("Entered inside main function\n");
    printf("sum= %d \n",calc(add,1,2));
    printf("multipiy= %d\n",calc(multiply,1,2));
    return 0;

}