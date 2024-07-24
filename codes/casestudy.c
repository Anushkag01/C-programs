#include<stdio.h>
#include<stdlib.h>
int main(){

    int op;
    for(;;)
    {
        printf("Enter 1 for ticket booking, 2 for cancelation ,3 for exit\n");
        scanf("%d",&op);
        switch(op){
            case 1:printf("Tickets booked\n");break;//place another if or switch if needede
            case 2:printf("Tickets cancelled\n");break;
            case 3:exit(0);
            default:printf("invalid input\n");
        }
    }
}