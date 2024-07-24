#include<stdio.h>
#include<string.h>
/*
int main(){
    char c1[]={'a','t','m','a','\0'};
    char c2[]="trisha";
    printf("c1=%s",c1);
    printf("\nc2=%s",c2);

    char c3[6]="amazon"; //junk value added at end as partial initialization where \0 is not given space 
    printf(" \nc3=%s",c3);
    char c4[7]="amazon";
    printf("\nc4=%s",c4);
    char c5[10]="alibaba";
    printf("\nc5=%s",c5);
    printf("%s",c4);

    char c6[15]={'s','e','c','t','i','o','n'};
    printf("\nc6=%s",c6);
     

     char c7[]={'a','t','m','a','\0','t','r','i','s','h','a','\0'};
      printf("\n%s",c1);
      char c8[]="atma\\0";
      printf("\n%s",c8);
      char c9[]="atma\0trisha";
      printf("\n%s",c9);

     return 0;
    }

int main(){
    char c[]="atma",*cp=c;
    printf("using array=%s",c);
    printf("\n using character pointer =%s",cp);
    //printf("\n using character pointer =%s",*cp); //abruptly terminates
    return 0;
}
//storing without char array but a pointer 
int main(){
    char c[5]="atma";
    printf("c=%s\n",c);
    char *p="pes";
    c[1]="a";
    printf("c=%c",*p++); //if using char c the * is must but %s gives us direcrt priveleage to print the whole thing without any for loop 
    printf("%c",*p++);
    printf("%c",*p++); 
    //now see in windoes if scpace is given in output pes a 
    printf("%c",*p++); 
    printf("%c",*p); 
    //printf("c=%s",c);//should change truy in windows
}
int main(){
    char c[]="pes university";
    printf("length=%d\n",strlen(c)); // \0 not counted as charcter here 
    char c1[]="pes university\\0";
    printf("length=%d\n",strlen(c1)); //here \0 is counted
    char c2[]="pes university\0";
    printf("length=%d\n",strlen(c2));
    return 0;
}

int main(){
    char c[]="pes university",b[10];
    strcpy(b,c);
    printf("b=%s",b); //pes shld be output

    return 0;
}

int main(){
    char c[]="pes",b[10]="university";
    strcpy(b,c); //try (strcpy(c,b))
    printf("b=%s",b);
    
    return 0;
}
//try what happens
int main(){
    char c[4],b[15]="university";
    strcpy(c,b);
    printf("c=%s",c);
    return 0;
}

int main(){
    char c[]="pes",b[15]="university"; // also try " univrsity" where space in begining
    strcat(c,b);
    printf("%s",c);
    return 0;
}
//check :( shld be either -1 , 1 or 0
int main(){
    char a[]="atma",b[]="ATMA"; 
    printf("result =%d",strcmp(a,b));
    printf("result =%d",strcmp(b,a));
    printf("result =%d",strcmpi(a,b)); //it doesnt see case sensitivity
}
*/

int main(){
    char a[]="atma",b[]="ATMA"; 
    printf("result =%d",strchr(a,'b'));//means no b charcater in a 
    printf("result =%d",strchr(a,'a'));// a is present so gives the address location of a 
     printf("result =%d",strchr(a,'m'));// m s presnt and passess the address locayion of m
}

