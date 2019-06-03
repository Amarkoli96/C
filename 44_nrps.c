/* 
Title :nrps.c
Author:vasanthi
  Date:4-8-2018
Description:The program prints the consecutive nrps of length n using k distinct characters.
 */

#include<stdio.h>
void nrps(char ptr[ ],int len,int k);						//function declaration
int main()
{
	char option;
	do
	{
		int n,k,i,j;
		char str[50];

		printf("Enter the Length of the string\n");
		scanf("%d",&n);

		printf("Enter the Number of Distinct characters\n");
		scanf("%d",&k);

		if((k < 1) || (k > 10))
		{
			printf("Invalid number\n");
			return 1;
		}

		printf("Enter \'k\' distinct characters \n");
		for(i=0; i<k; i++)		
		{
			scanf("\n%c",&str[i]);
		}
											//check for distinct characters
		for(i=0; i<k; i++)
		{
			for(j=i+1; j<k; j++)
			{
				if(str[j] == str[i])
				{
					printf("Characters are not distinct\n");
					return 1;
				}
			}
		}
		nrps(str,n,k);								 //Function call

		printf("Do you want to continue..?\n");
		scanf("\n%c",&option);
	}
	while( option == 'y');
	return 0;
}

void nrps(char ptr[ ],int len,int k)							//function definition
{
	int i;
	for(i=0; i<len+k; i++)
	{
		printf("%c",*(ptr + (i%k)));						//printing string without repition
	}
	printf("\n");
}

