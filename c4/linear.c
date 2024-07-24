#include<stdio.h>

int main()
{
    FILE *rp=fopen("data.txt","r");
    
    int key;

    if(rp==NULL)
		printf("unsuccessfull!!");
	else
	{
        int a[20];
        for(int i=0;i<6;i++)
        {
          fscanf(rp,"%d",&a[i]);
        }
		fclose(rp);
        printf("accepted array elements are:\n");
        for(int i=0;i<6;i++){
            printf("%d\t",a[i]);
        }
        printf("\n Linear search \n");
        printf("Enter the element you want to serach :");
        scanf("%d",&key);
        int flag=0;
        for (int i=0;i<6;i++)
        {
            if(a[i]==key)
            {
                printf("key found");
                flag=1;
                break;
            }    
        }
        if (flag==0)
            printf("key not found");

    }
	return 0;
}
