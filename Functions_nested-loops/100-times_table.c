#include <stdio.h>
#include "main.h"
//A program that pritns n times table starting with 0

void print_times_table(int n)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while(i <= n)
	{
		if (n > 15 || n < 0)
			break;
		while(j <= n)
		{
			k = i * j;
			if(k <= 9)
			{
				_putchar(k + '0');
				if(j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if(j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (k > 99)
			{
				l = k % 100;
				_putchar((k / 100) + '0');
				_putchar(0 +'0');
				_putchar((l % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if(k > 109)
			{
				l = k % 100;
				_putchar((k / 100) + '0');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}

}

int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(-1);
	_putchar('\n');
	print_times_table(12);
	_putchar('\n');
	return 0;

}
