#include <stdio.h>
#include "main.h"
// A program that prints a triangle with given size

void print_triangle(int size)
{
	int i = 1;
	int j = 1;

	if(size <= 0)
		_putchar('\n');
	while(i <= size)
	{
		while(j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		j = size - i;
		while(j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		j = 1;
		_putchar('\n');
	}

}

int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return 0;

}
