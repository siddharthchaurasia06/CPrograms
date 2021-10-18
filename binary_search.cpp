#include<stdio.h>
int binary_search(int arr[],int n);
int main()
{
	int arr[]={1,2,3,4,5,6},n;
	scanf("%d",&n);
	binary_search(arr,n);
}

int binary_search(int arr[],int n)
{
	int start=0,end=5,mid;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		if(n==arr[mid])
		{
			printf("value is present at position %d",mid+1);
			break;
	    }
		else if(n<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;	
		}
	}
	if(start>end)
	printf("value is not present");
}
