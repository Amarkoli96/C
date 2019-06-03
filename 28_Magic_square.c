/*
title		:28_magic_square.c
author		:vasanthi
date		:15/6/18
description	:this program prints the magic square for odd numbers and it doesnt work for even numbers
 */

#include<stdio.h>
void magicsq(int size,int[10][10]);							//Function prototype
int main()
{ 
	int size;
	int a[10][10];
	char ch;
	do
	{
		printf("Enter the size:");
		scanf("%d",&size);
		if(size % 2 == 0)		        				//checks the condition
		{
			printf("Magic square does not work for this condition:\n");
		}
		else
		{
			magicsq(size,a);						//function call
		}
		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while( ch == 'y');
	return 0;
}
void magicsq(int size,int a[10][10])							//function definition
{
	int sqr = size * size;
	int i=0, j = size / 2, k;
	for(k = 1; k <= sqr; k++)
	{
		a[i][j] = k;								//assigning values to array
		i--;
		j++;
		if(k % size == 0)
		{
			i += 2;
			--j;
		}
		else
		{
			if(j == size)
			{
				j -= size;
			}
			else if(i < 0)
			{
				i += size;
			}

		}
	}
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


