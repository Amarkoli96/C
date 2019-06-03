	/*Title     : Replace Blank space    
	Author      : vasanthi
	Date        : 02-07-18
	Description : To remove the unneccesary blank space in a given text*/

#include <stdio.h>
#include <string.h>

void main()
{
	char a;
	char ch;
	do
	{
	puts("enter a string with more than 1 sapce");
	int count=0;						
		while(1)
		{
			a = getchar();				//Get the character and put it in an array
			if(a == '\n')		
				break;			
			if( a == '\t')				
			{
				a = ' ';
			}
			if (count == 0 || a != ' ')		//if space count is zero and character is not a space means put it in an array
			{
				putchar(a);
			}
			if( count == 1 && a != ' ')		
			{
				count = 0;
			}
			if(a == ' ')				//if the character is space make the count as 1
			{
				count = 1;
			}
		}
		printf("\nDo you want to continue:press(y/n)\n");
		scanf("%c",&ch);
		getchar();
	}
	while ( ch == 'y' );
}



