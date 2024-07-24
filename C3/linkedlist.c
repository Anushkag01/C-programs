#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int ele;
	struct node *link;
}n;

n  *head=NULL;

void ins_frnt_node()
{
	n *new=malloc(sizeof(n));
	printf("enter value for the node\n");scanf("%d",&new->ele);
	if (head==NULL)
	{
		head=new;
		new->link=NULL;
		
	}
	new->link=head;
	head=new;
	
}

void del_frnt_node()
{
	if(head==NULL)
	{
		printf("linked list is empty!!\n");
		
	}
	else
	{
		printf("node with element %d deleted\n",head->ele);
		head=head->link;
		
	}
}
void display_nodes()
{
	if(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4==NULL)
	{
		printf("nothing left to display!!linked list is empty!!\n");
		return;
	}
	printf("elements of linked list are\n");
    n *p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->ele);
		p=p->link;
	}
}

void delete_ll()
{
	printf("entire linked list is deleted\n");
	head=NULL; //or free(head); head=NULL;
	
}	
int main()
{
	
	for(;;)
	{
		printf("\n 1: insert front node\n 2:delete front node\n 3:display\n 4:delete linked list\n 5:exit\n");
		printf("enter your choice\n");int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: ins_frnt_node;break;
			case 2: del_frnt_node;break;
			case 3: display_nodes;break;
			case 4:delete_ll;break;
			case 5: exit(0);
			default: printf("enter a proper choice\n");
		}
	}
	return 0;
}