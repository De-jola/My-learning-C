#include <stdio.h>
#include "main.h"
// A program that prints the numbers from 0 to 9

void print_numbers(void)
{
	int n = 0;

	while(n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');

}

int main(void)
{
	print_numbers();
	return 0;
}
