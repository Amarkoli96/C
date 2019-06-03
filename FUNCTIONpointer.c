#include<stdio.h>


void (*func)(void);
void display(void)
{
	printf("hello\n");
}

int main()
{	func=display;
	(*func)();
	return 0;
}
