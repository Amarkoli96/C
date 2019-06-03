	/*Title		:	Calculate_mean.c
	Author		: 	vasanthi
	Date		:	4-08-2018
	Description	:	calculte the mean for dataypes */

#include <stdio.h>

float calc_mean (void *, int);							// Function prototype

void main ()
{
	int ch,n;
	void *ptr;
	char option;
	float mean=0.0;
	do
	{
		printf("1.float\n2.int\n3.short int\n4.double\n");		// Read option
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1 :
				mean = calc_mean(ptr,ch);
				printf("Mean : %f\n",mean);
				break;
			case 2:
				mean = calc_mean(ptr,ch);
				printf("Mean : %f\n",mean);
				break;
			case 3:
				mean = calc_mean(ptr,ch);
				printf("Mean : %f\n",mean);
				break;
			case 4:
				mean = calc_mean(ptr,ch);
				printf("Mean : %f\n",mean);
				break;
			default :
				printf("invalid\n");
				break;
		}
		printf("Do u want to continue?\n");
		scanf("\n%c",&option);
	}while ( option == 'y');
}

float calc_mean ( void *ptr, int ch)						// Function definition
{
	int a[10],i,n;
	float sum = 0.0,mean = 0.0;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	if ( ch == 1)
	{
		ptr = (float*)a;
		for ( i=0; i<n; i++)
		{
			scanf("%f",((float*)ptr+i) );
		}
		for (i=0; i<n; i++)
		{
			sum = sum + *( (float*)ptr + i) ;
		}
		mean = sum / n;
		return mean;
	}

	if ( ch == 2 )
	{
		ptr = (int*)a;
		for ( i=0; i<n; i++)
		{
			scanf("%d", ( (int*)ptr + i) );
		}
		for ( i=0; i<n; i++)
		{
			sum = sum + *( (int*)ptr + i);
		}
		mean = sum/n;
		return mean;
	}
	if ( ch == 3 )
	{
		ptr = (short*)a;
		for ( i=0; i<n; i++)
		{
			scanf("%hd",( (short*)ptr + i) );
		}
		for ( i=0; i<n; i++)
		{
			sum = sum + *( ( short*)ptr + i);
		}
		mean = sum/n;
		return mean;
	}
	if ( ch == 4 )
	{
		ptr = (double*)a;
		for ( i=0; i<n; i++)
		{
			scanf("%lf",( (double*)ptr + i) );
		}
		for ( i=0; i<n; i++)
		{
			sum = sum + *( (double*)ptr + i);
		}
		mean = sum/n;
		return mean;	
	}
}
