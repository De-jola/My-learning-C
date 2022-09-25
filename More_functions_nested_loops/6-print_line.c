#include <stdio.h>
#include "main.h"
// A program that draws a straight line in the terminal

void print_line(int n)
{
	int i = 0;

	if(n <= 0)
		_putchar('\n');
	while (i < n)
	{
		_putchar('_');
		if(i == n - 1)
			_putchar('\n');
		i++;
	}
}

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
