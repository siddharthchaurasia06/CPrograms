#include<stdio.h>
int main()
{
	int a[3][3]={11,12,13,21,22,23,31,32,33},i=0,j=0;
	for(i=0;i<=2;i++)
	{
		if(i % 2 ==0) 
		{
			for(j=0;j<=2;j++)
			{
				printf("\n%d",a[j][i]);
			}
			printf("\n");
		}
		else
		{
				for(j=2;j>=0;j--)
			{
				printf("\n%d",a[j][i]);
			}
			printf("\n");
		}
		
	}
}
