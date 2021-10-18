#include<stdio.h>
int insertion_sort(int arr[],int n);
int i=0;
int main()
{
	int arr[]={6,5,4,3,2,1};
	int n=5;
	insertion_sort(arr,n);
//	for(i=0;i<=n;i++)
//	{
//		printf("%d  ",arr[i]);
//	

//	}
}

insertion_sort(int arr[],int n)
{
	int j;
	for(i=1;i<=n;i++)
	{
		int temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<=n;i++)
	{
		printf("%d  ",arr[i]);
	
	}
}

