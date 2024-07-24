// pass by value 

//#include<stdio.h>
/*
int sum(int a ,int b);
int main(){
    int a=10,b=20; // a and b are local variable in main fn
    int res=sum(a,b);
    printf("sum=%d\n",res);
    return 0;
}
int sum(int a ,int b){ //here a and b are local fn to sum fn
    return a+b;
}


// no return type but parameters

void sum(int a ,int b);
int main(){
    int a=10,b=20;
    sum(a,b);
    //int res=sum(a,b);error as void doesnt return anything
    return 0;
}
void sum(int a ,int b){
    printf("sum=%d\n",a+b);
}
//no error thrown but if we receive from other datatype then it will throw an error
int sum(int a ,int b);
int main(){
    int a=10,b=20;
    sum(a,b);
    return 0;
}
int sum(int a ,int b){
    return a+b;
}

//if we dont require another variable for storing 
int sum(int a ,int b);
int main(){
    int a=10,b=20;
    printf("sum=%d\n",sum(a,b));
    return 0;
}
int sum(int a ,int b){
    return a+b;
}
// we can also call the user defined fn bfr main fn --here we dont need to deine fn prototype then

// swap two variables using user defined without returning anything
// using XOR function 
void swap(int a ,int b);
int main(){
    int a=10,b=20;
    swap(a,b);
    printf("control came back to main fn\n");
    printf("a=%d b=%d\n",a,b); //here value updation after doesnt take place
    return 0;
}
void swap(int a ,int b){
    printf("control came back to called function\n");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swapping in called function\n");
    printf("a=%d b=%d\n",a,b);
    return;  // very important as it works as return is still empty here
}


// for global fn decalration in pas by value fn
int a=10,b=20; //global fn
void swap(int a ,int b);
int main(){
    //int a=10,b=20;
    swap(a,b);
    printf("control came back to main fn\n");
    printf("a=%d b=%d\n",a,b);
    return 0;
}
void swap(int a ,int b){
    printf("control came back to called function\n");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swapping in called function\n");
    printf("a=%d b=%d\n",a,b);
    return;  // very important as it works as return is still empty here
}

//without passing formal paramters
int a=10,b=20; //global fn
void swap();
int main(){
    swap();
    printf("control came back to main fn\n");
    printf("a=%d b=%d\n",a,b); //here the values get updated here as well
    return 0;
}
void swap(){
    printf("control came back to called function\n");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swapping in called function\n");
    printf("a=%d b=%d\n",a,b);
    return;  // very important as it works as return is still empty here
}
*/


#include<stdio.h>
//pass by reference 
/*
//using pointers 
//swapping with local variable 
void swap();
int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("control came back to main fn\n");
    printf("a=%d b=%d\n",a,b); //here the values get updated here as well and doesnt remain same as pointers refer the key adreess so 
                               // here also changes happen 
                               // to not see any changes we use local variables in pass by value fn
    return 0;
}
void swap(int *p,int *q){
    printf("control came back to called function\n");
    // 
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("swapping in called function\n");
    printf("a=%d b=%d\n",*p,*q);
    return;  // very important as it works as return is still empty here
}

*/

/*
// using arrrays 
//for reading we need size of array 
//for printing no need
//array become pointer during runtime;

void read(int a[],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);}
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);}
}
void update(int [],int,int);
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    printf("display the array elements\n");
    display(a,n);
    update(a,n,2);
    printf("display the updated array elements\n");
    display(a,n);
    return 0;
}
void update(int a[],int n,int pos){
    a[pos]=999;
}

*/
//second way of writing the read fn
//using a[n] as we need to declare the n using in array so we declare once bfr and then once after
//check and run
void read(int n;int a[n],int n){
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);}
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);}
}
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elemnts\n");
    int a[n];
    read(a,n);
    printf("display the array elements\n");
    display(a,n);
    return 0;
}

// accept two arrays a nd  b 2D array
//write a fn to add ,subtact nd multiply two matrix using fn

