/* Author : vasanthi
    Title : which_day
     Date : 10-05-2018
Description : program to know the day of the given date.
 */

#include <stdio.h>

int main()
{
	int day, a, n, m, s;
	char option;
	do
	{
		printf("1.sunday\n 2.Monday\n 3.Tuesday\n 4.Wednesday\n 5.Thursday\n 6.Friday\n 7.Saturday\n");
		printf("enter the starting day of the year\n");			/* Read the starting day of the year */
		scanf("%d",&day);
		printf("enter n value\n");                                      /* Read the required date */
		scanf("%d",&n);
		if ( n>=1 && n<=365 )
		{
			a = n % 7;							/* Extracting the day for given date */
			m = a + day - 1;
			s = m % 7;
			switch(s)
			{
				case 1:
					printf("The day you entered is sunday\n");
					break;
				case 2:
					printf("The day you entered is Monday\n");
					break;
				case 3:
					printf("The day you entered is Tuesday\n");
					break;
				case 4:
					printf("The day you entered is wednesday\n");
					break;
				case 5:
					printf("The day you entered is Thursday\n");
					break;
				case 6:
					printf("The day you entered is Friday\n");
					break;
				case 0:
					printf("The day you entered is Saturday\n");
					break;
				default:
					printf("Invalid Statement\n");
			}
		}
		else
		{
			printf("Enter a valid value\n");
		}
		printf("Do you want to continue?\n");
		scanf("\n%c",&option);
	}
	while( option == 'y' );
	return 0;
}
