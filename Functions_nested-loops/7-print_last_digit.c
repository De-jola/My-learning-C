#include <stdio.h>
#include "main.h"
//A program that prints the last digit of a number

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n > 0)
		return (last_digit);
	else if (n < 0)
		return (0 - last_digit);
	else
		return n;
}

int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar(r + '0');
	r = print_last_digit(0);
	_putchar(r + '0');
	r = print_last_digit(-1024);
	_putchar(r + '0');
	r = print_last_digit(4);
	_putchar(r + '0'); 
	_putchar('\n');
	return 0;
}
