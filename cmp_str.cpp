#include<stdio.h>
int compare(char str[],char a[]);
int main()
{
	char str[50],a[50];
	gets(str);
	gets(a);
	compare(str,a);
}

int compare(char str[],char a[])
{
	int i=0;
	for(i=0;str[i]!='\0'&&a[i]!='\0';i++)
	{
		if(str[i]!=a[i])
		break;
	}
	if(str[i]=='\0'&&a[i]=='\0')
	printf("same");
	else
	printf("not same");
}
