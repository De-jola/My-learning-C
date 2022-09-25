#include <stdio.h>
#include "main.h"
//A program that prints the numbers from0 to 9 except 2 and 4

void print_most_numbers(void)
{
	int n = 0;

	while(n <= 9)
	{
		if(n == 2 || n == 4)
			n++;
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}

int main(void)
{
	print_most_numbers();
	return 0;
}

