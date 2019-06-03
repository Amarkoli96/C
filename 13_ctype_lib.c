/*     Title : ctype
      Author : vasanthi
        Date : 10-06-2018
 Description : program to check whether the input is lower upper or digit. 
*/

#include <stdio.h>

int is_upper(char ch);
int is_lower(char ch);
int is_alnum(char ch);
int is_blank(char ch);
int is_graph(char ch);
int main()
{
	char ch;
	int c,option;
	char cha;
	do
	{
		printf(" 1.isupper\n 2.islower\n 3.isalnum\n 4.isblank\n 5.isgraph\n");
		printf("Enter the option\n");
		scanf("%d",&option);				
		//Read the option 
int a,b;
a=1;
b=1;
		switch ( a+b)
		{

			case 1 : printf("Enter the character\n");
				 scanf("\n%c",&ch);
				 c=is_upper(ch);				// Function call
				 if ( c == 0)
				 {
					 printf("The given character is upper_case\n");
				 }
				 else									
				 {
					 printf("The given character is not an upper_case\n");
				 }
				 break;

			case 2 : printf("Enter the character\n");
				 scanf("\n%c",&ch);
				 c=is_lower(ch);				// Function call
				 if ( c == 0)
				 {
					 printf("The given character is lower_case\n"); 
				 }

				 else
				 {
					 printf("The given character is not a lower_case\n");
				 }
				 break;
			case 3 : printf("Enter the value\n");
				 scanf("\n%c",&ch);
				 c=is_alnum(ch);				// Function call
				 if ( c == 0)
				 {
					 printf("The given character is alphanumeric\n");
				 }
				 else
				 {
					 printf("The given character is not an alphanumeric\n");
				 }
				 break;
			case 4 : printf("Enter a blank character\n");
				 scanf("\n%c",&ch);
				 c=is_blank(ch); 				// Function call
				 if ( c == 0 )
				 {
					 printf("The given character is blank\n");
				 }
				 else
				 {
					 printf("The given character is not a blank\n");
				 }
				 break;
			case 5 : printf("Enter any character except space\n");
				 scanf("\n%c",&ch);
				 c=is_graph(ch);				// Function call
				 if ( c == 0 )
				 {
					 printf("The given character is not a space\n");
				 }
				 else
				 {
					 printf("The given character is space\n");
				 }

				 break;
		}

		printf("Do you want to continue?\n");
		scanf("\n%c",&cha);
	}
	while(cha == 'y');
}
int is_upper(char ch)
{

	if ( ch >= 65 && ch <= 90 )
	{
		return 0;						// Function definition 
	}
	else
	{
		return 1;
	}
}
int is_lower(char ch)
{

	if ( ch >= 97 && ch <= 122 )
	{
		return 0;						// Function definition
	}
	else
	{		
		return 1;
	}
}
int is_alnum(char ch)
{

	if ( ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122 || ch >= 48 && ch <= 57 )
	{
		return 0;						// Function definition
	}
	else
	{
		return 1;
	}
}
int is_blank(char ch)
{

	if ( ch == 9 || ch == 32 )
	{
		return 0;						// Function definition
	}
	else
	{
		return 1;
	}
}
int is_graph(char ch)
{
	if ( ch != 9 && ch != 32 )
	{
		return 0;						// Function definition
	}
	else
	{
		return 1;
	}
}
