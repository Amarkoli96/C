/*
Title: X_format
Date :14-06-18
Author: vasanthi
Description: The given program prints the hello in X_format
*/

#include<stdio.h>

int main()
{
	int n,i,j;
	char ch;
	do
	{
		printf("Enter the value for n\n");		/* Read n value */
		scanf("%d",&n);

		for(i=1;i<=n;i++)                               
		{
			for(j=1;j<=n;j++)
			{
				if(j==i || j==n-i+1)		/* condition to print the format */
					printf("Hello");
				else
					printf(" ");
			}
			printf("\n");
		}
		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}
	while(ch=='y');
	return 0;
}

