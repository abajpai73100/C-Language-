#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node create(struct node*);
struct node reverse(struct node*);
void display(struct node*);
int main()
{
	struct node *start=NULL;
	start=create(start);
	display(start);
	reverse(start);
	display(start);
	return 0;
}
struct node *create(struct node *start)
{
	int num,data,n;
	struct node *newnode,*tmp;
	printf("enter number of nodes\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node*));
		if(newnode==NULL)
		{
			printf("insufficient space\n");
			exit(0);
		}
		else
		{
			printf("enter data\n");
			scanf("%d",&num);
			newnode->data=num;
			newnode->next=NULL;
			if(start=NULL)
			{
				start=newnode;
			}
			else
			{
				tmp=start;
				while(tmp->next!=NULL)
				{
					tmp=tmp->next;
				}
				tmp->next=newnode;
			}
		}
	}
	return start;
}
void display(struct node *start)
{
	struct node *tmp;
	tmp=start;
	while(tmp!=NULL)
	{
		printf("%d->",tmp->data);
		tmp=tmp->next;
	}
	printf("NULL\n");
}
struct node reverse(struct node *start)
{
	struct node *tmp,*tmp1,*tmp2;
	tmp=start->next;
	tmp1=start;
	tmp2=start;
	while(tmp->next!=NULL)
	{
		tmp1=tmp->next;
		tmp->next=tmp2;
		
