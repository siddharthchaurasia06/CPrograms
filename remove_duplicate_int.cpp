#include<stdio.h>
int main()
{
	 int a[20]={4,3,5,9,3,5,4,3};
	int n=8,i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
