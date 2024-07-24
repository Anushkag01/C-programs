//given a file cars.csv, write c progrma to count the nu
#include<stdio.h>
#include<string.h>
//problem solving 1: To count the number of matches played in the year 2008

int main()
{       int cnt = 0;  
	FILE *fp=fopen("cars.csv","r");	
	//FILE *wp=fopen("output.txt","w");
	if(fp==NULL)
		printf("failure\n");
	else
	{
                //printf("PRESENT");
		char str[500];
                int cnt=0;
		while(fgets(str,500,fp)!=NULL)
		{
			
			char *Car_ID=strtok(str,",");
                        char *Brand=strtok(NULL,",");
                        char *Model=strtok(NULL,",");
                        char *Year = strtok(NULL, ",");

			if(strcmp(Year,"2020") == 0)
			{
				cnt++;
			}
		}

		printf("the number of cars sold in the year 2020 is = %d",cnt);
		//fputs("the number of matches played in the year 2008 is =",wp);
		//fprintf(wp,"%d",cnt);
	}

	return 0;
}