#include<stdio.h>
/*
void fun1(int a1); // declaration 
void main()
{
int a1 = 100;
printf("before function call a1 is %d\n", a1); // a1 is 100 
fun1(a1); // call
printf("after function call a1 is %d\n", a1); // a1 is 100
return ; }
void fun1(int a1) {
printf("a1 in fun1 before changing %d\n", a1);
printf("a1 in fun1 after changing %d\n", a1); //200 
}


void swap(int *a, int *b) {
int temp = *a; *a = *b;
*b = temp;
}
int main()
{ int a=100;
int b = 200;
printf("before call a is %d and b is %d\n", a, b); swap(&a, &b);
printf("after call a is %d and b is %d\n", a, b); return 0;
}
// a is 100 and b is 200 // a is 100 and b is 200
---------------------------------------------------------------------------
void f1(int);
void f2(int*);
void f3(int); 
void f4(int*); 
int* f5(int* );
//int* f6();
int main()
{ int x = 100;
f1(x);
printf("x is %d\n", x); // 100
double y = 6.5;
f1(y); // observe what happens when double value is passed as argument to integer parameter?
printf("y is %lf\n", y); // 6.500000 
int *p = &x; // pointer variable
f2(p);
printf("x is %d and *p is %d\n", x, *p); f3(*p);
printf("x is %d and *p is %d\n", x, *p); f4(p);
printf("x is %d and *p is %d\n", x, *p, p);
int z= 10;
p =f5(&z);
printf("z is %d and %d\n", *p, z); 
//p = f6();
printf("*p is %d \n", *p);
return 0;
}
void f1(int x) {
x = 20; }
void f2(int* q) {
int temp = 200;
q = &temp; }
void f3(int t) {
t = 200; }
void f4(int* q) {
int temp = 200;
*q = temp;
}
int* f5(int* x) {
return x; }
// int* f6() {
// int a = 22; // We should never return a pointer to a local variable
// return &a; // Compile time Error }
*/


// int main(){
//     int a=100,b=20;
//     printf("%d",printf("%d %d\n",a,b)); // 100 and 20 next line 7 is printed
// }

int main(){
    printf("%lu",sizeof(int));
}