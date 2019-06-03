/*
Title : bitwise_lib.c
Author : vasanthi
date : 26-07-2018
Description:The given program prints (b-a+1) lsbs taking i,a,b values. 
*/
#include <stdio.h>
int set_nbits_pos(int i, int bits,int b, int n);
int main()
{
	int n, i, a,b;
	char option;

	do
	{
		printf("enter the number\n");
		scanf("%d", &n);
		printf("enter the i value\n");
		scanf("%d", &i);
		printf("enter the starting address\n");
		scanf("%d", &a);
		if(a < 0 || a > 31)
		{
			printf("invalid input\n");
		}
		else 
		{
			printf("enter the ending address\n");
			scanf("%d", &b);
			if(b < 0 || b > 31)
			{
				printf("invalid input\n");
			}
			else
			{
				int bits= b-a+1;
				i = set_nbits_pos(i,bits,b,n);

				printf("the value of i after setting from position taken from b-a+1 is %d\n", i);
			}
		}
		printf("Do you want to continue?\n");
		scanf("\n%c", &option);
	}while (option == 'y' || option == 'Y');
}
int set_nbits_pos(int i,int bits, int b, int n)
{
	i=(i & ~((~(~0 << bits)) << (b-bits+1))) | ((n & (~(~0 << bits))) << (b-bits+1));
	return i;
}
