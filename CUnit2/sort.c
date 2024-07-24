#include<stdio.h>
/*

//ascending order sorting 
void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
void display(int a[],int n){
    printf("*********** Bubble sort **************\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);}
}
void Bubblesort(int a[],int n) //or try-void Bubblesort(int n;int a[n],int n){...}
{
    for(int i=0;i<=n-2;i++){ 
        for(int j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    Bubblesort(a,n);
    display(a,n);
    return 0;
}



//descending order

void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
void display(int a[],int n){
    printf("*********** Bubble sort **************\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);}
}
void Bubblesort(int a[],int n) 
{
    for(int i=1;i<=n;i++){ 
        for(int j=n-i;j>=0;j--){
            if(a[j]<a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    Bubblesort(a,n);
    display(a,n);
    return 0;
}
*/
//HW --apply using pointers