	/*Title:my_printf.c
	Author:vasanthi
	date : 8-08-2018
	Description:printing data without using printf*/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int my_printf(const char *format, ...);

int main()
{
	char ch = 'A';
	my_printf("The value of char: %c\n", ch);
	int i = 10;
	my_printf("The value of integer: %d\n", i);
	float f = 12.25;
	my_printf("The value of float: %f\n", f);
	short int sh = 230;
	my_printf("The value of short int: %hi\n", sh);
	unsigned short int ush = 6230;
	my_printf("The value of unsigned short int: %hu\n", ush);
	double d = 125.325;
	my_printf("The value of double: %lf\n", d);
	int in = 15;
	my_printf("The value of integer(using i): %i\n", in);
	long int ln = 22299990;
	my_printf("The value of long(i): %li\n", ln);
	long int ln1 = 33322290;
	my_printf("The value of long(d): %ld\n", ln1);
	long double ld = 333.25690;
	my_printf("The value of long double: %Lf\n", ld);		//not working
	unsigned int un = 1545455742;
	my_printf("The value of unsigned int: %u\n", un);
	long long int lli = 125486136455;
	my_printf("The value of long long int: %lli\n", lli);	//not working
	int oc = 236;
	my_printf("The value of octal int: %o\n", oc);
	int hec = 237;
	my_printf("The value of hex int: %x\n", oc);

	return 0;
}

int my_printf(const char *format, ...)
{
	const char *p = format;
	va_list op;
	va_start(op, format);
	char ch;
	int i;
	float f;
	double d;
	short int sh;
	unsigned short int ush;
	long int ln1;
	long double ld; 
	unsigned int un;
	long long int lli;
	int oc;
	int hec;
	char buffer[100] = {'\0'};

	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c':
							ch = (char)va_arg(op, int);
							putchar(ch);
							break;
				case 'd':
				case 'i':
							i = va_arg(op, int);
							sprintf(buffer, "%d", i);
							fputs(buffer, stdout);
							break;
				case 'f':
							f = (float)va_arg(op, double);
							memset(buffer, '\0', 100);
							sprintf(buffer, "%f", f);
							fputs(buffer, stdout);
							break;
				case 'u':
							un = (unsigned int)va_arg(op, int);
							memset(buffer, '\0', 100);
							sprintf(buffer, "%u", un);	
							fputs(buffer, stdout);
							break;
				case 'o':
							oc = va_arg(op, int);
							memset(buffer, '\0', 100);
							sprintf(buffer, "%o", oc);	
							fputs(buffer, stdout);
							break;
				case 'x':
				case 'X':
							hec = va_arg(op, int);
							memset(buffer, '\0', 100);
							sprintf(buffer, "%x", hec);	
							fputs(buffer, stdout);
							break;
				case 'h':
							switch(*++p)
							{
								case 'i':
											sh = (short int)va_arg(op, int);
											memset(buffer, '\0', 100);
											sprintf(buffer, "%hi", sh);
											fputs(buffer, stdout);
											break;
								case 'u':
											ush = (unsigned short int)va_arg(op, int);
											memset(buffer, '\0', 100);
											sprintf(buffer, "%hu", ush);
											fputs(buffer, stdout);
											break;
											
							}
							break;
							
							
				case 'l':
							switch(*++p)
							{
								case 'f':
											d =	va_arg(op, double);
											memset(buffer, '\0', 100);
											sprintf(buffer, "%lf", d);
											fputs(buffer, stdout);
											break;
								case 'i':
								case 'd':
											ln1 = (long int)va_arg(op, int);
											memset(buffer, '\0', 100);
											sprintf(buffer, "%ld", ln1);
											fputs(buffer, stdout);
											break;
								case 'l':
											switch(*++p)
											{
												case 'i':
												case 'd':
															lli = (long long int)va_arg(op, int);
															memset(buffer, '\0', 100);
															sprintf(buffer, "%lld", lli);
															fputs(buffer, stdout);
															break;
														
											}
							}
							break;
				case 'L':
							switch(*++p)
							{
								case 'f':
											ld = (long double)va_arg(op, double);
											memset(buffer, '\0', 100);
											sprintf(buffer, "%Lf", ld);
											fputs(buffer, stdout);
											break;
											
							}
							break;
			}
		}
		else
		{
			putchar(*p);
		}
		p++;
	}
	va_end(op);
}

