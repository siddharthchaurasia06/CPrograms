#include<stdio.h>
int binary(int n);
int main()
{
	int converted = binary(10);	
	printf("\nDecimal to Binary:%d", converted);
}

int binary(int n){
	int number = n;
	int arr[20];
	int index = -1;
	int num = 0;
	while(number >= 1){
		int rem = number % 2;
		number = number / 2; 
		arr[++index] = rem;
	}
	while(index >= 0) {
		num = num * 10 + arr[index];
		index--;
	}
	return num;
}
