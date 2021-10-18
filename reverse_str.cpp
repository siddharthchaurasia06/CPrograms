#include<stdio.h>
void rev(char str[]);
int main()
{
	char str[20];
	gets(str);
	rev(str);
	
}
void rev(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		str[i++];
	}
	//printf("length is %d",i);
	char s[20],j=0;
	for(j=0;j<i;j++){
		s[j]=str[i-j-1];
	}
	s[j]='\0';
    printf("%s",s);
}

