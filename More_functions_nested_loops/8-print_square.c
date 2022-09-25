#include <stdio.h>
#include "main.h"
// A program that prints a square

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if(size <= 0)
		_putchar('\n');
	while(i < size)
	{
		while(j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}

}

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return 0;
}
