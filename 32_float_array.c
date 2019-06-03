	/*Title:float_array.c
	Author:Geetha
	Date;19/07/2018
Description:sort the array which are in type float*/

#include <stdio.h>

int main()
{
	float *arr,temp;
	int i,j,n;
	char g;
	do
	{
		printf("enter size of array\n");
		scanf("%d",&n);
		printf("enter array elements\n");
		for (i = 0 ; i < n ; i++)
		{
			scanf("%f",&arr[i]);
		}
		printf("elements in sorted order\n");
		for (i = 0 ; i < n ; i++)
		{
			for (j = i ; j < n ; j++)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (i = 0 ; i < n ; i++)
		{
			printf("%f\n",arr[i]);
		}
		printf("wish to continue\n");
		scanf("\n%c",&g);
	}
	while (g == 'y');
}
