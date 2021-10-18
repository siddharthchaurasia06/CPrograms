#include<stdio.h>
#include<string.h>
void remove(char str[],int n);
int main()
{
	char str[20],n;
	printf("enetr string\n");
	scanf("%s",str);
	n=strlen(str);
	remove(str,n);
	printf("%s",str);
}

void remove(char str[],int n)
{
	char s[20];
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='/0')
		{
			s[j]=str[i];
			j++;
		}
	}
	//printf("%s",s);
	strcpy(str,s);
	//printf("%s",str);
	
}
