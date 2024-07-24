#include<stdio.h>
/*
int main(){
    //printf("%c",'\043');
    //printf("%s %s %s %s %s\n", "one", "two", "three", "four");
    printf("%5d and %5d is %6d\n", 20, 30, 20 + 30);
}

#include <stdio.h> 
int main()
{
int a,b,ret_Value_scanf,ret_Value_printf;
printf("Enter the value of a and b"); 
ret_Value_scanf=scanf("%d%d",&a,&b);
 ret_Value_printf=printf("a : %d b : %d\n", a, b);
printf("The return value of scanf is %d\n",ret_Value_scanf); 
printf("The return value of printf is %d",ret_Value_printf); 
return 0; 
}

// to check XOR opertor

int main(){
    printf("%d\n",1^1);
    printf("%d\n",0^1);
    printf("%d\n",0^0);
    printf("%d\n",1^12);//0001 XOR 01100= 1101---basically 13
    printf("%d\n",12^1);
    printf("%d\n",12^0);//0000 XOR 1100=1100--basically 12 itself
    return 0;
}

//to check whether odd
int main(){
    printf("is odd %d\n",6 & 1);  // since not odd return 0-- meaning false
    printf("is odd %d\n",11 & 1);  // sinc odd returns 1 --meaning true
    printf("is even %d\n",6 & 1); // doesnt work & 1 --- used to check if odd
    printf("is even %d\n",7 & 1);
    return 0;
}

int main() {
int a=10;
int b=8; 
printf("%d\n",a&b); //8 
printf("%d\n",a|b); //10 
printf("%d\n",9|11); //11
printf("%d\n",11|9); //11
printf("%d\n",2|3);  //3
printf("%d\n",52|10);
printf("%d\n",a<<2); //40 
printf("%d\n",a>>2); //2 
printf("%d\n",~(10)); //-11 
return 0;
}

int main(){
for(int i = 1; i <= 5; ++i)
{
printf("%d\n",i);
}
}
---------
int main(){
    int n=234;
    printf("Hexadecimal:%#X\n", n); printf("Octal:%#o", n);
}
*/
int main(){
    printf("%2.5f\n",2.342);
    printf("%2.5f\n",200.345);
    printf("%2.5f\n",20.3525);
    printf("\a");
}