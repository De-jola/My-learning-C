#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints single digit numbers of base 10 from 0
 */
int main(void)
{
	int n;

	n = 0;
	while(n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return 0;
}
