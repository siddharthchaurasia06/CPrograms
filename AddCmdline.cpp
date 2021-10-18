#include<stdio.h>
#include<stdlib.h>


int strToNum(char *);
int stringToNum(char *a);

int main(int argc, char *argv[] ) 
{
	int i, sum = 0,m,val=0;
	for(i=0; i < argc-1; i++) 
	{
		/** Below line uses inbuilt library method for number conversion */
		//sum += atoi(*++argv);


	/** Custom alternative method to atoi() */
		val = strToNum(*++argv);
		sum += val;



	/** Below code uses Custom switch method for each digit of a number */
	/*
		char *a = *++argv;
		int individualNum = 0;
		while(*a != '\0') {
			char str = *a++;
			printf("\nPassign : %c", str);
			individualNum = 10 * individualNum + stringToNum(&str);
		}	
		sum=sum + individualNum;
	*/

	}
	printf("\n%d", sum);
	return 0;
}

int strToNum(char *a)
{
	int k=0;
	while(*a != '\0') {
		printf("\nASCII Value of %c is %d",*a, *a);
		k = 10*k + (*a++ - '0');
	}
	//printf("\n%d", *a);
	return k;
}



int stringToNum(char *a)
{
	switch(*a)
	{
		case '1':{
			return 1;
		}
		case '2':{
			return 2;
		}
		case '3':{
			return 3;
		}
		case '4':{
			return 4;
		}
		case '5':{
			return 5;
		}
		case '6':{
			return 6;
		}
		case '7':{
			return 7;
		}
		case '8':{
			return 8;
		}
		case '9':{
			return 9;
		}
		case '0':{
			return 0;
		}
		default: {
			printf("Unknown value %c", a);
			return 0;
			break;
			
		}
	}
}
