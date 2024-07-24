#include<stdio.h>
int a=10; //if commented then errot
int main()
{
	extern int a;
	int b=a; //int b=int a
	b=a;
	printf("%d",b);
}