#include <stdio.h>
#include "main.h"
// A program that multiplies two numbers

int mul(int a, int b)
{
	int result = 0;

	result = a * b;
	return result;

}

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return 0;
}
