#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
/*
READ AND WRITE STRINGS USING USER DEFINED FUNCTIONS --
1)PASS BY VALUE 
2) PASS BY REFERNECE

void Hello(char c[]){
    printf("%s\n",c);
}
int main(){
    printf("Enter a string :");
    char c1[]={};
    gets(c1);
    Hello(c1);
    return 0;
}

2)


void Hello(char *p){
    printf("%s\n",p);
}
int main(){
    printf("Enter a string :");
    char c1[]={};
    gets(c1);
    Hello(c1);
    fflush(stdin);//gotta write this otherwise it wont be able to flush the already entered string and buffer wont be free
    printf("Enter a string :");
    gets(c1);
    Hello(c1);
    return 0;
}


// USE POINTERS TO PRINT EVERY CHARACTER OF STRING --USE FOR LOOP
//A[I]!='\0'
//p[i]=!='\0'
//%s no *p but %c *p * requred
int main(){
    printf("Enter a string :");
    char c1[]={};
    gets(c1);
    char *p=&c1[0];
    for(int i=0;i<strlen(c1);i++,p++){
        printf("%c\n",*p);
    }
    return 0;
}

void read(char *p){
    printf("enter a  string \n");
    scanf("%[^\n]s",p);
}
void write(char *p){
    printf("The entered string is\n");
    printf("%s\n",p);
}
int main(){
    char s[100];
    read(s);
    write(s);
    char *p=s;
    printf("the enetered characters are\n");
    for(;*p;p++){
        printf("%c\n",*p);
    }
}

// Write a function  to find the position of first occurence 
//of First occurence of the input charcter in a given string

int main(){
    printf("Enter a string :");
    char s[]={},c;
    gets(s);
    printf("Enter the character you wanna find \n");
    scanf("%c",&c);
    //using for loop
    for (int i=0;i<strlen(s);i++){
        if(s[i]==c)
        {
            printf("The position of %c in %s is %d:",c,s,i);
            break;
        }
    }
    return 0;
}

// ANOTHER WAY in another fn
int i;
for(i=0;s[i]!='\0' && s[i]!=c;i++);
return i;

//using pointers
for(i=o;*p && *p!=c;i++);
return i;


//2)PROGRAM TO FIND THE COUNT OF GIVEN CHARACTERS IN A GIVEN STRING 
//3)GIVEN A STRING .CREATE A TEXT WITH ONLY ALPHABETS
//4)GIVEN A STRING .DISPLAY ALL THE DIGITS  AND SQAURE ALL THOSE DIGITS IN THAT STRING.

//2)
int main(){
    printf("Enter a string :");
    char s[]={};
    gets(s);
    
    char *p=s;
    //using for loop
    int i;
    while(*p){
        int count=0;
        for (i=0;i<=strlen(s);i++)
        {
            if(*p==s[i]){
                count++;
            }
        }
        printf("The count of %c in %s is %d:\n",*p,s,count);
        p++;

    }
    return 0;
}
//3)

int main(){
    printf("Enter a string :");
    char s[1000];
    gets(s);
    for (int i=0;i<strlen(s);i++){
        if( (s[i]>='A' && s[i]<'Z') || (s[i]>='a' && s[i]<'z'))
            printf("%c",s[i]);

    }

}
//maam sent codes


void read(char s[])
{
	printf("enter the string\n");
	scanf("%[^\n]s",s);
}

void only_text(char s[])
{
	char text[100];int j=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' &&s[i]<='z'))
			text[j++]=s[i];
	}
	text[j]='\0';
	printf("text=\"%s\"",text);
}
int main()
{
	char s[40],ch;
	read(s);
	only_text(s);
	return 0;
}
//
// 4) GIVEN A STRING .DISPLAY ALL THE DIGITS
int main(){
    printf("Enter a string :");
    char s[1000];
    gets(s);
    int num;
    for (int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
        }
    }
    printf("%d\n",num);
}
*/

// 5) GIVEN A STRING .DISPLAY ALL THE DIGITS AND SQUARE OF ALL THOSE DIGITS
int main(){
    printf("Enter a string :");
    char s[1000];
    gets(s);
    for (int i=0;i<strlen(s);i++){
       int num=0;
        if(s[i]>='0' && s[i]<='9'){
            num=(s[i]-'0');
            printf("%d\n",(int)pow(num,2));
        }
    }
}

