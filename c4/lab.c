#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int info;
struct node *next;
}NODE;
NODE* insertFront(NODE* head,int ele);
void display(NODE *head);
NODE* deleteFront(NODE* head,int *pele);
NODE* freeList(NODE* head);
int main()
{
NODE *head=NULL;
int choice;
int ele;
do
{
printf("1.InsertFront 2.Display 3.DeleteFront\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter an integer\n");
       scanf("%d",&ele);
       head=insertFront(head,ele);
       break;
case 2: display(head);
         break;
case 3: if(head!=NULL)
{
    head=deleteFront(head,&ele);
    printf("Deleted element is %d\n",ele);  
    }
else
        printf("List is already empty\n");
        break;
        }
}while(choice<4);
head=freeList(head);
}
NODE *createNode(int ele)
{
NODE* newNode=malloc(sizeof(struct node));
//We assume memory is always allocated to the newnode and
//hence not checking for newNode==NULL
newNode->info=ele;
newNode->next=NULL;
return newNode;
}
NODE* insertFront(NODE* head,int ele)
{
NODE* newNode=createNode(ele);
newNode->next=head;
head=newNode;
return head;
}
void display(NODE *head)
{
if(head==NULL)
printf("Empty List\n");
else
{
NODE *p=head;
while(p!=NULL)
{
printf("%d ",p->info);
p=p->next;
}
}
}
NODE* deleteFront(NODE* head,int *pele)
{
NODE *p=head;
*pele=head->info;
head=head->next;
free(p);
return head;
}
NODE* freeList(NODE* head)
{
NODE *p=head;
while(head!=NULL)
{
head=head->next;
// printf("Freeing %d\n",p->info);
free(p);
p=head;
}
return head;
}      