#include<stdio.h>
#include<string.h>
void palindrome(char str[]);
int main()
{
	char str[10];
	printf("enter string\n");
	scanf("%s",str);
	palindrome(str);
}

void palindrome(char str[])
{
	char s[10];
	strcpy(s,str);
	strrev(s);
	if(strcmp(s,str)==0)
	printf("it is palindrome");
	else
	printf("it is not palindrome");
}
