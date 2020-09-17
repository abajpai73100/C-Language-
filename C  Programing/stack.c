#include<stdio.h>
int main()
{
	int n,ch;
	printf("enter number of stacks you want to create\n");
	scanf("%d",&n);
	int stack[n],top=-1;
	do
	{
		printf("enter 1 to push\n enter 2 to pop\n enter 3 to display\n enter 4 to exit\n");
		scanf("%d",ch);
		switch(ch)
		{
			case 1:{
			push();
			break;}
			case 2:{
			pop();
			break;}
			case 3:{
			display();
			break;}
			case 4:{
			printf("exit\n");
			break;}
			default:printf("invalid choice\n");
		}
	}
	while(ch!=4);
return 0;
}
void push()
{
	if(top==n-1)
	{
		printf("STACK OVERFLOW\n");
	}
	else
	{
		int val;
		printf("enter data:");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		printf("the popped value is %d",stack[top];
		top--;
	}
}
void display()
{
	for(int i=top;i>0;i--)
	{
		printf("%d:\n",stack[i]);
	}
}
