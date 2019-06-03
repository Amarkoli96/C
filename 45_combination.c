/*
 Title:combination.c
Author:vasanthi
Date:3-8-2018
Description:The program prints all the combintions of the given string without repetation
 */
#include <stdio.h>
#include <string.h>
void comb(char *a, int l, int r);					//function prototype
void swap(char *x, char *y);


int main()
{
	char str[20];

	printf("enter the input\n");
	scanf("\n%s", str);

	int n = strlen(str);

	printf("the combinations\n");

	comb(str, 0, n-1);						//function call
	return 0;    
}

void comb(char *a, int l, int r)					//function definition
{
	int i;
	if(l == r)
	{
		printf("%s\n", a);

	}
	else
	{

		for(i= l; i <= r; i++)
		{
			//call the swap function
			swap((a+l), (a+i));

			//call the function
			comb(a, l+1, r);

			//call the swap function again
			swap((a+l), (a+i));

		}
	}
}
void swap(char *x, char *y)							//swap function definition
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;

}




