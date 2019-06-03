/* Author : vasanthi
Title : sieve.c
Date : 10-05-2018
Description: program to print the prime numbers with in the given range
 */
#include <stdio.h>

int main()
{
	int i, j, a[20]={0};
	char ch;
	do
	{
		for ( i=2 ; i<20 ; i++ )
		{
			for ( j=2 ; i*j<20 ; j++ )
			{
				a[i*j]=1;
			}
		}
		printf("Prime numbers are \n");
		for ( i=2 ; i<20 ; i++ )
		{
			if ( a[i] == 0 )			/* program to check whether the given number is prime or not */
				printf("%d \n",i);
		}

		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while( ch == 'y' );
}
