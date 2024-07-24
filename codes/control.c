#include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if (n>=40){
//         printf("PASS");
//     }
//     if (n<40){
//         printf("Fail");
//     }
//     return 0;
// }
/*
int main(){
    int m;
    scanf("%d",&m);
    if (m>=90 && m<101){
        printf("Grade-S\n");
    }else if (m>=80 && m<90){
        printf("Grade-A\n");
    }else if (m>=70 && m<=79){
        printf("Grade-B\n");
    }else if (m>=60 && m<=69){
        printf("Grade-C\n");
    }else if (m>=50 && m<=59){
        printf("Grade-D\n");
    }else if (m>=40 && m<=49){
        printf("Grade-E\n");
    }else if (m<=39){
        printf("Grade-F");
    }
    else; // this statement like this also works 
    return 0;
}
*/
// greater in 3 numbers
//using simple if
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c){
        printf("%d is greater",a);
    }
    if (b>=a && b>=c){
        printf("%d is greater",b);
    }
    if (c>=b && c>=a){
        printf("%d is greater",c);
    }
}

