#include<stdio.h>
int main()
{
	int a[20]={9,-4,-3,5,7,-1,3,-1, 8};
	int i,j=8,temp=0;
	for(i=0;i<9;i++)
	{
		
		if(i<j)
		{
			while(a[j]<0)
			{
				j--;
			}
			if(a[i]<0)
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				j--;	
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
	
}
