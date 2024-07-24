#include<stdio.h>
/*
//method 1-linear search

void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
void ls(int c[],int n,int keys){
    for(int i=0;i<n;i++){
        if(c[i]==keys){
            printf("the key elements is found in position %d \n",i+1);
            return;
        }
    }
    printf("key element not found\n");//only can write wen return is written in previous loop
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    int key;
    printf("enter the key element to be found\n");
    scanf("%d",&key);
    ls(a,n,key);
    return 0;
}

//method 2 -linear search

void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
int ls(int c[],int n,int keys){
    for(int i=0;i<n;i++){
        if(c[i]==keys){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    int key;
    printf("enter the key element to be found\n");
    scanf("%d",&key);
    int res=ls(a,n,key);
    if (res==-1)
        printf("key not found\n");
    else
        printf("the key elements is found in position %d \n",res);    
    return 0;
}

//HW
//for multiple occurances show the key element
//keep showing its position


//binary search --shld always be done in sorted order only
void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
void ls(int c[],int n,int keys){
    for(int i=0;i<n;i++){
        if(c[i]==keys){
            printf("the key elements is found in position %d \n",i+1);
            return;
        }
    }
    printf("key element not found\n");//only can write wen return is written in previous loop
}

int bs(int a[],int n,int key){
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if (key==a[mid])
            return mid;
        else if (key>a[mid])
            l=mid+1;
        else
            h=mid-1;      
    }
    return -1;
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    int key;
    printf("enter the key element to be found\n");
    scanf("%d",&key);
    printf("linear search\n");
    ls(a,n,key);
    printf("binary search\n");
    int res=bs(a,n,key);
    if (res==-1) 
        printf("key not found\n");
    else
        printf("the key elements is found index  position %d \n",res);    
    return 0;
}

 // in main function we can also write the if conditions as 
1-
if(res!=-1)
    printf("the key elements is found index  position %d \n",res);  
else
    printf("key not found\n");
2-
if (res==-1) 
        printf("key not found\n");
    else
        printf("the key elements is found index  position %d \n",res);    
    return 0;

3-
if(res>=0)
    printf("the key elements is found index  position %d \n",res);  
else
    printf("key not found\n");

*/

