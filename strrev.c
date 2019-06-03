/*
Title : string reverse
Author : vasanthi
Date : 27-07-2018
Description: Given program prints the reverse of string.
*/
#include<stdio.h>
#include<string.h>
void iter(char *str,int n,int size);
void recur(char *str,int n,int size);						// Function prototype
int main()
{
	char str[100];
	char c;
	int option,n;
	do
	{
		__fpurge(stdin);
		printf("enter the string\n");
		fgets(str,100,stdin);
		int size = strlen(str);
		n = 0;
		printf("Enter the option\n1.with recursion\n2.without recursion\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				iter(str,n,size-1);				// Function call
				printf("reversed string is %s\n",str);
				break;
			case 2:
				recur(str,n,size-1);
				printf("reversed string is %s\n",str);
				break;
		}
		printf("Do you want to continue ");
		scanf("\n%c",&c);
	}
	while(c == 'y');
	return 0;
}
void iter(char *str,int n,int size)						// Function Definition
{
	while(n <= size)
	{
		char temp = *(str + size);
		*(str + size) = *(str + n);
		*(str + n) = temp;
		n++;
		--size;
	}
}
void recur(char *str,int n,int size)
{
	if(n >= size)
	{
		return;
	}
	char temp = *(str + size);
	*(str + size) = *(str + n);
	*(str + n) = temp;
	recur(str,++n,--size);
}
