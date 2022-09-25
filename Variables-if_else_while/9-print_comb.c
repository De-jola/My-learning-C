#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints all possibe combinations of single digit numbers
 */
int main(void)
{
	int n;

	n = 0;
	while(n < 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(n + '0');
	return 0;
}
