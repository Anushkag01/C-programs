#include<stdio.h>
typedef struct 
{
    int bid;
    char auth_n[20];
    float price;
}b;

int main(){
    int n;
    printf("Enter the sruct size\n");
    scanf("%d",&n);
    b bs[n];
    for(int i=0;i<n;i++)
    {
        printf("enter book %d details \n",i+1);
        printf("book id=");scanf("%d",&bs[i].bid);fflush(stdin);
        printf(" price=");scanf("%f",&bs[i].price);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nbook %d details are\n",i+1);
        printf("book id= %d\n",bs[i].bid);fflush(stdin);
        printf("Author name= %s \n",bs[i].auth_n);
        printf("price= %f\n",bs[i].price);
    }
    return 0;
}


// using pointers 
