/*
Title : atoi
Author: vasanthi
Date : 26-07-2018
Description : This program converts string to integer vice versa. 
*/
#include<stdio.h>
#include<stdio_ext.h>
//function prototypes
void atoi();
void itoa();
void getword();
void main()
{
	int option,ch;
	char c;
	do
	{
		printf("enter option:\n1.atoi\n2.itoa\n3.getword\n");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
				atoi();
				break;
			case 2:
				itoa();
				break;
			case 3:
				getword();
				break;
			default:
				printf("invalid\n");
				break;
		}
		printf("Do you want to continue ");
		scanf("\n%c",&c);
	}
	while(c == 'y');
	getchar();
}
//function definitions
void atoi()
{
	int i,res = 0;
	char str[20];
	getchar();
	printf("enter string\n");
	scanf("%[^\n]s",str);
	for(i=0;*(str+i) != '\0';)
	{
		if((str[i] >= 48 && str[i] <= 57) || str[i] == 45)
		{
			i++;
			res = 1;
		}
		else
		{
			break;
		}
	}
	str[i] = '\0';
	if(res == 1)
	{
		printf("%s\n",str);
	}
	else
	{
		printf("0\n");
	}
}
void itoa()
{
	int n,i=0,begin,count,rem,base;
	char a[10],temp;
	printf("enter an integer\n");
	scanf("%d",&n);
	printf("16.hex\n10.dec\n8.oct\n2.binary\n");
	printf("enter base\n");
	scanf("%d",&base);
	while(n>0)
	{
		rem = n % base;
		n = n / base;
		if(rem > 9)
		{
			rem = rem - 10;
			rem = rem + 97;
		}
		else
		{
			rem = rem + 48;
		}
		a[i] = rem;
		i++;
	}
	a[i] = '\0';
	count = i - 1;
	begin = 0;
	for(i=count;i>(count/2);i--)
	{
		temp = a[i];
		a[i] = a[begin];
		a[begin] = temp;
	}
	printf("%s\n",a);
}
void getword()
{
	int i,c=0;
	char ch;
	getchar();
	printf("enter string\n");
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ')
		{
			break;
		}
		else
		{
			c++;
			printf("%c",ch);
		}
	}
	printf("\n");
	printf("count %d\n",c);
}
