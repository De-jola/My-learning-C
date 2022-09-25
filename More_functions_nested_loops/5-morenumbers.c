#include <stdio.h>
#include "main.h"
// A program that prints numbers from 0 to 14 10 times

void more_numbers(void)
{
	int n = 0;
	int m = 0;

	while(n <= 10)
	{
		while(m <= 14)
		{
			if(m > 9)
			{	
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
			m++;
		}
		_putchar('\n');
		n++;
		m = 0;
	}
}

int main(void)
{
	more_numbers();
	return 0;
}
