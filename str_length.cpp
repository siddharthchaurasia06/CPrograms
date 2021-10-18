#include<stdio.h>
void length(char str[]);
int main()
{
	char str[20];
	gets(str);
	length(str);
}
void length(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		str[i++];
	}
	printf("length is %d",i);
}
