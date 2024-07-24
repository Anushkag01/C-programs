#include<stdio.h>
#include<string.h>
//write a program to accept two strings as well as pattern
void read(char arr[]){
    gets(arr);
}
int match(char p[],char t[]){
    int m=strlen(p),n=strlen(t);
    int j;
    for (int i=0;i<=n-m;i++){
        for(j=0;j<m && t[i+j]==p[j];j++);
        if(j==m)
            return i;
    }
    return -1;
}
int main(){
    printf("Enter an text\n");
    char text[100];
    read(text);
    printf("Enter a pattern\n");fflush(stdin);
    char pat[100];
    read(pat);
    int pos=match(pat,text);
    if(pos>=0)
        printf("pattern found in text position %d",pos);
    else 
        printf("pattern not found\n");    
    return 0;
}