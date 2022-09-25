#include <stdio.h>
#include "main.h"
//A program that takes a pointer to an int and updates the value to 98

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return 0;
}
