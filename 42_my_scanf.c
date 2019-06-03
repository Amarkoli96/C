	/*Title:my_scanf.c
	Author:vasanthi
	date : 08-08-2018
	Description:reading data without using scanf function*/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

void my_scanf(const char *format, ...);

int main()
{

	char c;
	printf("enter a character ");
	my_scanf("%c", &c);
	printf("the value of c: %c\n", c);
	
	int n;
	printf("enter an integer ");
	my_scanf("%d", &n);
	printf("the value of n: %d\n", n);

	float f;
	printf("enter a float value ");
	my_scanf("%f", &f);
	printf("The value of f %f\n", f);
	
	short int sh;
	printf("enter value of short int ");
	my_scanf("%hi", &sh);
	printf("the value of short int  %hi\n", sh);

	unsigned short int ush;
	printf("enter unsigned short int: ");
	my_scanf("%hu", &ush);
	printf("The value of unsigned short int: %hu\n", ush);

	int in;
	printf("enter value of integer(using i): ");
	my_scanf("%i", &in);
	printf("The value of integer(using i): %i\n", in);

	
	long int ln;
	printf("enter value of long(i): ");
	my_scanf("%li", &ln);
	printf("The value of long(i): %li\n", ln);
	
	long int ln1;
	printf("enter value of long(d): ");
	my_scanf("%ld", &ln1);
	printf("The value of long(d): %ld\n", ln1);

	int oc;
	printf("enter value of octal int: ");
	my_scanf("%o", &oc);
	printf("The value of octal int: %o\n", oc);
//	int hec = 237;
	
	long double ld;
	printf("enter value of long double: ");
	my_scanf("%Lf", &ld);
	printf("The value of long double: %Lf\n", ld);	

	unsigned int un;
	printf("enter value of unsigned int: ");
	my_scanf("%u", &un);
	printf("The value of unsigned int: %u\n", un);

	long long int lli;
	printf("The value of long long int: ");
	my_scanf("%lli", &lli);
	printf("The value of long long int: %lli\n", lli);	

	double d;
	printf("enter value of double: ");
	my_scanf("%lf", &d);
	printf("The value of d: %lf\n", d);

	return 0;
}

void my_scanf(const char *format, ...)
{
	const char *p = format;
	va_list ap;
	va_start(ap, format);
	char *cptr;
	int *iptr;
	float *fptr;
	short int *shptr;
	unsigned short int *ushptr;
	long int *lnptr;
	int *optr;
	double *dptr;
	long double *ldptr;
	unsigned int *unptr;
	long long int *lliptr;
	char buffer[100] = {'\0'};

	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'o':
							optr = va_arg(ap, int *);
							__fpurge(stdin);
							fgets(buffer, 100, stdin);
							*optr = atoi(buffer);
							break;
				case 'u':
							unptr = va_arg(ap, unsigned int *);
							__fpurge(stdin);
							fgets(buffer, 100, stdin);
							*unptr = atoi(buffer);
							break;
				case 'c':
							cptr = va_arg(ap, char *);
							*cptr = fgetc(stdin);
							break;
				case 'd':
				case 'i':
							iptr = va_arg(ap, int *);
							__fpurge(stdin);
							fgets(buffer, 100, stdin);
							*iptr = atoi(buffer);
							break;
				case 'f':
							fptr = va_arg(ap, float *);
							__fpurge(stdin);
							fgets(buffer, 100, stdin);
							*fptr = atof(buffer);
							break;
				case 'l':
							switch(*++p)
							{
								case 'i':
								case 'd':
											lnptr = va_arg(ap, long int *);
											__fpurge(stdin);
											fgets(buffer, 100, stdin);
											*lnptr = atoi(buffer);
											break;
								case 'f':
											dptr = va_arg(ap, double *);
											__fpurge(stdin);
											fgets(buffer, 100, stdin);
											*dptr = atof(buffer);
											break;
								case 'l':
											switch(*++p)
											{
												case 'i':
															lliptr = va_arg(ap, long long int *);
															__fpurge(stdin);
															fgets(buffer, 100, stdin);
															*lliptr = atoi(buffer);
															break;
											}
											break;
							}
							break;

				case 'h':
							switch(*++p)
							{
								case 'i':
											shptr = va_arg(ap, short int *);
											__fpurge(stdin);
											fgets(buffer, 100, stdin);
											*shptr = atoi(buffer);
											break;
								case 'u':
											ushptr = va_arg(ap, unsigned short int *);
											__fpurge(stdin);
											fgets(buffer, 100, stdin);
											*ushptr = atoi(buffer);
											break;
							}
							break;
				case 'L':
							switch(*++p)
							{
								case 'f':
											ldptr = va_arg(ap, long double *);
											__fpurge(stdin);
											fgets(buffer, 100, stdin);
											*ldptr = atof(buffer);
											break;
							}
							break;
			}
		}
		p++;
	}
	va_end(ap);
}
