#include <stdio.h>
#include <stdlib.h>
#include "main.h"
// A program that computes and prints the sum of all the multiples of 3 or 5 below 1024

void sum_multiple(void)
{
	unsigned int n = 0;
	unsigned int sum = 0;

	while(n < 1024)
	{
		if(n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%u\n", sum);
}

int main(void)
{
	sum_multiple();
	return 0;
}
