#include<stdio.h>
int main()
{
	int a,b,lcm;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	lcm = ((a>b)?a:b);
	while(1)
	{
		if(lcm%a==0&&lcm%b==0)
		{
			break;
		}
		lcm++;
	}
	printf("%d",lcm);
}
