#include<stdio.h>
/* char* fgets(char *char_array, int n, FILE *stream);
	success:returns Pointer to the string buffer
	failure: NULL on EOF or Error.
   int fputs(const char *s, FILE *stream);
	success:A non-negative number (we usually see 0)
	failure: EOF(-1) on error.\

NOTE: gets(char[]), puts(char[]) cannot be used for file operations (read/write from file)
*/
/*
int main()
{
	FILE *rp=fopen("check.txt","r");
	FILE *wp=fopen("output1.txt","w");
	if(rp==NULL)
		printf("unsuccessfull file operation!!\n"); //occurs when file doesnt exist.
	else
	{
		printf("successfull file operation!! file starting address= %p\n",rp);	
		char buff[20];// char *buff; and char *buff[20] throws error
		printf("fgets=%p\n",fgets(buff,14,rp)); //pointer address is returned .address of buffer.
		printf("fputs=%d\n",fputs(buff,wp)); //return a non-negative no. when successful
		//0 also if successful otherwise -1 or negative if unssuccessful 

		fclose(rp);fclose(wp);
	}
	return 0;
}
*/
/* // other approach2- to directly store a string in a file
fputs("welcome to file handling function",wp);
*/

//here we are trying to get more characers when size of aarayy itself is less
int main()
{
	FILE *rp=fopen("check.txt","r");
	FILE *wp=fopen("output1.txt","w");
	if(rp==NULL)
		printf("unsuccessfull file operation!!\n"); 
	else
	{
		printf("successfull file operation!! file starting address= %p\n",rp);	
		char buff[14];
		printf("fgets=%p\n",fgets(buff,20,rp)); //try in windows should not 
		printf("fputs=%d\n",fputs(buff,wp)); 
		fclose(rp);fclose(wp);
	}
	return 0;
}	
		