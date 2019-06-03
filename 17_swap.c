	/*Title:swap
	Author:Vasanthi
	Date:20/06/2018
	Description:swapping of two numbers using pass by reference*/

#include<stdio.h>
void swap(int *a,int *b)
{
	*a = *a + *b;									// Function definition
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int a,b;	//taking inputs
	char c;
	do
	{
		printf("Enter first value\n");   
		scanf("%d",&a);								// Read the inputs
		
		printf("Enter second value\n");
		scanf("%d",&b);
		printf("Before swapping a=%d and b=%d\n",a,b);
		swap(&a,&b);								// Function calling
		printf("After swapping  a=%d and b=%d\n",a,b);
		printf("Do u want to continue?\n");
		scanf("\n%c",&c);
	}
	while(c == 'y');
	return 0;
}

