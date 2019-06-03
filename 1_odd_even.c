/*
Title : even_odd_sign
Author: Vasanthi
Date : 07-06-2018
Description : The given programs check whether the input number is even or odd along with signs.
 */

#include<stdio.h>
int main()
{
	int n;
	char ch, y;
	do
	{
		printf("Enter a number:\n");
		scanf("%d",&n); 
		if ( n % 2 == 0)     			 // condition to check even or not //
		{
			if ( n > 0 ) 		 //condition to check positivity//
				printf("%d is positive even number\n",n);
			else                                     
				printf("%d is negative even number\n",n);
		}
		else
		{
			if ( n > 0 ) 		//condition to check negativity//
				printf("%d is positive odd number\n",n);
			else
				printf("%d is negative odd number\n",n);
		}

		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while(ch=='y');
	return 0;
}

