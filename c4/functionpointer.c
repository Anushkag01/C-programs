#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int multiply(int a,int b)
{
    return a*b;
}

int main(){
    printf("enter two integer values a and b :");
    int a,b;
    scanf("%d %d",&a,&b);
    int (*fp)(int,int)=add;
    int res=fp(a,b);
    printf("result=%d\n",res);
    // if we are done with add fn then we can resuse fp 
    fp=multiply;
    printf("result=%d\n",fp(a,b));
    printf("%d",sizeof(fp));
    return 0;
}