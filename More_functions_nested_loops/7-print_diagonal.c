#include <stdio.h>
#include "main.h"
//A program that draws a diagonal line

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if(n <= 0)
		_putchar('\n');
	while(i < n)
	{
		while (j < i + 1)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		j = 0;
	}
}
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
