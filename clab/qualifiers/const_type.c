#include<stdio.h>
int main()
{
	/*const int a=10;int *p=&a;
	*p+=11;
	printf("using a=%d\n",a);
	printf("using pointer=%d",*p);*/


	int a=10; const int *p=&a;
	printf("using pointer=%d",*p);
	a+=30;printf("\nusing pointer=%d",*p);
	//*p+=11;printf("\nusing pointer=%d",*p);
	*p++;printf("\nusing pointer=%d",*p);
	
	return 0;
}