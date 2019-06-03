/*
Title      : 20_pre_post_inc.c
Date       : 28/8/18
Author     : Vasanthi
Description: its increments the value depending on the users choice ie...post or pre increments the given value.
 */
#include<stdio.h>
int main()
{
	int num, ch, temp, x ;
	char choice ;
	do
	{
		printf("Enter the number\n");
		scanf("%d", &num);
		printf("Enter your option\n");
		printf("1.pre increment\n2.post increment\n");
		scanf("%d", &ch);
		temp=num;
		switch(ch)
		{
			case 1:x = pre_inc1(&num);   //function call for pre increment
			       printf("pre increment value of %d is %d and reflected value is %d\n",temp,x,x);
			       break;
			case 2:x = post_inc1(&num);   //function call for post increment
			       printf("post increment value of %d is %d and reflected value is %d\n",temp,temp,x);
			       break;
		}
		printf("Do you want to continue?\n");
		scanf("\n%c", &choice);
	}while( choice == 'y' );
}
int pre_inc1(int *x)
{
	int m = 1;
	while( *x & m )
	{
		*x = *x ^ m;    // xor operation says that when the two bits are different it gives 1 as o/p.
		m <<= 1;
	}
	*x = *x ^ m;
	return *x;
}
int post_inc1(int *x)
{
	int m = 1;
	while( *x & m )
	{
		*x = *x ^ m;
		m <<= 1;
	}
	*x = *x ^ m;
	return *x;
}
