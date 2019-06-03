/*
Title : perfect_num
Author: Vasanthi
Date : 07-06-2018
Description : program to print ascii characters
 */

#include <stdio.h>

int main()
{
	int i;
	for( i=0 ; i<127 ; i++ )		/* printing all ascii characters except special characters */
	{
		if ( i <= 31 )
		{
			printf("Decimal value is %d\toctal value is %o\thexa decimal value is %x\n",i,i,i);
		}
		else
		{

			printf("Decimal value is %d\toctal value is %o\thexa decimal value is %x\tcharacter is %c\n",i,i,i,i);
		}
	}
}
