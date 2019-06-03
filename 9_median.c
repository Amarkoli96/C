/*
Title  : Median 
Author : vasanthi
Date : 30-06-2018
Description : The given program sort the two arrays in ascending order and calculate the median of each array and then calculate the averag              e of the median of the two arrays.
*/
#include <stdio.h>

int main()
{
	int n1, n2, i, j, temp, x, y;
	float median, median1, median2;
	char choice;
	do
	{
		printf("Enter the size of 2 arrays:\n");			/* Read the size of 2 arrays */ 
		scanf("%d%d" , &n1, &n2);
		int array1[n1], array2[n2];
		printf("Enter the elements of first array:\n");
		for ( i=0; i<n1; i++ )
		{
			scanf("%d", &array1[i]);
		}
		printf("Enter the elements of second array:\n");
		for ( i=0; i<n2; i++ )
		{
			scanf("%d", &array2[i]);
		}
		for ( i=0; i<n1; i++ )
		{
			for ( j=i+1; j<n1; j++ )				/* Sort the elements of the first array */
			{
				if ( array1[i] > array1[j] )
				{
					temp = array1[i];
					array1[i] = array1[j];
					array1[j] = temp;
				}
			}
		}

		printf("Sorted array1 is :\n");
		for ( i=0; i<n1; i++ )
		{
			printf("%d\n",array1[i]);
		}
		temp=0;
		for ( i=0; i<n2; i++ )
		{								/* Sort the elements of the second array */
			for ( j=i+1; j<n2; j++ )					
			{
				if ( array2[i] > array2[j] )
				{
					temp = array2[i];
					array2[i] = array2[j];
					array2[j] = temp;
				}
			}
		}
		printf("sorted array2 is :\n");
		for (i=0; i<n2; i++ )
		{
			printf("%d\n",array2[i]);

		}
		x=n1/2;
		if ( n1 % 2 == 0 )
		{
			median1 = (float)(array1[x] + array1[x-1]) / 2;		/* Median of the first array */
		}
		else
		{
			median1 = (float)(array1[x]);
		}
		y=n2/2;
		if ( n2 % 2 == 0 )
		{
			median2 = (float)(array2[x] + array2[x-1]) / 2;
		}
		else								/* Median of the second array */
		{
			median2 = (float)(array2[x]);
		}
		median = ( median1 + median2 ) / 2;					/* overall median */
		printf("Median of the first array is %f : \n",median1);
		printf("Median of the second array is %f : \n",median2);
		printf("Median is %f : \n",median);
		printf("Do you want to continue?\n");
		scanf("\n%c",&choice);
	}
	while ( choice == 'y');
}







