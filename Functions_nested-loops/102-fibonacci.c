#include <stdio.h>
#include <stdlib.h>
#include "main.h"
// A program that prints the first 50 fibonacci numbers starting with 1 and 2

void print_fibonacci_50(void)
{
	unsigned long i, m, n, sum;

	i = 0;
	m = 0;
	n = 1;
	sum = 0;

	while(i < 24)
	{
		sum = m + n;
		printf("%lu, ", sum);
		m = sum;
		sum = n + m;
		printf("%lu, ", sum);
		n = sum;
		i++;
	}
	sum = m + n;
	printf("%lu, ", sum);
	m = sum;
	sum = n + m;
	printf("%lu\n", sum);
}
int main(void)
{
	print_fibonacci_50();
	return 0;
}
