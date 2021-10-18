#include <stdio.h>
int non_repeating_elements(int arr[]);
int main()
{

int arr[]={1,2,3,4,5};
non_repeating_elements(arr);
return 0;
}
int non_repeating_elements(int arr[])
{
int i,j;

for(i = 0; i < 5; i++)
{
	for(j = 0; j < 5; j++)
	{
		if(arr[i] == arr[j] && i != j)
		break;
	}
	if(j == 5 )
	{
	printf("\arr[%d]: %d \n",i,arr[i]);
	}
}

}
