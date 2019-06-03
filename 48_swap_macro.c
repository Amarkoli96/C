/*
Title :swap_macro
Author:vasanthi
Date:29-7-2018
Description:The given program can swap two numbers using macro.
 */
#include <stdio.h>

#define SWAP(a, b)				\
{								\
	int temp = a;				\
	a = b;						\
	b = temp;					\
}

int main()
{
	int n1,n2;
	char ch;
	do
	{

		printf("enter n1,n2 values\n");
		scanf("%d%d",&n1,&n2);

		SWAP(n1, n2);						//Swap two numbers using macro
		printf("%d %d\n", n1, n2);

		SWAP(n1, n2);
		printf("%d %d\n", n1, n2);

		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}while( ch == 'y' );

	return 0;
}
