#include<stdio.h>
#include<stdlib.h>

void display(void)
{
	printf("Hello World...!");
}


void (*func[4])(void)={display,NULL,NULL,NULL,NULL};

int main()
{
	(*func[0])();
	return 0;
}
