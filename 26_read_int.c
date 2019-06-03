/*
Title:read _int
author:vasanthi
date:27-7-2018
description:this program prints only integer values neglecting characters other than integers from the given input
*/
#include<stdio.h>

void read_int(int *p);								//Function prototype

int main()
{
	int num = 0;
	char ch;

	do
{
		num = 0;

		printf("Enter the number : ");
	
		read_int(&num);							//function call

		printf("%d\n",num);

		printf("do you want to continue :\n");
		scanf("\n%c",&ch);
		getchar();

	 }
while(ch == 'y' );

	return 0;
}
void read_int(int *p)								//function definition
{
	int ch,neg;
	
		for(; (ch  = getchar()) != '\n'; )
                  {
			if( ch == '-')
			{
				neg = 1;
  			}
                          else if((ch>='0')&&(ch<='9'))				//checking integer values
                          {
                                ch = ch - 48;
				*p = *p * 10 + ch;
                             
                          }
                  }
		if(neg == 1)
		{
			*p = -*p;
		}
}

