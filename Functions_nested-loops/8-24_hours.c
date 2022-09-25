#include <stdio.h>
#include "main.h"
//A program that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
void jack_bauer(void)
{
	int i, j, k, l, m;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 9;

	while(i <= 2)
	{
		while(j <= m)
		{
			while (k <= 5)
			{
				while(l <= 9)
				{
					if(i == 1 && j == 9)
						m = 3;
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
}

int main(void)
{
	jack_bauer();
	return 0;
}
