/*
Title : Bitwise_odd_even.c
Author : vasanthi
Date : 03-07-2018
Description : The given program checks whether the given number is even or odd along with the sign.
 */
#include <stdio.h>

int main()
{
	int temp, num, i, lsb, msb, m;
	char ch;

	do
	{
		printf("Enter the number\n");				/* Read a number */
		scanf("%d",&num);
		temp = num;
		printf("binary form of %d is",num);			/* Binary form of a given number */
		for ( i=sizeof(int)*8-1; i>=0; i-- )
		{
			m = num >> i;

			(m & 1)?printf("1"):printf("0");
			/*if (m & 1)
				printf("1");
			else
				printf("0");
*/
		}
		printf("\n");
		msb= num & (1<<(sizeof(int)*8-1));
		lsb= num & 1;
		if ( msb==0 )						/* checks whether the given number is positive even or odd */
		{
			if( lsb==0 )
			{
				printf("%d is positive even number\n",temp);
			}
			else
			{
				printf("%d is positive odd number\n",temp);
			}
		}
		else
		{
			if( lsb==0 )					/* checks whether the given number is negative even or odd */
			{
				printf("%d is negative even number\n",temp);
			}
			else
			{
				printf("%d is negative odd number\n",temp);
			}
		}

		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}
	while(ch=='y');
	return 0;
}






