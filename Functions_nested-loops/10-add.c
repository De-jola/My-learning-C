#include <stdio.h>
#include "main.h"
// A program that adds two integers and returns the result
int add(int n, int m)
{
	int result;

	result = n + m;
	return result;
}

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return 0;
}
