#include<stdio.h>
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9},a[3][3]={9,8,7,6,5,4,3,2,1};
	int m[3][3],n=0;
	int i=0,j=0,k=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			n=0;
			for(k=0;k<3;k++)
			{
				n=n+arr[i][k]*a[k][j];
			}
			m[i][j]=n;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");	
	}
}
