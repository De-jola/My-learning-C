#include <stdio.h>
#include "main.h"
//A program that prints integers

void print_number(int n)
{
	int i = 0;
	int j = 0;

	if(n < 0)
	{
		_putchar('-');
		n = -n;
		if(n > 9)
			_putchar((n / 10) +'0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if(n >= 0)
	{
		if(n > 9)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if(n > 99)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar((n % 10) + '0');
	}
}

int main(void)
{
	print_number(-5);
	print_number(10);
	print_number(-98);
	print_number(76);
	print_number(100);
	return 0;
}
