/*
Title:ap_gp_hp.c
Author:vasanthi
Date:10-06-2018
Description:The program prints the ap,gp and hp series according to the given input.
*/

#include <stdio.h>

int main()
{
	int s, n, d, i;
	char ch;
	do
	{
		printf("Enter the starting num\n");				/* Read the starting number */
		scanf("%d",&s);
		printf("Enter the difference for ap,hp or ratio for gp\n");	/* Read the difference or ratio */	
		scanf("%d",&d);
		printf("Enter the range\n");					/* Read the range from the user */
		scanf("%d",&n);
		{
			long long int res=s;
			printf("ap series is :\n");
			for ( i=1; i<=n; i++ )
			{
				printf("%lld ",res);				/* printing the ap_series according to given inputs */
				res=res+d;
			}
			long long int res1=s;
			printf("\ngp series is:\n");
			for ( i=1; i<=n; i++ )
			{
				printf("%lld ",res1);				/* printing the gp_series according to given inputs */
				res1=res1*d;
			}
			float res2;
			float t=s;
			float k=d;
			res2=1/t;
			printf("\nhp series is :\n");				/* printing the hp_series according to given inputs */
			for ( i=1; i<=n; i++ )
			{
				printf("%f ",res2);
				res2=1/((1/res2)+k);
			}
		}
		printf("\nDo you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}
	while(ch=='y');
	return 0;
}








