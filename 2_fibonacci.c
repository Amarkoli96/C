/*
Title: fibonacci
Date :13-06-2018
Author: vasanthi
Description:The given program generates fibonacci series for required value irrespective of signs 
 */
#include<stdio.h>

int main()
{
	char ch;
	do
	{
		int n, a=0, b=1, i, c=0;


		printf("Enter the value for n\n");		/* Read n value */
		scanf("%d",&n);
		if ( n > 0 )
		{
			printf("The fibonacci series is\n");	/* condition for positive fibonacci series */
			for ( i=1; c<=n; i++ )
			{
				printf("%d\n",c);
				c = a + b;
				a = b;
				b = c;
			}
		}
		else
		{  
			printf("The fibonacci series is\n");	/* condition for negative fibonacci series */
			for ( i=0; c>=n; i-- ) 
			{
				c = a - b;
				a = b;
				b = c; 
				if (c>=n)
				{
					printf("%d\n",c);
				}
			}
		}
		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}
	while ( ch == 'y');

	return 0;
}

