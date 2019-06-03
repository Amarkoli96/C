/*
title:sizeof_macro.c
author:vasanthi
date:27-7-2018
description:this program prints the size of macros
 */
#include <stdio.h>

#define SIZEOF(x) (char *)(&x+1) - (char *)(&x)			//defining a sizeof macro

int main()
{
	int a;
	double d;	
	char c;
	float f;
	unsigned int b;
	char ch;
	do
	{

		printf("sizeof(a): %d\n", SIZEOF(a));			//printing sizes using macro

		printf("sizeof(d): %d\n", SIZEOF(d));

		printf("sizeof(c): %d\n", SIZEOF(c));

		printf("sizeof(f): %d\n", SIZEOF(f));

		printf("sizeof(b): %d\n", SIZEOF(b));

		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}while ( ch == 'y' );

}
