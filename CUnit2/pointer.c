#include<stdio.h>
/*
int main(){
    int var=10,*p=&var;
    printf("value of var using var=%d\n",var);
    printf("address of var=%p\n",p);
    var+=5;//changing variable value using variable itself
    printf("var=%d\n",var);
    // to change variable vlaue through pointer
    *p=*p+5; //var=*p+5; same result 
    //*p+5; cannot do this 
    printf("var=%d\n",var);
    return 0;
}

//to increament all values using pointer
int main(){
     int a[5]={10,20,30,40,50},*p=&a[0];

     for(int i=0;i<5;i++,p++){
        *p=*p+10;
        
     }
     for(int i=0;i<5 && printf("value of a at index %d =%d\n",i,a[i]);i++);
     return 0;

}

//  another way of doing the same thing above intersting code do it for isa
int main(){
     int a[5]={10,20,30,40,50},*p=&a[0];

     for(int i=0;i<5;i++,p++){
        a[i]=*p+10;//*(p+i) 
        
     }
     for(int i=0;i<5 && printf("value of a at index %d =%d\n",i,a[i]);i++);
     return 0;
}
//important for isa do this 
int main(){
     int a[5]={10,20,30,40,50},*p=&a[0];

     for(int i=0;i<5;i++){
        a[i]=*p+10;//0th index incremented to 20--now p keeps pointing to 20 only so rest output gonna be 30 only
        
     }
     for(int i=0;i<5 && printf("value of a at index %d =%d\n",i,a[i]);i++);
     return 0;
}
//use of (*p)++

int main(){
     int a[5]={10,20,30,40,50},*p=&a[0];

     for(int i=0;i<5;i++){
        (*p)++;
        
     }
     for(int i=0;i<5 && printf("value of a at index %d =%d\n",i,a[i]);i++);
}

//we use *temp here

// swap two numbers using pointers
//p pointer at a and q pointer at b
//without disturbing orignal value meaning a shld be 10 always and b=20
int main(){
    int a=10,b=20,*p=&a,*q=&b;
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The value of *p=%d\n",*p);
    printf("The value of *q=%d\n",*q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    //p=&b,q=&a; also works --just in one line
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The value of *p=%d\n",*p);
    printf("The value of *q=%d\n",*q);
    return 0;
}


//just using variable swap

// swap two numbers using pointers
//p pointer at a and q pointer at b
//with disturbing orignal value meaning a shld be 20 always and b=10
int main(){
    int a=10,b=20,*p=&a,*q=&b;
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The value of *p=%d\n",*p);
    printf("The value of *q=%d\n",*q);
    int swap=*p;
    *p=*q;
    *q=swap;

    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The value of *p=%d\n",*p);
    printf("The value of *q=%d\n",*q);
    return 0;
}
*/
// int main(){
// int *p; // p can point to anything where integer is stored. int* is the type. Not just int. 
// int a = 100;
// p=&a;
// printf("a is %d and *p is %d\n", a,*p);
// printf("%p",p);
// }

int main() {
    int arr[]={10,103,12,23,23,11,22,12,32,11,22,11},*p=&arr[0];
    for (int i=0;i<12;i++)
      printf("%p\n",p++);
    return 0;
}