#include<stdio.h>
/*int fscanf(file_ptr,const char *format,address);
success: no.of values read
failure: -1  which is EOF
*/

/*int fprintf(file_ptr, const char *format,arguments);
success: no.of. characters written
failure:EOF
*/

//a simple program to read from one file and write into another file using fscanf & fprintf
int main()
{

//FILE *rfp=fopen("C:/c program files/Unit-4/file_handlers/fscanf_fprintf/check.txt","r");
    FILE *rfp=fopen("a2.txt","r");
	FILE *wfp=fopen("output.txt","w");
	if(rfp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",rfp);
	else
	{
		printf("success!! file is opened! address=%p\n",rfp);
		char ch;
		while(fscanf(stdin,"%c",&ch)!=EOF) //here while(fscanf(stdin,"%c",&ch)!=EOF) ---we can write here
		//we can see if write and gets copied in o/t.txt p--check it out
		 
		{
			//fprintf(wfp,"%c",ch); // here output.txt created and conetnst copied
            fprintf(stdout,"%c",ch); //here terminal mei print hota hain
		}
		fclose(rfp);
		fclose(wfp);
		//not visible in terminal output here but output.txt is created :) and conents copied ..yaaay!

	}
	return 0;
}
/* //other approach-1
fscanf(rfp,"%c",&ch);
while(!feof(rfp))  //feof(rfp)!=-1 or feof(rfp)!=EOF does not work, goes for infinite execution
		{
			fprintf(wfp,"%c",ch);
			fscanf(rfp,"%c",&ch);
		}
*/

