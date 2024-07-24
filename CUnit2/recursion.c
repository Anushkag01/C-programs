#include<stdio.h>
/*
//sum
int sum(int a,int b){
    if(b==0){
        return a;
    }
    return 1+sum(a,b-1);
}
int main(){
    int a=5,b=3;
    printf("sum=%d\n",sum(a,b));
    return 0;
}

//difference
int sum(int a,int b){
    if(b==0){
        return a;
    }
    return 1+sum(a,b-1);
}
int diff(int a,int b){
    if(b==0){
        return a;
    }
    return diff(a-1,b-1);
}

int main(){
    int a=5,b=3;
    printf("sum=%d\n",sum(a,b));
    printf("diff=%d\n",diff(a,b));
    return 0;
}

//factorial
int factorial(int n){
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);    
}
int main(){
    int a=5;
    printf("factorial=%d\n",factorial(a));
    return 0;
}
*/

//hw
//multiplication
//method 1--a added that many no. of times
int mul(int a,int b){
    if(b==1){
        return a;
    }
    return a+mul(a,b-1);
}
int main(){
    int a=5,b=3;
    printf("sum=%d\n",mul(a,b));
    return 0;
}
//method 2 HW
