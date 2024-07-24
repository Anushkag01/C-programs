#include <stdio.h>

void read(int n;int(*)[n],int,int);
void display(int n;int(*)[n],int,int);
//void add(int n;int(*a)[n],int(*b)[n],int m,int n,int(*c)[n]);
//void multiply(int n1;int n2;int(*a)[n1],int(*b)[n2],int m1,int n1,int n2,int(*c)[n2]);

int main(){
int a[100][100];
int b[100][100];
int c[100][100];

int n1,m1,n2,m2;

printf("enter order of first matrix");
scanf("%d %d",m1,n1);
printf("enter the elemnts of matrix");
read(a,m1,n1);

printf("enter order of second matrix");
scanf("%d %d",m2,n2);
printf("enter the elemnts of matrix");
read(a,m2,n2);

//display
printf("elements of first matrix is");
display(a,m1,n1);
printf("elements of second matrix is");
display(a,m2,n2);
/*
//addition
if(m1==m2 && n1==n2){
printf("the addition of matrix is");
add(a[][],b[][],m1,n1,c[][]);
display(c[][],m1,n1);
}
else{
printf("not compatible");
}

//multiplication
if (n1==m2){
printf("multiplication of two matrix is ");
multiply(a[][n1],b[][n2],m1,n1,n2,c[][n2]);
display(c[][n2]);
}
*/
return 0;
}

void read(int n;int(*a)[n],int m1,int n1){
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++){
scanf("%d",a[i][j]);
}
}

}
void display(int n;int(*a)[n],int m1,int n1){
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++){
printf("%d\n",a[i][j]);
}
}

}
