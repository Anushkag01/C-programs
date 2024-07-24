#include<stdio.h>
#include<stdlib.h>

/*
int main(){
    int n;
    printf("Enter the array size \n");
    scanf("%d",&n);
    int *p=malloc(n*sizeof(int));
    if(p==NULL)
        printf("unsuccessfull alocation\n");
    else
        printf("succsesfull memory allocation\n");
        printf("The array elemnsts are\n"); //to check the junk values stored in malloc bfr allocation of values
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   
        printf("Starting address =%p\n",p);
        printf("enter the array elements\n");
        for (int i=0;i<n;i++)
           scanf("%d",&p[i]);
        printf("The array elemnsts are\n");
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   


    }

//calloc memory allocation
int main(){
    int n;
    printf("Enter the array size \n");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    if(p==NULL)
        printf("unsuccessfull alocation\n");
    else
    {
        printf("succsesfull memory allocation\n");
        printf("The array elemnsts are\n"); //to check the junk values stored in malloc bfr allocation of values
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   
        printf("Starting address =%p\n",p);
        printf("enter the array elements\n");
        for (int i=0;i<n;i++)
           scanf("%d",&p[i]);
        printf("The array elemnsts are\n");
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   

    }
    return 0;
    }
 */
//de-alloc
//realloc

int main()
{
    int n;
    printf("Enter the array size \n");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    if(p==NULL)
        printf("unsuccessfull alocation\n");
    else
    {
        printf("succsesfull memory allocation\n");
        printf("The array elemnsts are\n"); //to check the junk values stored in malloc bfr allocation of values
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   
        printf("Starting address =%p\n",p);
        printf("enter the array elements\n");
        for (int i=0;i<n;i++)
            scanf("%d",&p[i]);
        printf("The array elemnsts are\n");
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   
   

    printf("Enter the new additional size\n");int m;
    scanf("%d",&m);
    p=realloc(p,m+n);
    if(p==NULL)
        printf("Unsuccessfull memory allocation\n");
    else
    {
        printf("successfull memory alloaction\n");
        printf("Starting address =%p\n",p);
        printf("The array elemnsts are\n");
        for (int i=0;i<m+n;i++)
            printf("%d\n",p[i]); 
        printf("enter the array elements\n");
        for (int i=n;i<m+n;i++)
            scanf("%d",&p[i]);
        printf("The array elemnsts are\n");
        for (int i=0;i<n;i++)
            printf("%d\n",p[i]);   
    }
    free(p);
    printf("array elemensts after free(p)\n");
    for(int i=0;i<n+m;i++)
        printf("%d\n",p[i]);
        p=NULL;
        printf("The array elements after p=NULL \n");
        for(int i =0;i<n+m;i++)
            printf("%d\n",p[i]);
        
}
return 0;
}
