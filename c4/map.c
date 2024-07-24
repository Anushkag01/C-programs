#include<stdio.h>
int n;

void map(void(*fp)(int *),int a[])
{
    for(int i=0;i<n;i++)
    {
        fp(&a[i]);
    }
}

void add(int *ele){
    *ele+=1; 
}
int main(){
    printf("Enter the array size \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter th array element \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    map(add,a);
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}