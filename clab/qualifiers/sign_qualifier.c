#include<stdio.h>

int main()
{
	unsigned char c;
	for(int i=0;i<=255;i++)
	{
		printf("%c",i);
	}
	printf("\nsigned characters\n\n");
	for(int i=-128;i<=127;i++)
	{
		printf("%c",i);
	}
	return 0;
	
}