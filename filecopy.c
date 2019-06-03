#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_file (int argc, char *argv[]);
void main(int argc, char *argv[])
{
	int n;
	char a;
	do
	{
		printf("1. ./a.out\n2. ./a.out f1.txt\n3. ./a.out f2.txt\n4. ./a.out f1.txt f2.txt\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				my_file(argc,argv);
				break;
			case 2:
				my_file(argc,argv);
				break;
			case 3:
				my_file(argc,argv);
				break;
			case 4:
				my_file(argc,argv);
				break;
			default:
				printf("invalid character\n");
				break;
		}
		printf("Do you want to continue ");
		scanf("\n%c",&a);
	}
	while(a == 'y');
}
int my_file (int argc, char *argv[])
{
	FILE *sptr, *dptr, *sptr2;
	int ch,i=0;
	char c;
	char str[20];
	if(argc == 1)
	{
		getchar();
		printf("enter a string\n");
		while((c = getchar()) != '\n')
		{
			str[i] = c;
			i++;
		}
		str[i] = '\0';
		puts(str);
	}
	if(argc == 2)
	{
		sptr = fopen(argv[i],"r");
		if(sptr == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		while((ch = fgetc(sptr)) != EOF)
		{
			fputc(ch,stdout);
		}
		fclose(sptr);
	}
	if(argc == 3)
	{
		sptr = fopen(argv[1],"r");
		if(sptr == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		dptr = fopen(argv[2],"w");
		if(dptr == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		while((ch = fgetc(sptr)) != EOF)
		{
			fputc(ch,dptr);
		}
		fclose(sptr);
		fclose(dptr);
	}
	if(argc == 4)
	{
		sptr = fopen(argv[1],"r");
		if(sptr == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		sptr2 = fopen(argv[2],"r");
		if(sptr2 == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		dptr = fopen(argv[3],"a");
		if(dptr == NULL)
		{
			printf("error in opening file\n");
			return 1;
		}
		while((ch = fgetc(sptr)) != EOF)
		{
			fputc(ch,dptr);
		}
		while((ch = fgetc(sptr2)) != EOF)
		{
			fputc(ch,dptr);
		}
		fclose(sptr2);
		fclose(sptr);
		fclose(dptr);
	}
}
