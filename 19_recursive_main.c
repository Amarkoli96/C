/*Title : recursive_main.c
Author:vasanthi
Date:26/06/2018
Description:calculate factorial for the given number using recursive main  */

#include<stdio.h>

int main()
{
	static int temp, num , ret ,count = 0;
	char g;
	if ( count == 0 )
	{
		printf("enter any number\n");
		scanf("%d",&num);
		temp = num;
		ret = 1;
		count = 1;
	}
	if( num )						//if n value is non zero value then it performs factorial operation
	{
		ret = ret * num;
		num--;
		main();
	}
	else
	{
		printf("factorial of %d is %d\n",temp,ret);
		printf("do you want to continue\n");
		scanf("\n%c",&g);
		if( g == 'y')
		{
			count = 0;
			ret = 1;
			main();				// function call
		}
		else
		{
			return 0;
		}
	}
}
