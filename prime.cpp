#include<stdio.h>
int main(){
	int n=1000,i,j,count=0;
	for(i=3;i<=n;i++)
	{
		int isDivisible = 0;
		for(j=2;j<i;j++){
			if(i%j==0)
			{
				isDivisible = 1;
				break;
			}
			
		}
		if(isDivisible == 0) {
			printf("\n%d", i);
		}
	}
}
