#include <stdio.h>
#include "main.h"
// A function that prints the 9 times table, starting with 0
void times_table(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while(i <= 9)
	{
		while(j <= 9)
		{
			k = j * i;
			if(k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(k + '0');
			if(k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}

int main(void)
{
	times_table();
	return 0;
}
