#include<stdio.h>
void rev(char str[]);
int main()
{
	char str[50];
	rev(str);
	//puts(str);
}

void rev(char str[])
{
	int i=0,j=0,n=0;
	char s[50];
	while(str[i]!='\0')
	{
		while(str[j]!=' '&&str[j]!='\0')
		{
			s[j]=str[j];
			j++;
			i++;
		}
		while(str[n]!=' '&&str[n]!='\0')
		{
			str[n++]=s[--j];
		}
		j=i;
		j++;
		n++;
	}
	puts(str);
}
