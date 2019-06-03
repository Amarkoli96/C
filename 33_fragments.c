	/*Title		:	fragments
	Author		: 	vasanthi
	Date		:	20/07/018
	Description	:	sorting the given elements using fragments*/

#include <stdio.h>
#include <stdlib.h>
void my_sort(float **p,int,int *a);
void my_mean(float **p,int,int *a);						// Function prototype
void my_print(float **p,int,int *a);

void main ()
{
	int i, n, size, j;
	char option;
	do
	{
		i=0;
		printf("Enter number of fragments\n");
		scanf("%d",&size);
		int a[size];
		float *p[size];
		while ( i < size )
		{
			printf("enter the number of elements for fragment %d\n",i+1);
			scanf("%d",&n);
			a[i] = n;
			i++;
		}

		for ( i = 0 ; i < size ; i++)
		{
			p[i] = (float*)malloc( ( a[i] + 1 ) * sizeof(float));
		}

		for ( i=0 ; i < size ; i++)
		{
			printf("enter the elements for fragment : %d\n",i+1);
			for ( j = 0 ; j < a[i] ; j++)
			{
				scanf("%f",( p[i]+j ));
			}
		}

		my_sort(p,size,a);						// Function call

		printf("Do u want to continue?\n");
		scanf("\n%c",&option);

	}while ( option =='y');

}
void my_sort ( float *p[], int size, int a[])					// Function definition
{
	int i,j,k;
	float temp;
	for ( i = 0 ; i < size ; i++) 
	{
		for ( j = 0 ; j < ( a[i] - 1 ) ; j++)
		{
			for ( k = j+1 ; k<a[i] ; k++ )
			{
				if ( *(p[i]+j) > *(p[i]+k) )
				{
					temp = *(p[i]+j);
					*(p[i]+j) = *(p[i]+k);
					*(p[i]+k) = temp;
				}
			}
		}
	}
	my_mean ( p, size, a);							// Function call
}

void my_mean ( float *p[], int size, int a[] )					// Function definition
{
	int i, j;
	float sum=0.0, mean=0.0;
	for ( i = 0 ; i < size ; i++)
	{
		for ( j = 0 ; j < a[i] ; j++)
		{
			sum = sum + p[i][j];
			if ( j == a[i] - 1)
			{
				*(p[i]+(j+1)) = sum/a[i];
			}
		}
		sum = 0.0;
	}
	my_print(p, size, a);							// Function call
}

void my_print ( float *p[], int size, int a[])					// Function definition
{
	int i = 0, j;
	float *temp;
	for ( i = 0 ; i < size ; i++)
	{
		for ( j = i + 1 ; j < size ; j++)
		{
			if ( *( p[i] + a [ i ] ) >  *( p[j] + a [ j ] ) )
			{
				temp = *(p+i);
				*(p+i) = *(p+j);	
				*(p+j) = temp;	
			}
		}
	}
	for ( i = 0 ; i < size ; i++)
	{
		for ( j = 0 ; j < (a[i]+1) ; j++)
		{
			printf("%0.3f\t",*(p[i]+j));
		}
		printf("\n");
	}
	for ( i = 0 ; i < size ; i++)
	{
		free(p[i]);
	}
}

