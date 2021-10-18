#include<stdio.h>
#include<malloc.h>
struct stack{
	int value;
	struct stack *next;
};
struct stack *push(struct stack *top,int val);
struct stack *pop(struct stack *top);
struct stack *display(struct stack *top);
int main()
{
	struct stack *top=NULL;
	int n;
	do{
		printf(" 1 for push\n 2 for pop\n 3 for display\n");
		scanf("%d",&n);
		switch(n)
		{
		
		case 1:{
			int val;
			scanf("%d",&val);
			top=push(top,val);
			break;
		}
		case 2:{
			pop(top);
			break;
		}
		case 3:{
			display(top);
			printf("\n");
			break;
		}
		
		}
		printf("\n");
	}while(n<=3);
	return 0;
}
struct stack *push(struct stack *top,int val)
{
	struct stack *ptr;
	ptr=(struct stack*)malloc(sizeof(struct stack));
	ptr -> value=val;
	if(top==NULL)
	{
		ptr->next=top;
		top=ptr;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
	return top;
	
}
struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(ptr==NULL)
	{
		printf("stack is empty");
	}
	else
	{
	ptr=top->next;
	top=ptr;
	}
}
struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("stack is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->value);
			ptr=ptr->next;
			
		}
	}
	printf("\n");
}


