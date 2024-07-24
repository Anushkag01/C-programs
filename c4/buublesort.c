#include<stdio.h>

typedef struct bubblesort
{
    int rollno;
    char name[20];
}s;

swap(s **x,s **y)
{
    s *temp=*x;
    *x=*y;
    *y=temp;
}
void buuble_sort(int (*fp)(s*,s*),int n,s *asp[n])
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-2;j++)
        {
            if(fp(asp[j],asp[j+1]))
            {
                swap(&asp[j],&asp[j+1]);
            }
        }
    }
}


int bs_roll_no(s *x,s *y)
{
    return x->rollno > y->rollno;
}
int bs_name(s *x,s *y)
{
    return strcmp(x->name,y->name);
}

int main(){
    printf("Enter the array size \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return 0;
}
