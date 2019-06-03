/*
Title		:- Word Count
Author		:- Vasanthi
Date		:- 05/07/2018
Description	:- Finding the total no.of chars, words and lines in a paragraph from the keyboard

 */

#include<stdio.h>
int main()
{
	char ch, c;												//Declaration
	do
	{
		int chare = 0, word = 0, line = 0, count = 0;							//Initialization
		printf("Enter the input which include min no.of characters, words and lines\n");
		while ( ( c = getchar() ) != EOF )							//Reading untill EOF reaches
		{

			if ( c != '\n' )
			{	
				if ( c != 32 && c != 9 )
					count = 1;
			}
			chare++;								//Char incrementing


			if ( c == 32 &&  count == 1 || count == 9 )
			{	
				word++;								//Word incrementing
				count = 0;    		
			}
			if ( c == '\n' )
			{
				if ( count == 1 )
				{
					word++;

				} 
				line++;
			}
		}
		printf("No.of characters  : %d\n", chare);
		printf("     No.of words  : %d\n",word);
		printf("     No.of lines  : %d\n",line);
		printf("Do u want to continue?\n");
		scanf("\n%c", &ch);
	} while ( ch == 'y' );

}
