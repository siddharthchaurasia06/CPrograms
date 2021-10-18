#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[] ) {
	printf("Length of array of strings : %d\n", argc);
	int i=0,n=0,m=0;
	for(i=0; i < argc; i++) {
		
//		printf("\nInside for:");
		printf("%s ", *argv++);
		
	}
	
	return 0;
}
