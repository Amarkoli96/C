/*
Title : perfect_num
Author: Vasanthi
Date : 07-06-2018
Description : The given program checks whether the given number is perfect n              umber or not
 */
#include<stdio.h>

int main()
{
	int rem, i, sum, n;
	char ch;
	do
	{
		sum=0;
		printf("Enter a number:\n");		/* Read n value */
		scanf("%d",&n);
		for( i=1; i<=(n-1); i++)			/* condition to check whether the given number is perfect or not */
		{
			rem=n%i;
			if(rem==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
		{
			printf("The given number is a perfect number\n");
		} 
		else
		{
			printf("The given number is not a perfect number\n");
		}
		printf("Do you want to continue:\n");
		scanf("\n%c",&ch);
	}
	while(ch=='y');
	return 0;
}
