#include<stdio.h>
#include<string.h>
void remove(char str[]);
int main()
{
	char str[20];
	gets(str);
	remove(str);
	printf("%s",str);
}

void remove(char str[])
{
	int i=0 ,j=0;
	while(str[i])
	{
		
		if(str[i]!=' ')
		{
			str[j++]=str[i];
		}
		i++;
	}
	str[j]='\0';
	
}
