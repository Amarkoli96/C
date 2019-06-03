/*Title:strtok.c
Author:vasanthi
Date:11/07/2018
Description:delete token in the string using delimiter*/

#include<stdio.h>
#include<string.h>


char *my_strtok(char *s1, const char *s2)			// Function Definition
{
	int i,j, c = 1;
	int k = strlen(s1);
	int l = strlen(s2);

	for( i = 0; i < l; i++)
	{
		for( j = 0; j < k; j++)
		{
			if( s2[i] == s1[j] )
			{
				s1[j] = '\0';
				continue;
			}
		}
	}
	for( j = 0; j < k; j++)
	{
		if( s1[j] != '\0' && c == 1)
		{
			putchar(s1[j]);
		}
		else if( s1[j] == '\0' || c == 1)
		{
			if ( c == 1)	
			{
				printf("\n");
				c++;
			}
		}
		else
		{
			putchar(s1[j]);
			c = 1;
			continue;
		}
	}
}

int main()
{
	char g;
	char s1[100],s2[100];
	do
	{
		printf("enter the  string\n");
		fgets(s1,100,stdin);
		puts("enter the token");
		fgets(s2,100,stdin);
		my_strtok(s1,s2);					//Function call
		printf("do you want to continue?\n");
		scanf("%c",&g);
		getchar();
	} while ( g == 'y' );
}



			

