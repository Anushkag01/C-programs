#include<stdio.h>
/*
void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}

int bs(int a[],int l,int h,int key){
    if (l>h)
        return -1;
    else{ //you can avoid else at this part because en l>h we have return statement so it goes only once  in that loop
        int mid=(l+h)/2;
        if (key==a[mid])
            return mid;
        else if (key>a[mid])
            return bs(a,mid+1,h,key);
        else
            return(a,l,mid-1,key);     
    }    
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
    printf("binary search\n");
    int res=bs(a,0,n-1,key);
    if (res==-1) 
        printf("key not found\n");
    else
        printf("the key elements is found index  position %d \n",res);    
    return 0;
}
*/
//linear search using recursion
void read(int b[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&b[i]);}
}
int ls(int c[],int i,int n,int keys){
    if (i==n)
        return -1;

    if(c[i]==keys){
        return i;
        }
    else{
        return ls(c,i+1,n,keys);
    }
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
    int res=ls(a,0,n,key);
    if (res==-1)
        printf("key not found\n");
    else{
        
        printf("the key elements is found in position %d \n",res+1);  
    }
return 0;
}