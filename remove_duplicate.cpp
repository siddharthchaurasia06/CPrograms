#include<stdio.h>
int remove(int arr[]);
int main()
{
	int arr[100]={1,1,2,3,3,4,4,5,5};
	remove(arr);
}
int remove(int arr[])
{
	int i=0,j=1,a[100];
	while(i<9)
	{
		if(arr[i]==arr[i+1])
		{
			a[j]=arr[i];
			j++;
			i++	;
		}
		else
		a[j]=arr[i];
		i++;
	}
	for(i=0;i<=j;i++)
	printf("%d",a[i]);
}
