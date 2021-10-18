#include<stdio.h>
#include<string.h>
void search(char str[],char remove[],char paste[]);
int main()
{
	char str[50],remove[20],paste[50];
	printf("enter string\n");
	gets(str);
	printf("enter which word to be remove\n");
	gets(remove);
	printf("enter which word to paste\n");
	gets(paste);
	
	search(str,remove,paste);
	
}

void search(char str[],char remove[],char paste[])
{
	char s[50][50];
	int i=0,j=0,m=0;
	int k=strlen(paste);
	for(i=0;str[m]!='\0';i++)
	{
		for(j=0;str[m]!=' '&&str[m]!='\0';j++)
		{
			s[i][j]=str[j];
			m++;
		}
		if(str[m]==' ')
		{
			s[i][j]='\0';
			m++;
		}
	}

	int n=i-1;
	for(i=0;i<=n;i++)
	{
	
		for(j=0;s[i][j]=='\0'&&remove[j]=='\0';j++)
		{
			if(s[i][j]!=remove[j])
			break;
		
		}
		if(s[i][j]=='\0'&&remove[j]=='\0')
		{
			int l=0;
			for(l=0;l<k;l++)
			{
				s[i][l]=paste[l];
			}
			s[i][l]='\0';
			
		}
	}
	int x=0;
	for(i=0;i<=n;i++)
	{
		for(j=0;s[i][j]!='\0';j++)
		{
			str[x]=s[i][j];
			x++;
		}
		str[x]=' ';
		if(i!=n)
		x++;
	}
	str[x]='\0';
	puts(str);
}

