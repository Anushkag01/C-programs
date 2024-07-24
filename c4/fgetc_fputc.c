#include<stdio.h>
/* inline functions: parsed by the compiler
macros: are expanded by the pre-processor. 
	Macros do not return a value,and are usefull for small reusable codes.
	Macros, recieve source code at compile time (i.e compile time environment)
functions: recieves value as parameters and are evaluated at run-time, and returns 
	   a value to the surrounding expressions.
*/

/* int fgetc(FILE *fp);
	on success:Next byte from the input stream
	on failure: EOF on error.
   int fputc(int c,FILE *fp);
	success: ascii value of the Character that is written
	failure: EOF on error.

*/
int main()
{
	FILE *rp=fopen("a2.txt","r");
	FILE *wp=fopen("output.txt","w");
	if(rp==NULL)
		printf("unsuccessfull!!");
	else
	{
		printf("success!!\n");
		char ch;
		while((ch=fgetc(rp))!=EOF)
		{
			//fputc(ch,wp); // instaed of wp try stdin stdout and u can see in terminal itself
			fputc(ch,stdout);
		}

		fclose(rp);fclose(wp);
	}
	return 0;
}
		