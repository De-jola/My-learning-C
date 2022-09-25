#include <stdio.h>
#include <stdlib.h>
#include "main.h"
// A program that prints the first 50 fibonacci numbers starting with 1 and 2

void print_fibonacci_sum(void)
{
	unsigned long i, m, n, sum, even;

	i = 0;
	m = 0;
	n = 1;
	sum = 0;
	even = 0;

	while(i < 24)
	{
		sum = m + n;
		if(sum % 2 == 0)
		{
			printf("%lu, ", sum);
			m = sum;
			sum = n + m;
			printf("%lu, ", sum);
			n = sum;
			i++;
		}
		n = sum;
		i++;
	}
	sum = m + n;
	if(sum % 2 == 0)
	{
		printf("%lu, ", sum);
		m = sum;
		sum = n + m;
		printf("%lu\n", sum);
	}
	printf("\n");
}
int main(void)
{
	print_fibonacci_sum();
	return 0;
}
