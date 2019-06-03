/*
Title : perfect_num
Author: Vasanthi
Date : 07-06-2018
Description : program to print size of all data types. 

 */

#include <stdio.h>

int main()
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	double f;
	short g;
	printf("The size of char is %u\n",sizeof(char));
	printf("The size of int is %u\n",sizeof(int));
	printf("The size of long int is %u\n",sizeof(long int));
	printf("The size of long long int is %u\n",sizeof(long long int));	/* printing the sizes of all data types */
	printf("The size of float is %u\n",sizeof(float));
	printf("The size of double is %u\n",sizeof(double));
	printf("The size of short is %u\n",sizeof(short));
}

