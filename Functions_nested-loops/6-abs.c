#include <stdio.h>
#include "main.h"
//A program that computes the absolute value of an integer
int _abs(int n)
{
	if (n > 0)
		return n;
	if (n == 0)
		return n;
	if (n < 0)
		return (0 - n);
}

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return 0;
}
