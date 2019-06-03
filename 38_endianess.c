/*
Title : endianness
Author : vasanthi
Date : 26-07-2018
Description : Check whether your system is little endian or big endian.
 */
#include<stdio.h>
typedef union endian
{
	int store;
	char check[4];
}end_t;
int main()
{
	end_t x;
	x.store = 0X4F52;
	if(x.check[0] == 0x52)				// checking the condition	
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
	return 0;
}
