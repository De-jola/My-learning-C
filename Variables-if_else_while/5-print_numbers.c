#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints single digit numbers 
 * of base 10 starting from 0
 */
int main(void)
{
	int n;

	n = 0;
	while(n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return 0;
}
