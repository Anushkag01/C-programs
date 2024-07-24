#include<stdio.h>
/*
int main(){
    char c;
    c=getchar();//accepts character and stores in int type
    printf("using printf=%c\n",c);
    putchar(c);//accepts int datatype and displays appropiate char value
    return 0;

}
int main(){
    printf("%c",getchar());//without using variable i am accepting and displaying on the screen
    return 0;

}
]
int main(){
    //printf("%c",getchar());//without using variable i am accepting and displaying on the screen
    putchar(getchar());//callback function
    return 0;

}
int main(){
    char c=getc(stdin);
    putc(c,stdout);
    return 0;

}
int main(){
    //putc(getc(stdin),stdout); works in one line
    
    return 0;

}
void main(){
    putc(getc(stdin),stdout);
    return;
}
*/

 int main ()
{
char c;
printf("Enter character: ");
c = getc(stdin); printf("Character entered: "); putc(c, stdout);
return 0; }