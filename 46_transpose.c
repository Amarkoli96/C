/*
Title : transpose
Author : vasanthi
Date : 25-07-2018
Description : The given program transpose the input matrix
*/
#include<stdio.h>
#include<math.h>
void transposemat(int a[10][10],int trans[10][10],int row,int col);
void main()
{
	int a[10][10], trans[10][10], row, col, i, j;
	char c;
	do
	{
		printf("enter number of rows and columns\n");
		scanf("%d %d",&row,&col);
		printf("enter elements of matrix\n");
		for (i=0; i<row; i++)
		{
			for ( j=0; j<col; j++)
			{
				scanf("%d",&a[i][j]);				// Read the elements
			}
		}
		transposemat(a,trans,row,col);					// Function call
		printf("Do you want to continue ");
		scanf("\n%c",&c);
	}
	while(c == 'y');
}
void transposemat(int a[10][10],int trans[10][10],int row,int col)
{
	int i,j;								// Function Definition
	printf("Entered matrix is\n");
	for ( i=0; i<row; i++ )
	{
		for ( j=0; j<col; j++)
		{
			printf("%d\t",a[i][j]);
			if  ( j == col - 1 )
				printf("\n");
		}
	}
	for ( i=0; i<row; i++)
	{
		for ( j=0; j<col; j++ )
		{
			trans[j][i] = a[i][j];					// Transposing the input matrix
		}
	}
	printf("Transpose of matrix is\n");
	for(i=0;i<col;i++)
	{
		for ( j=0; j<row; j++ )
		{
			printf("%d\t",trans[i][j]);
			if ( j == row - 1 )
				printf("\n");
		}
	}
}
