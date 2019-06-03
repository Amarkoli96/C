	/*Title	   :sort_names.c
	Author     :vasanthi
	Date       :2/8/2018
	Description:sort the names in alphabetical order*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort_names();

char str[10][10], temp[10];	
int i, j, size;

int main()
{
	char ch;
	do
	{
		printf("enter size\n");
		scanf("%d",&size);
		
		printf("enter the names\n");						// Read names
		for (i = 0 ; i < size ; i++)
		{
			scanf("%s",str[i]);
		}
		sort_names();								//function call
		printf("names in alphabetical order\n");
		for (i = 0 ; i < size ; i++)
		{
			printf("%s\n",str[i]);
		}
	
		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while ( ch == 'y' );
	return 0;
}
void sort_names()									// Function Defintion
{
	for (i = 1 ; i < size ; i++)
	{
		for (j = 1 ; j < size ; j++)
		{
			if(strcmp(str[j-1],str[j]) > 0)					// Condition check
			{
				strcpy(temp , str[j-1]);				// Sort according to alphabetical order
				strcpy(str[j-1] , str[j]);
				strcpy(str[j] , temp);
			}
		}
	}
}
