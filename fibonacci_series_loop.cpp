#include<stdio.h>

int getFibonacci(int n);
int main()
{
	getFibonacci(45);
}

int getFibonacci(int n) {
	int a=0,b=1,e=0,i=0;
	printf("\n%d",a);
	printf("\n%d",b);
	for(i=2;i<n;i++)
	{	
		
		e=a+b;
		printf("\n%d",e);
		a=b;
		b=e;
	}
	
}
