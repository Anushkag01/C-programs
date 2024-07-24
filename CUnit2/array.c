#include<stdio.h>
/*
int main(){
    int a[5]={10,20,30,40,50};
    for(int i=0;i<=5 && printf("%d\n",a[i]);i++);
    printf("Address\n");
    for(int i=0;i<=5 && printf("%p\n",a[i]);i++);
    for(int i=0;i<=5 && printf("%p\n",&a[i]);i++);
    return 0;
}
*/

// int main(){
//     int m[5]={1,2,3};
//     printf("%d\n",m[0]);
//     printf("%d\n",m[1]);
//     printf("%d\n",m[2]);
//     printf("%d\n",m[3]);
//     printf("%d\n",m[4]);
//     printf("%d\n",m[10]);//junk value for out of bound index
//     return 0;
// }

// int main(){
//     int m[5]={1,2,3,4,5},i;
//     for(i=0;i<5;i++)
//         printf("%d\n",m[i]);
// }

//second way to write 
// int main(){
//     int m[5]={1,2,3,4,5},i;
//     for(i=0;i<5 && printf("%d\n",m[i]);i++);
// }

/*
int main(){
     int m[5]={1,2,3,4,5},i;
     for(i=0;i<7 && printf("%d\n",m[i]);i++);//again out of bound so junk valuye printed 
 }

int main(){
    printf("enter 5 array elements");
    int m[5];
    for(int i=0;i<5;i++)
        scanf("%d",&m[i]);
    printf("The elements entered are\n");
    printf("*******************************");
    for(int i=0;i<5;i++)
        printf("%d\n",m[i]);
 }
 

// trying to iniatialize more than limit ---try on windows as it shld throw a junk value 
int main(){
    printf("enter 5 array elements");
    int m[4],n;
    n=6;
    for(int i=0;i<n;i++)//so limit is 4 but we declaring 6 elements ---it even accepts 
        scanf("%d",&m[i]);
    printf("The elements entered are\n");
    printf("*******************************\n");
    for(int i=0;i<n;i++)
        printf("%d\n",m[i]);//prints last 2 value junk
 }
 

//using float datatype
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    float m[n];
    printf("enter %d array elements",n);
    for(int i=0;i<n;i++)
        scanf("%f",&m[i]);
    printf("The elements entered are\n");
    printf("*******************************\n");
    for(int i=0;i<n;i++)
        printf("%f\n",m[i]);
 }

 //using scanf in for loop

 int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    char m[n];
    printf("enter %d array elements",n);
    for(int i=0;i<n && scanf("%c",&m[i]);i++);
    printf("The elements entered are\n");
    printf("*******************************\n");
    for(int i=0;i<n && printf("%c\n",m[i]);i++);
 }

//problem solved fro entering 5 characters with enter 
 int main(){
     int n;
    printf("enter the size of array - ");
    scanf("%d",&n);
    char m[n];
    printf("enter %d array elements\n",n);
    for(int i=0;i<n && scanf("%*c%c",&m[i]);i++);//using *c the enter and \n character is not read and stored as character and moves on with actual input 
    printf("The elements entered are\n");
    printf("*******************************\n");
    for(int i=0;i<n && printf("%c\n",m[i]);i++);
 }
 */
 // what happens wen %c %c used
 int main(){
     int n;
    printf("enter the size of array - ");
    scanf("%d",&n);
    char m[n];
    printf("enter %d array elements\n",n);
    for(int i=0;i<n && scanf("%*c%c",&m[i]);i++);//using *c the enter and \n character is not read and stored as character and moves on with actual input 
    printf("The elements entered are\n");
    printf("*******************************\n");
    for(int i=0;i<n && printf("%c\n",m[i]);i++);
 }
 