#include<stdio.h>
#include<string.h>
void replace(char str[],char remove[],char paste[]);
int main()
{
	char str[50],remove[20],add[50];
	printf("enter string\n");
	gets(str);
	printf("enter which word to be remove\n");
	gets(remove);
	printf("enter which word to paste\n");
	gets(add);
	replace(str,remove,add);
	puts(str);
}

void replace(char str[],char remove[],char add[])
{
	int stringlen,l1,l2;
	stringlen=strlen(str);
	l1=strlen(remove);
	l2=strlen(add);
	int i=0,j=0,k=0,start=0,end=0,count=0;
	for(i=0;i<stringlen;i++)
	{
		count=0;
		start=i;
		for(j=0;str[i]==remove[j];j++,i++)
		{
			if(j=l1-1)
				count=1;
		}
		end=i;
		if(count==0)
			i=i-j;
		else
		{
			for(j=start;i<end;i++)
			{
				for(k=start;k<stringlen;k++)
				{
					str[k]=str[k+1];	
				}
				i--;
				stringlen--;
			}

			for(j=start;i<start+l2;i++)
			{
				for(k=stringlen;k>=j;k--)
				{
					str[k+1]=str[k];
				}
				str[j]=add[j-start];
				i++;
				stringlen++;
			}

		}
		
	}
}
