/*
Title          : string reverse
Author         : Vasanthi
Date           : 11/7/18
Description    : reversing the string
 */

#include <stdio.h>
#include <string.h>
void my_strrev1( char *str, char *rev, size_t len);
void my_strrev2( char *str);
void my_strrev3(char *str, size_t len );
void my_strrev1( char *str, char *rev, size_t len )
{
	int i = 0;
	size_t s = strlen(str);

	for( i = 0; i < strlen(str); i++ )
	{

		rev[s-1] = str[i];           
		s--;
	}
	printf("\nreversed string is :  ");
	for(i = 0; i < len ; i++ )
	{
		printf("%c",rev[i]);
	}
}

void my_strrev2(char *str)
{
	if (*str)
	{
		my_strrev2(str+1);
		printf("%c", *str);
	}
}
void my_strrev3(char *str, size_t len )
{
	int i;
	for( i = len ; i >= 0 ; i-- )
	{
		printf("%c",str[i]);
	}
}	


int main()
{
	char ch;
	do
	{
		char str1[30], rev[30];						// charecter array declaration
		int i,option;							// integer declaration
		size_t len;
		printf("Enter the string : \n");
		scanf("%[^\n]",str1);						// readarray elements
		getchar();
		printf("Input string is :  %s\n", str1);			// prints the string you entered 
		printf("Choose a method to  reverse a string\n1.Non Recursion\n2.Recursion\n3.Without modifying the original string\n");
		scanf("%d",&option);						// reads option of having string reverse
		len = strlen(str1);						// gives the string length
		switch ( option )
		{
			case 1 : my_strrev1(str1,rev,len);			// function call
				 break;
			case 2 : my_strrev2(str1);
				 break;
			case 3 : my_strrev3(str1,len); 
				 break;
			default: printf("Choose Valid Option\n");
		}
		printf("\nDo you want to continue ?\n");
		scanf("\n%c",&ch);
		getchar();
	}while( ch == 'y'); 
}	
