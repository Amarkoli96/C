/*
Title : variance 
Author : vasanthi
Date :26-07-2018
Description: The given program calculate the mean for the given array of elements.
*/
#include<stdio.h>
#include<math.h>

void variance(int p[10],int n);
void *malloc(size_t size);
void free(void *p);
void main()
{
	int option, i, n;
	float mean, var;
	char c;
	do
	{
		printf("option: 1.Static\t2.Dynamic\n");
		printf("enter option\n");
		scanf("%d",&option);
		printf("Enter the value for n\n");
		scanf("%d",&n);
		switch(option)
		{
			case 1:
				{
					int p[10];
					printf("enter array elements\n");
					for ( i=0; i<n; i++ )
					{
						scanf("%d",&p[i]);
					}
					variance(p,n);
					break;
				}
			case 2:
				{
					int *p = (int *)malloc(n * sizeof(int));       // Dynamic memory allocation
					printf("enter array elements\n");
					for ( i=0; i<n; i++ )
					{
						scanf("%d",(p+i));
					}
					variance(p,n);
					free(p);
					break;
				}
			default:
				printf("enter valid option\n");
				break;
		}
		printf("Do you want to continue?\n");
		scanf("\n%c",&c);
	}
	while ( c == 'y' );
}
void variance(int p[10],int n)
{
	int sum = 0,i;
	float x = 0,mean,var;
	for(i = 0;i < n;i++)
	{
		sum = sum + (*(p+i));
		mean = sum / (float)n;					// Function definition
	}
	printf("sum is %d\n",sum);
	printf("mean is %f\n",mean);
	for(i = 0;i < n;i++)
	{
		x = x + ((*(p+i) - mean) * (*(p+i) - mean));
	}
	var = x / (float)n;
	printf("var is %f\n",var);
}
