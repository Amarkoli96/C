/*	Title	   :recursive_fibonacci.c
	Author	   :vasanthi
	Date	   :26/06/2018
	Description: Getting fibbonacci zeries for given number for both n is positive or negative*/

#include <stdio.h>

void getfib();								// Function protype
int t1, t2, n, sum, i;
int main()
{
	char ch;
	do
	{
		sum = 0, i = 1;
		t1 = 0;
		t2 = 1;
		printf("enter the number\n");			        // read input
		scanf("%d",&n);
		printf("fibbonacci series:\n");
		printf("%d\n%d\n",t1,t2);
		getfib();						// Function call
		printf("\n");
		printf("do you want to continue?\n");
		scanf("\n%c",&ch);
	}while (ch == 'y');
	return 0;
}
void getfib()								// Function Definition
{
	if ( n > 0)
	{
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;
		if (sum <= n)
		{
			printf("%d\n",sum);
			getfib();
		}
	}
	else
	{
		sum = t1 - t2;
		t1 = t2;
		t2 = sum;
		if(sum >= n && sum <= (-n))
		{
			if((i % 2) != 0)
			{
				printf("%d\n",sum);
				++i;
				getfib();
			}
			else
			{
				printf("%d\t",sum);
				++i;
				getfib();
			}
		}	
	}
}

