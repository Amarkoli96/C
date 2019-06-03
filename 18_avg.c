	/*Title		:	Average.c
	Author		:	vasanthi
	Date		:	12/07/2018
	Description	:	average of array elements*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
float cal_avg(int a[10],int n);
float average(int argc,char *argv[]); 						// Function prototypes

void main(int argc , char *argv[])
{
	char g;
	int option;
	do
	{
		printf("1.scan from keyboard\n2.command line arguments\n3.environmental variables\n");
		scanf("%d",&option);						// Read option
		int num, count = 0;
		const char *str = " ";
		char *token, *arr;
		float sum = 0.0, temp;
		int a[10];
		switch(option)
		{
			case 1:
				printf("enter size of array\n");
				scanf("%d",&num);
				a[num];
				temp = cal_avg(a,num);				// Function call
				printf("average = %f\n",temp);
				break;
			case 2:
				temp = average(argc,argv);			// Function call
				printf("average = %f\n",temp);
				break;
			case 3:
				arr = getenv("arr");
				token = strtok(arr,str);
				while(token != NULL)
				{
					count++;
					a[count] = atoi(token);
					sum = sum + a[count];
					token = strtok(NULL,str);
				}
				printf("average = %f\n",(sum/count));
				break;
			default:
				printf("enter valid option\n");
				break;
		}
		printf("wish to continue ");
		scanf("\n%c",&g);
	}
	while(g == 'y');
}
float cal_avg(int *a, int num)								// Function Definition
{
	int i;
	float sum = 0.0;
	printf("enter the elements\n");
	for (i = 0 ; i < num ; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0 ; i < num ; i++)
	{
		sum = sum + a[i];
	}
	return (sum/num);
}
float average(int argc,char *argv[])						  	// calculating average
{
        int i;
        float sum = 0.0,avg = 0.0;
        sum = 0.0;
        avg = 0.0;
        for (i = 1 ; i < argc ; i++)
        {
                sum = sum + atoi(argv[i]);
        }
        avg = sum/(argc-1);
        return avg;
}


