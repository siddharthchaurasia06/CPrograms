#include<stdio.h>
#include<malloc.h>
struct link
{
	int val;
	struct link_list *next;
};

struct link add*(struct link *,int val);
int main()
{
	struct link *head=NULL;
	int n;
	do{
		printf("\n 1 for add\n 2 for delete\n 3 for display")
		scanf("%d",&n);
		switch(n)
		{
			case 1:{
				add(head);
				break;
			}
			case 2:{
				delete
				break;
			}
		}
	}
}
