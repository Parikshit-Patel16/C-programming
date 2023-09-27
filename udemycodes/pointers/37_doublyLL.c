#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void main()
{ 
	struct node *head,*temp,*start;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	head->prev=NULL;
	head->data=0;
	start=head;
	int i;
	for(i=1;i<=3;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=i;
		temp->next=NULL;
		temp->prev=head;
		temp->prev->next=temp;
		head=temp;
	}
	printf("From End to start\n");
	while(head!=NULL)
	{
		printf("%d-",head->data);
		head=head->prev;
	}
	printf("\nFrom start to end\n");
	temp=start;
	while(temp!=NULL)
	{
		printf("%d-",temp->data);
		temp=temp->next;
	}
}
