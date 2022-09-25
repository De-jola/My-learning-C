#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints all possible different combos of two digits
 */
int main(void)
{
	int n;
	int m;

	n = 0;
	m = 0;

	while(n <= 3)
	{
		while(m <= 9)
		{
			if(m == n)
				m++;
			if(m != n - n || m != n - 1)
			{
				putchar(n + '0');
				putchar(m + '0');
			}
			if((n != 3 || m != 9) && (m != n - n || m != n - 1))
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = 0;
	}
	putchar('\n');
	return 0;
}
