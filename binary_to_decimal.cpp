#include<stdio.h>
#include<math.h>
int decimal(int n);
int main(){
	decimal(1111);
}

int decimal(int n){
	int dec=0,rem=0,k=0;
	while(n!=0){
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,k);
		k=k+1;
	}
	printf("%d",dec);
}

