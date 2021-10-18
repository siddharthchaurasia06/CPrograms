#include<stdio.h>
int merge(int arr1[],int arr2[]);
int main()
{
	int arr1[10]={5,7,9,10},arr2[10]={2,4,6,8,10,11,12};
	merge(arr1,arr2);
}

int merge(int arr1[],int arr2[])
{
	int i=0,j=0,k=0,arr3[20];
	while(i<=3&&j<=5)
	{
		if(arr1[i]>=arr2[j])
		{
			arr3[k]=arr2[j];
			j++;
			k++;
		}
		else
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		
	}
	while(i<=3){
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	while(j<=5){
		arr3[k]=arr1[j];
		k++;
		j++;
	}
	for(i=0;i<=9;i++)
	printf("%d ",arr3[i]);
}


