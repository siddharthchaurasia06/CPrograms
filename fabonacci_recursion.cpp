#include<stdio.h>

int getFibonacci(int n);
int main()
{
//	int n,i=0,a=0,b=1,c=0,d=0;
//	scanf("%d",&n);
//	printf("\n%d",&a);
//	printf("\n%d",&b);
//		c=a;
//		d=b;
//	for(i=2;i<n;i++)
//	{	
//		
//		int e=c+d;
//		printf("\n%d",e);
//		c=b;
//		d=e;
//	}

	int f = getFibonacci(46);
	printf("\n%d", f);
}

int getFibonacci(int n) {
	if(n <= 0) {
		return 0;
	}
	else if(n==1 ) {
		return 1;
	}
	else {
		return getFibonacci(n-1) + getFibonacci(n-2);
	}
	
}
