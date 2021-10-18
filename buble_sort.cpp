#include<stdio.h>
int main()
{
	int arr[] = {8, 5, 12, 18, 3};
	int i, j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
	
	
	for(i=0; i<4;i++){
		for(j=0; j<4-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
	for(i=0; i < 5; i++)
	{
		printf("%d  ",arr[i]);
	}
}

