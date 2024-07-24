#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    //int d=10;
    //printf("%d %d %d\n",d++,d++ - --d,--d);
    printf("max range of value for short =%d\n",SHRT_MAX);
    printf("min range of value for short =%d\n",SHRT_MIN);
    //printf("range of value for short =%u\n",USHRT_INT);
    printf("min range of value for int =%d\n",INT_MIN);
    printf(" max range of value for int =%d\n",INT_MAX);
    printf(" max range of value for float =%e\n",FLT_MAX);
    printf(" min range of value for float =%e\n",FLT_MIN);
    printf(" max range of value for short =%d\n",INT_MAX +1) ;//-2147483648 it will show with negative 
    printf(" max range of value for short =%d\n",INT_MAX +2);//-2147483647
    printf(" max range of value for short =%d\n",INT_MAX +3);//-2147483646
    printf(" max range of value for short =%u\n",INT_MAX +2);//2147483649
    printf("%lu",sizeof(INT_MAX));
    short int a=3277;//for 32768 it shows -32768 since out of range
    printf("a=%d \n",a);
    return 0;
}
