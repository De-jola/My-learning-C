#include <stdio.h>
#include "main.h"
#include <stdlib.h>
// A program that prints integers using _putchar

void print_number(int n)
{
	int i = 0;
	char str[98];

	sprintf(str, "%d", n);
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
