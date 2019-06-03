	/*Title:cir_right_left.c
	Author:Vasanthi
	Date:18/06/2018
	Description:shift the given number right and left in circular manner*/

#include <stdio.h>

void cir_left(int num,int n);
void cir_right(int num,int n);

int main()
{
	int num, n, option;
	char ch;
	do
	{
		printf("Enter the number\n");
		scanf("%d",&num);
		printf("Enter the number you want to shift\n");
		scanf("%d",&n);
		printf("1.left shift \n2.right shift\n");
		printf("Enter option\n");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
				cir_left(num,n);
				break;
			case 2:
				cir_right(num,n);
				break;
			default:
				printf("invalid\n");
		}
		printf("Do you want to continue?\n");
		scanf("\n%c",&ch);
	}
	while ( ch == 'y');
	return 0;
}
                                                                        		//function definitions
											//circular left shift
void cir_left(int num,int n)
{
	unsigned mask = 1 << ((sizeof(int) * 8) - 1);
	for ( ; mask ; mask >>= 1 )
	{
		num & mask ? printf("1") : printf("0");
	}
	printf("\n");
											//rotate
	unsigned int temp =  num;
	num = (num << n) | (temp >> (sizeof(int) * 8 - n));
	mask = 1 << ((sizeof(int) * 8) - 1);
	for ( ; mask ; mask >>= 1 )
	{
		num & mask ? printf("1") : printf("0");
	}
	printf("\n");
}

											//circular right shift
void cir_right(int num,int n)
{
	unsigned mask = 1 << ((sizeof(int) * 8) - 1);
	for ( ; mask ; mask >>= 1)
	{
		num & mask ? printf("1") : printf("0");
	}
	printf("\n");
											//rotate
	unsigned int temp = num;
	num = (temp >> n) | (num << (sizeof(int) * 8 - n));
	mask = 1 << ((sizeof(int) * 8) - 1);
	for ( ; mask ; mask >>= 1 ) 
	{
		num & mask ? printf("1") : printf("0");
	}
	printf("\n");
}
