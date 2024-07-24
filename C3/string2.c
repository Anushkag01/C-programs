#include<stdio.h>
#include<string.h>
#include<ctype.h>
// you can accept using------- scanf("%[^\n]s",arrayname) no & rquired here
/*
int main(){
    char s[20];
    printf("enter string");
    scanf("%s",s); //here blank character is read as terminator character so 
    printf("%s",s);
    return 0;
}
// to read with blank character in between
int main(){
    char s[20];
    printf("enter string");
    scanf("%[^\n]s",s);
    printf("%s",s);
    return 0;
}

int main(){
    char s[20];
    printf("enter string ");
    gets(s);
    puts(s);
    printf("length=%d\n",strlen(s));
    printf("----length w/o using built-in function\n");
    int cnt=0;
    for (int i=0;s[i]!='\0';i++)
    {
        cnt++;
    }
    printf("length=%d\n",cnt);
    return 0;
}


// another way to count without using built in function in single line for loop
int main(){
    char s[20];
    printf("enter string ");
    gets(s);
    int cnt=0;
    for (int i=0;s[i]!='\0';i++,cnt++);
    printf("length=%d\n",cnt);
    return 0;
}


int main(){
    char s[20],s2[20],s3[20];
    printf("enter string1 :");
    gets(s);
    puts(s);
    strcpy(s2,s);
    printf("string s2=%s\n",s2);
    printf("---cpy w/o using strcpy() ------\n");
    int i;
    for(i=0;s[i]!='\0';i++){
        s3[i]=s[i];
    }
    s3[i]='\0';
    printf("string s3=%s\n",s3);
    return 0;
}


//another way to do it ---i++ after as otherwise i++ will done first and then statemnt executed
int main(){
    char s[20],s2[20],s3[20];
    printf("enter string1 :");
    gets(s);
    int i;
    for(i=0;s[i]!='\0';s3[i]=s[i],i++);
    s3[i]='\0';
    printf("string s3=%s\n",s3);
    return 0;
}


// to find a character
int main(){
    char s[20],s2[20],s3[20];
    printf("enter string1 :");
    gets(s);
    char key;
    printf("enter the chacracter you wanna find\n");
    scanf("%c",&key);
    int flag=0;
    for(int i=0;s[i]!=0;i++){
        if(s[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("%c found in %s",key,s);
    else
        printf("%c not found in %s",key,s);
    return 0;
}

//without flag  imppppp

int main(){
    char s[20],s2[20],s3[20];
    printf("enter string1 :");
    gets(s);
    char key;
    printf("enter the chacracter you wanna find\n");
    scanf("%c",&key);
    int flag=0;
    for(int i=0;s[i]!=0;i++){
        if(s[i]==key)
        {
            printf("%c found in %s",key,s);
            return 0;
        }
    }
    printf("%c not found in %s",key,s);
}

//to compare two strings with case
int main(){
    char s[20],s2[20];
    printf("enter string1 :");
    gets(s);
    printf("enter string2 :");
    gets(s2);
    if (strlen(s)!=strlen(s2))
        printf("%s not equal to %s",s,s2);
    else
    {    
    for(int i=0;s[i]!='\0',s2[i]!='\0';i++){
        if(s[i]!=s2[i])
        {
            printf("%s not equal to %s",s,s2);
            return 0;
        }
    }
    printf("%s equal to %s",s,s2);
    }
}

//without case sensitivity comparision
int main(){
    char s[20],s2[20];
    printf("enter string1 :");
    gets(s);
    printf("enter string2 :");
    gets(s2);
    printf("%s %s\n",s,s2);
    if (strlen(s)!=strlen(s2))
        printf("%s not equal to %s",s,s2);
    else
    { 
    for(int i=0;s[i]!='\0';i++){
        if(toupper(s[i])!=toupper(s2[i]))
        {
            printf("%s not equal to %s",s,s2);
            return 0;
        }
    }
    printf("%s equal to %s",s,s2);
    }
}
*/

