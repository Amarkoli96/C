/*
Title : print_bits.c
Author : vasanthi
Date : 29-06-2018
Description : The program prints the binary form of the given number.

*/
#include <stdio.h>

int main()
{
	int num, m, i;
	char ch;
	do
	{
		printf("Enter a number\n");
		scanf("%d",&num);					/* Read the value of n */
		printf("binary form of num is:\n");
		for ( i=(sizeof(num)*8-1); i >= 0; i-- )
		{
			m = num >> i;
			if ( m & 1)
			{
				printf("1");
			}
			else						/* printing the binary form of the number in positive */
			{
				printf("0");
			}
		}
		printf("\n");
		for ( i=(sizeof(num)*8-1); i >= 0; i-- )
		{
			m = -num >> i;
			if ( m & 1)
			{
				printf("1");
			}
			else						/* printing the binary form of the number in negative */
			{
				printf("0");
			}
		}
		printf("\n");

		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while ( ch == 'Y' );
	return 0;
}

