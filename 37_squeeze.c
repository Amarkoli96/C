/*
Title : squeeze
Author : vasanthi
Date : 26-07-2018
Description : The program takes two strings as input and gives an output string that is string 1 by omiting the chracters of second string.

 */
#include<stdio.h>
#include<string.h>

void squeeze(char *s,int n,char *t,int m);					// Function prototype

int main()
{
	char str1[100] = {0}, str2[10] = {0}, option;				// Variable Declaration
	int i, n1 = 0, n2 = 0, n;	

	do
	{

		printf("enter String1 : ");					// read string 1
		scanf("%100[^\n]",str1);

		printf("enter String2 : ");					// read string 2
		scanf("%s",str2);

		n1 = strlen(str1);
		n2 = strlen(str2);

		squeeze(str1,n1,str2,n2);					// Function call

		printf("Do you want to continue?\n ");
		scanf("\n%c",&option);
		getchar();

	}while (option == 'y');

	return 0;
}

void squeeze ( char *s, int n, char *t, int m )			       // Function Definition
{
	int i, j, count;

	for ( i = 0; i <= n; i++)
	{
		count = 0;
		for ( j = 0; j <= m; j++ )
		{
			if ( *(s + i) == *(t + j) )
			{
				count = 1;
			}						

		}
		if ( count == 0 )
		{
			printf("%c",*(s + i));
		}
	}
	printf("\n");
}		
