/*
TITLE      : float to binary 
AUTHOR     : vasanthi
DATE       : 21/7/18
DESCRIPTION: program to convert a given float number into binary and double number into binary number.
*/    

#include <stdio.h>

//function prototypes
int convert_bin(int *);

int main()
{
	char res;
	do
	{
		//menu
		printf("menu\n1. float\n2. double\n");
		int option;
		float fl;
		double db;
		int *p;
		scanf("%d", &option);
		switch(option)
		{
			case 1:
					printf("enter a float number: ");
					scanf("%f", &fl); 
					p = (int *) &fl;
					convert_bin(p);
					printf("\n");
					break;
			case 2:
					printf("enter a double number: ");
					scanf("%lf", &db); 
					p = (int *) &db;
					convert_bin(++p);
					convert_bin(--p);
					printf("\n");
					break;
			default:
					printf("enter a valid input\n");
		}

		printf("do you want to continue:");
		scanf("\n%c", &res);

	}while( res == 'y' );

	return 0;
}

//function definations

//convert to binary
int convert_bin(int *a)
{
	unsigned int mask = 1 << ((sizeof(int) * 8) - 1);
	for ( ;mask; mask >>= 1 )
	{
		*a & mask ? printf("1") : printf("0");
	}
}
